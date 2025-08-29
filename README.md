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

Link do vídeo: 



# DESCRIÇÃO DETALHADA DO PROJETO:

2.1) Entrega 1:

Você e o seu grupo estão na FarmTech Solutions prestando serviços de IA para uma fazenda de médio porte (200 hectares ou aproximadamente 210 campos de futebol oficiais) que produz várias culturas. Seu time precisa analisar uma base de dados com informações de condições de solo e temperatura, relacionadas com o tipo de produto agrícola dessa fazenda. Você deverá prever o rendimento de safra (conforme visto no capítulo 13 - Modelagem de Dados com Regressão Supervisionada, da Fase 4) e explorar a tendência de produtividade (visto no capítulo 10 - Machine Learning Sem Supervisão: Uma Jornada pela Descoberta de Dados, da Fase 5).

Base de dados: a base está anexada no portal, disponível no arquivo “crop_yield.csv”. As variáveis são:

Cultura: o nome da safra para a qual o rendimento está sendo medido.
Precipitação (mm dia 1): a quantidade de chuva em milímetros por dia.
Umidade específica a 2 metros (g/kg): a quantidade de vapor de água no ar por quilograma de ar seco a uma altura de 2 metros acima do solo.
Umidade relativa a 2 metros (%): a quantidade de vapor de água no ar como uma porcentagem da quantidade máxima de vapor de água que pode ser mantida a uma determinada temperatura e pressão.
Temperatura a 2 metros (ºC): a temperatura em graus Celsius a uma altura de 2 metros acima do solo.
Rendimento: a quantidade de rendimento em toneladas por hectare.
 

Metas da Entrega 1:

Baseado no dataset apresentado, sua atividade consiste em:

Fazer uma análise exploratória na base para se familiarizar com os dados;
Encontrar tendências para os rendimentos das plantações, por meio de clusterizações, e identificar se existem cenários discrepantes (outliers);
Fazer cinco modelos preditivos (cada um com um algoritmo diferente, conforme visto no capítulo “Modelagem de Dados com Regressão Supervisionada”) que, dadas as condições, prevejam qual será o rendimento da safra. Esta parte da tarefa inclui seguir as boas práticas dos projetos de Machine Learning, assim como avaliar o modelo com métricas pertinentes ao problema.
 

Entregáveis do Enunciado 1:

Entregue o link de um novo repositório do GitHub em nome do seu grupo (de 1 a 5 pessoas). Pedimos que não realize nenhum novo commit após a data da entrega, para não classificar como entrega após o prazo. Nesse repositório, faça o upload do link do notebook Jupyter, pois vamos executar seu notebook na correção. O Jupyter precisa ter:
Células de códigos executadas, com o código Python otimizado e com comentários das linhas;
Células de markdown organizando seu relatório e discorrendo textualmente sobre os achados a partir dos dados, e conclusões a respeito dos pontos fortes e limitações do trabalho;
O nome do arquivo deve conter seu nome completo, RM e pbl_fase4.ipynb, exemplo: “JoaoSantos_rm76332_pbl_fase4.ipynb”.
Vídeo: grave um vídeo de até 5 minutos demonstrando o funcionamento desse entregável, poste no YouTube de forma “não listado”, e coloque o link no seu GitHub, dentro do README.
Desenvolva o seu README com uma documentação introdutória, conduzindo o leitor para o seu Jupiter, onde lá, estará todo o passo a passo da sua solução e a sua descrição completa. Não precisa repetir a descrição do Jupiter no README do GitHub. Deixe sempre os seus repositórios públicos para que eles sejam acessíveis pela equipe interna da FIAP, mas cuidado com seus links para que não vazem e sejam compartilhados e plagiados.
Dica: assista esse vídeo para saber mais detalhes de como subir o Jupyter Notebook para o seu Git: <https://www.youtube.com/watch?v=5ZYRqca7OVc>.

2.2) Entrega 2:

Considere que sua Machine Learning precisa ser hospedada em uma estrutura de computação em nuvem.

 

Metas da Entrega 2:

