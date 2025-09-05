#include <WiFi.h>
#include "DHT.h"

#define DHTPIN 14       // GPIO usado no DHT22
#define DHTTYPE DHT22
#define SOIL_PIN 34     // Soil sensor (AOUT)

DHT dht(DHTPIN, DHTTYPE);

//  Wi-Fi
const char* ssid = "MENDES";
const char* password = "raro2526";

// servidor web na porta 80
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  dht.begin();
  pinMode(DHTPIN, INPUT_PULLUP);

  // conectar no Wi-Fi
  Serial.print("Conectando ao Wi-Fi");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWi-Fi conectado!");
  Serial.print("IP do ESP32: ");
  Serial.println(WiFi.localIP());

  server.begin();
}

void loop() {
  WiFiClient client = server.available();
  if (!client) return;

  Serial.println("Novo cliente conectado");
  String request = client.readStringUntil('\r');
  client.flush();

  //  leituras dos sensores
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  int soilRaw = analogRead(SOIL_PIN);
  int soilPercent = map(soilRaw, 4095, 0, 0, 100);
  if (soilPercent < 0) soilPercent = 0;
  if (soilPercent > 100) soilPercent = 100;

  //  página HTML com dashboard
  String html = "<!DOCTYPE html><html><head>";
  html += "<meta charset='UTF-8'>";
  html += "<title>FarmTech Dashboard</title>";
  html += "<script src='https://cdn.jsdelivr.net/npm/chart.js'></script>";
  html += "<style>body{font-family:Arial;text-align:center;} h1{color:#2E8B57;} .card{background:#f2f2f2;padding:20px;margin:20px;border-radius:10px;display:inline-block;}</style>";
  html += "</head><body>";
  html += "<h1> FarmTech Dashboard</h1>";

  html += "<div class='card'><h2>Dados Atuais</h2>";
  html += "<p> Temp: " + String(t) + " °C</p>";
  html += "<p> Umidade do Ar: " + String(h) + " %</p>";
  html += "<p> Umidade do Solo: " + String(soilPercent) + " % (raw: " + String(soilRaw) + ")</p></div>";

  // gráfico
  html += "<canvas id='myChart' width='400' height='200'></canvas>";

  // script JS para atualizar o gráfico
  html += "<script>";
  html += "var ctx = document.getElementById('myChart').getContext('2d');";
  html += "var chart = new Chart(ctx, {type: 'line', data: {labels: [], datasets: [{label: 'Temperatura (°C)', borderColor: 'red', fill: false, data: []},{label: 'Umidade Ar (%)', borderColor: 'blue', fill: false, data: []},{label: 'Umidade Solo (%)', borderColor: 'green', fill: false, data: []}]}, options: {scales: {y: {beginAtZero: true}}}});";

  // função para atualizar dados a cada 5s
  html += "function addData(t,h,s){";
  html += "var now = new Date().toLocaleTimeString();";
  html += "chart.data.labels.push(now);";
  html += "chart.data.datasets[0].data.push(t);";
  html += "chart.data.datasets[1].data.push(h);";
  html += "chart.data.datasets[2].data.push(s);";
  html += "if(chart.data.labels.length>10){";
  html += "chart.data.labels.shift();";
  html += "chart.data.datasets[0].data.shift();";
  html += "chart.data.datasets[1].data.shift();";
  html += "chart.data.datasets[2].data.shift();}";
  html += "chart.update();}";
  html += "setInterval(function(){ addData(" + String(t) + "," + String(h) + "," + String(soilPercent) + "); }, 5000);";
  html += "</script>";

  html += "</body></html>";

  // envia resposta
  client.println("HTTP/1.1 200 OK");
  client.println("Content-type:text/html");
  client.println("Connection: close");
  client.println();
  client.println(html);

  delay(1);
  Serial.println("Cliente desconectado");
}
