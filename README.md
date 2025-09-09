# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# Cap 1 - FarmTech na era da Cloud Computing

<div align="center">

|        Grupo             |                   RM                   |
|:------------------------:|:--------------------------------------:|
| **Arthur Luiz Rosado Alves** | RM562061                          |
| **Renan de Oliveira Mendes** | RM563145                          |

</div>

Link do vídeo: https://youtu.be/7b80WCkDx4Y



# Entrega1

Análise de uma base de dados com informações de: condições de solo, temperatura, tipo de produto agrícola e rendimento da safra dessa fazenda.
Indetificação de tendências para os rendimentos das plantações, por meio de clusterizações, e tratamento de outliers.
Treinamento e avaliação de cinco modelos preditivos.

- crop_yield.csv -> Base de dados
- Cap1__FarmTech.ipynb - > Notebook python com os processos realizados e modelos treinados.

<p align="center">
<img src="assets/Entrega1.png">
</p>

<p align="center">
<img src="assets/Entrega1II.png">
</p>

<p align="center">
<img src="assets/Entrega1III.png">
</p>


# Entrega 2:

Acessando a AWS, utilizamos a calculadora de custos para criar uma estimativa de uso de uma máquina Linux simples (EC2).
- 2 CPUs.
- 1 GIB de memória.
- Até 5 Gigabit de rede.
- 50 GB de armazenamento (HD).

- estimativaAWS.pdf -> Estimativa realizada.

Comparamos os valores em duas regiões: São Paulo (BR) X Virgínia do Norte (EUA), para responder:
_"Suponha também que você precisa acessar rapidamente os dados dos sensores e que há restrições legais para armazenamento no exterior. Qual opção você escolheria? Justifique."_

 <p align="center">
<img src="assets/Entrega2.png">
</p>

 <p align="center">
<img src="assets/Entrega2II.png">
</p>

 <p align="center">
<img src="assets/Entrega2III.png">
</p>
 <p align="center">
<img src="assets/Entrega2IIV.png">
</p>
 <p align="center">
<img src="assets/Entrega2IIIV.png">
</p>

## Análise e Conclusão

Diante da estimativa que realizamos, a alternativa mais adequada é a utilização da região São Paulo. Embora o custo mensal nesta região seja superior em comparação a Virgínia do Norte, a decisão não pode se basear somente pela parte financeira. Outros dois pontos fundamentais que justificam a escolha: restrições legais e desempenho técnico.

Como existem restrições legais para o armazenamento de dados no exterior, nesse cenário, manter a infraestrutura na região de São Paulo assegura conformidade com legislações como a LGPD e outras normas regulatórias aplicáveis, evitando riscos jurídicos. Além disso, como os sensores responsáveis pela coleta de dados estão localizados no Brasil, hospedar a API e o processamento de Machine Learning no mesmo país garante redução de latência e maior eficiência no acesso as informações em tempo real. Garantindo resposta rápida.

Portanto, mesmo diante do custo adicional estimado de aproximadamente USD 19 por mês, a solução mais apropriada é optar pela região São Paulo (sa-east-1), essa decisão garante conformidade regulatória e eficiência técnica.

O gráfico abaixo mostra a diferença de valores, mas resalta simbolicamente como os benefícios legais e desempebnho técnico podem "amenizar" os custos.
 <p align="center">
<img src="assets/Entrega2IX.png">
</p>


# Projeto IR ALÉM
Decidimos realizar o “Ir Além”. Optamos pela primeira opção.
Link: https://youtu.be/VA6OxGdi-YU
Pasta IrAlem
 
## Sistema de Coleta e Comunicação de Dados Usando ESP32 Integrado ao Wi-Fi.

Utilizando um ESP32 real com comunicação Wi-Fi e coleta de dados via sensore, desenvolvemos uma solução para a FarmTech Solutions. 
E criamos uma página HTML, usando o ESP32 como servidor HTTP.

### Sensores

Para o desenvolvimento deste projeto da FarmTech Solutions, foram escolhidos dois sensores:

DHT22: responsável por medir temperatura e umidade do ar, fundamentais para o monitoramento climático em ambientes agrícolas.

<p align="center">
<img src="assets/DHT22.jpeg">
</p>

Capacitive Soil Moisture Sensor v2.0: utilizado para medir a umidade do solo, informação essencial para a tomada de decisão no manejo da irrigação.

<p align="center">
<img src="assets/Sensor_Solo.jpeg">
</p>

Escolhemos esses sensores por se alinharem com soluções e processos de agricultura inteligente, onde o controle de clima e de irrigação são fatores críticos para aumentar a produtividade e reduzir desperdícios de recursos hídricos.