1. Usando a calculadora da AWS, sua missão nessa entrega é realizar uma estimativa de custos (On-Demand – 100%) para usar uma máquina Linux simples, comparando os valores cotados para a região de São Paulo (BR) e para a região da Virgínia do Norte (EUA). A máquina será utilizada para hospedar uma API que receberá dados dos sensores que coletam as variáveis da Entrega 1 e onde rodará a Machine Learning. Qual a solução mais barata com as seguintes configurações?

2 CPUs.
1 GIB de memória.
Até 5 Gigabit de rede.
50 GB de armazenamento (HD).
 

2. Suponha também que você precisa acessar rapidamente os dados dos sensores e que há restrições legais para armazenamento no exterior. Qual opção você escolheria? Justifique.

Entregáveis do Enunciado 2:

Acrescente esses dados no mesmo README da Entrega 1 em nome do seu grupo (de 1 a 5 pessoas), desenvolvendo o README com imagens, gráficos e textos suficientes para entender a justificativa em escolher recursos na nuvem AWS. Pedimos que continue não realizando nenhum novo commit após a data da entrega, para não ser classificado como entrega após o prazo.
Vídeo: grave um segundo vídeo de até 5 minutos demonstrando a comparação de recursos usando a calculadora AWS, poste no YouTube de forma “não listado” e coloque o link no seu GitHub, dentro do README.
 

3) PROJETO “IR ALÉM”:

Nesta seção, vamos apresentar dois entregáveis extras (que não valem nota), onde os grupos poderão escolher qual “Ir Além” gostariam de desenvolver. Se postarem suas soluções, serão gratificados da seguinte forma: cada integrante receberá um troféu de excelência em busca do “Ir Além” no curso de IA da FIAP ao final do ano letivo, isto é, os grupos que entregarem um “Ir Além” entre as Fases 5 e 7, terão seus pontos somados. Cada “Ir Além” valerá até 10 pontos, portanto, teremos 30 pontos em jogo que não impactarão no boletim, e sim, apenas um game de desafio interno na turma. A nota do “Ir Além” será divulgada particularmente no chat do Teams para o responsável que postou a solução. No final do ano letivo, os pontos serão somados e divulgados amplamente no Teams. O que se espera de cada “Ir Além” será descrito a seguir. E ainda, as entregas que não estiverem totalmente funcionais e corretas, serão avaliadas mesmo assim. O importante é tentar ir além! A quantidade de grupos que serão gratificados ainda está em análise, pois vamos observar o nível do engajamento no lançamento dessa proposta. Contudo, a ideia é gratificar uma boa parte dos grupos participantes.

 

1. Primeira opção “Ir Além”:

Título: Sistema de Coleta e Comunicação de Dados Usando ESP32 Integrado ao Wi-Fi.

Descrição: desenvolva um projeto utilizando um ESP32 real com comunicação Wi-Fi e coleta de dados via sensores. O grupo tem liberdade para escolher o sensor que será utilizado (precisa ser pelo menos dois sensores distintos quaisquer para dar certo), desde que esteja alinhado às soluções desenvolvidas pela sua FarmTech Solutions. Os dados coletados devem ser enviados a um serviço local ou remoto (o grupo escolhe), como:

Banco de Dados (local ou na nuvem); ou
Página HTML para visualização/dashboard; ou
Broker MQTT para publicação e subscrição. Experimente usar o ubidots.com; ou
Servidor (HTTP ou outra solução apropriada).
 

Etapas do Projeto:

1. Definição do Sensor e Contexto: escolha os sensores alinhados às necessidades das soluções da sua FarmTech Solutions. Descreva o motivo da escolha e o objetivo do projeto.

2. Implementação no ESP32:

Integre o sensor ao ESP32.
Configure a comunicação via Wi-Fi.
Programe a coleta de dados e o envio para o serviço escolhido.
3. Armazenamento ou Visualização: configure o envio de dados para:

Um banco de dados local ou remoto (exemplo: SQLite, MySQL); ou
Uma página HTML acessível via servidor hospedado no ESP32 ou um Python no PC;
Um broker MQTT público ou privado para publicações com dashboard para visualizar os dados dos sensores.
4. Documentação no GitHub:

Crie uma seção no GitHub chamada "Ir Além".
Adicione o código-fonte comentado.
Inclua uma justificativa clara do projeto e dos sensores escolhidos.
Insira uma figura explicativa que mostre a arquitetura do circuito e as tecnologias utilizadas. Tente usar o Wokwi.com para montar seu IoT.
Requisitos:

Utilizar o ESP32 real com comunicação Wi-Fi funcional.
O sensor escolhido deve ser compatível com o contexto do projeto.
Dados coletados devem ser postados em um dos serviços mencionados.
Tecnologias permitidas:
Linguagem: C/C++ ou MicroPython.
Banco de dados: MySQL, SQLite ou Firebase.
Servidor/Página HTML: usar ESP32 como servidor HTTP.
Broker MQTT: Mosquitto ou outro servidor MQTT.
Outras tecnologias: com justificativa.
Critérios de Avaliação do Ir Além Opção 01:

Funcionalidade do Sistema: coleta e envio de dados funcionais.
Integração Wi-Fi: comunicação estável e eficiente.
Escolha e Justificativa do Sensor: clareza e alinhamento ao contexto.
Documentação no GitHub:
Código-fonte organizado e comentado;
Figura clara da arquitetura do projeto;
Justificativa concisa.
Apresentação Final: demonstração prática do sistema funcionando por meio de um vídeo de até 5 minutos e deixe seu GitHub organizado.
Entrega:

Código-fonte no GitHub na seção "Ir Além".
Figura explicativa e documentação completa.
Demonstração funcional do sistema por meio de um link de vídeo “não listado” no YouTube de até 5 minutos.
2. Segunda Opção “Ir Além”:

Título: Classificação da Saúde de Plantações Usando Machine Learning e ESP32.

Descrição: implemente um sistema de Machine Learning que classifique a saúde de uma plantação em "Saudável" ou "Não saudável". Os dados devem ser coletados em tempo real por um sensor conectado ao ESP32 real, enviados para análise, e usados para treinar e validar o modelo de Machine Learning.

 

Etapas do Projeto:

1. Escolha o tipo de sensor e a cultura agrícola que será avaliada;

2. Integre o sensor ao ESP32 e configure a coleta de dados em tempo real;

3. Envie os dados para o modelo de ML (treinamento e inferência);

4. Desenvolva o modelo de Machine Learning utilizando bibliotecas como, por exemplo, Scikit-learn ou TensorFlow;

5. Valide o modelo com dados em tempo real;

6. Exiba os resultados, indicando se a plantação está saudável ou não.

 

Requisitos:

Utilize Python para treinar o modelo e C/C++ ou MicroPython para programar o ESP32.
Use dados coletados em tempo real do ESP32 e sensor escolhido.
Documente o desenvolvimento e valide o modelo com dados novos.
 

Critérios de Avaliação do Ir Além Opção 2:

Escolha do Sensor e Cultura: é necessário clareza na escolha do sensor e da cultura agrícola. Deve conter uma justificativa técnica demonstrando o alinhamento com o objetivo do projeto.
Coleta e Integração de Dados: correta integração do ESP32 com o sensor, garantindo a coleta de dados em tempo real e o envio estável para análise no modelo de Machine Learning.
Desenvolvimento do Modelo de ML: implementação e treinamento do modelo de Machine Learning utilizando bibliotecas apropriadas (exemplo: Scikit-learn ou TensorFlow ou outras). O modelo deve ser funcional e apresentar resultados coerentes.
Validação e Resultados: validação do modelo com dados em tempo real. Apresentação clara dos resultados obtidos, indicando se a plantação está "Saudável" ou "Não saudável".
Documentação e Justificativa no GitHub: organização e clareza da documentação:
Código-fonte comentado;
Justificativa clara dos sensores e metodologia usada;
Figura da arquitetura com as tecnologias do sistema (ESP32, sensores e Machine Learning escolhida).
Apresentação Final: demonstração prática através de um vídeo de até 5 minutos, mostrando o funcionamento do sistema e a classificação da saúde da plantação e GitHub organizado.
 

Entrega:

Código-fonte no GitHub na seção "Ir Além".
Figura explicativa e documentação completa.
Demonstração funcional do sistema por meio de um link de vídeo “não listado” no YouTube de até 5 minutos.