### Implementação

Utilizamos um ESP32 DevKit conectado a uma protoboard de 400 pontos, com jumpers para ligação dos sensores.
O DHT22 foi ligado ao GPIO14, enquanto o sensor de umidade do solo foi conectado ao GPIO34 - entrada analógica.

<p align="center">
<img src="assets/ESP32_Sensores.jpeg">
</p>

<p align="center">
<img src="assets/ESP32_Sensores2.jpeg">
</p>

A comunicação Wi-Fi foi configurada no ESP32, permitindo a integração do dispositivo com a rede local.
O firmware desenvolvido realiza a leitura periódica dos sensores e organiza os dados coletados.

<p align="center">
<img src="assets/CodigoC.jpeg">
</p>


### Armazenamento e Visualização

Criamos uma página web hospedada no próprio ESP32 (HTTP embutido).

Essa página exibe os dados organizados -Temperatura, Umidade do Ar e Umidade do Solo.

<p align="center">
<img src="assets/HTML_Leitura.jpeg">
</p>

Também foi implementado um dashboard interativo, que apresenta gráficos em tempo real dos parâmetros monitorados.
Os valores são atualizados automaticamente no navegador, permitindo acompanhar a evolução dos dados de forma intuitiva.

<p align="center">
<img src="assets/HTML_Leitura2.jpeg">
</p>

### Resultado

1.Dois sensores distintos foram integrados e configurados no ESP32.

2.A comunicação Wi-Fi foi estabelecida com sucesso.

3.Os dados coletados foram enviados e exibidos em uma interface web acessível pela rede local.

 *O projeto conseguiu representar uma solução real para soluções de monitoramento agrícola inteligente dentro da FarmTech Solutions.*




# Projeto IR ALÉM 2

Realizamos um segundo projeto, utilizando sensores de baixo custo, aplicados a Internet das coisas voltado ao agronegócio.
Nesse segundo projeto utilizamos a comunicação via protocolo MQTT, e uma aplicação em Python para criar uma visualizaçao gráfica dos dados obtidos.

Link: https://www.youtube.com/watch?v=hZPx_abSSwE

Pasta IrAlem_2

  - DHT22: Sensor Digital que mede temperatura e umidade do ar com precisão. Esse sensor é digital pelo fato de realizar os processamentos internos dos sinais e já enviar os valores prontos em forma de bits, garatindo assim confiabilidade, simplicidade na integração de microcontroladores como o esp32.
  
  - Sensor Capacitive Soil: Sensor analógico que mede a variação da tensão elétrica conforme o nível de umidade do solo. Sendo assim um sensor Analógico pois apenas passa os volts para o esp32 processar esse valor em escala de "solo seco" ou "solo umido" na qual definimos no arduino ide os valores com base em experimentos sendo assim "3170" atribuido para solo seco e "1485" para solo umido.

No contexto de negócio, nosso projeto se destaca no agronegócio.

- A leitura em tempo real da umidade do solo permite automatizar sistemas de irrigação, reduzindo desperdicios de água e energia elétrica.

- ao correlacionar esses dados de temperatura, umidade do ar e do solo. É possivel criar modelos de machine learning capazes de antecipar condições de estresse hídrico ou doenças, permitindo maior autonomia ao produtor nas tomadas de decisões.

- produtores que utilizarem a nossa solução vao ter vantagens competitivas no mercado, pois vao reduzir seu custo operacional, aumentando a produtividade e assim se destacando no mercado.

# <a name="c2"></a>2. Implementação no ESP32

Durante a implementação do nosso projeto no Wokwi, tivemos a limitação de que o sensor soil não possui suporte na plataforma. Sendo assim tivemos que utilizar um sensor alternativo disponível na plataforma, que simula o comportamento da entrada analógica de forma semelhante.

<p align="center">
<img src="/assets/sensor-wokwi.png"></a>
</p>

# <a name="c3"></a>3. Armazenamento ou Visualização

A comunicação entre o esp32 e nossa aplicação ocorre por meio do protocolo MQTT, que garante o envio das leituras dos sensores de forma eficaz e em tempo real para um broker. O envio das mensagens foi configurado com QoS 0, nível que garante máxima velocidade nesse transporte de dados, sem exigir confirmação de recebimento. Fizemos essa escolha, pelo projeto ser em um cenário de monitoramento contínuo.

Criamos um script em python que se conecta ao broker, recebe as mensagens publicadas e armazena todos os valores em um arquivo csv. Facilitando assim a visualização desses dados tanto para planilhas ou até mesmo treinamento de modelos de machine learning.

<p align="center">
<img src="/assets/var-temp.png"></a>
</p>
