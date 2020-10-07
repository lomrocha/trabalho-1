# Trabalho 1

## Seções

- [Participação](#participação)
- [Laboratório 1](#laboratório-1)
- [Laboratório 2](#laboratório-2)
- [Laboratório 4](#laboratório-4)
- [Referências](#referências)

## Participação

O grupo é composto por três membros: **Kayo Francisco**, **Lucas Rocha** e **Romário Santos**.

O trabalho foi dividido da seguinte forma:

- **Laboratório 1**: Romário Santos.
- **Laboratório 2**: Kayo Francisco.
- **Laboratório 3**: Lucas Rocha.

## Laboratório 1

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus quis quam nulla. Proin vulputate ornare massa a suscipit. Sed et lacus sit amet enim commodo consectetur eu lobortis est. Aliquam ullamcorper erat ut neque faucibus, in imperdiet mi eleifend. Donec dictum scelerisque tellus venenatis dignissim. Mauris turpis odio, rutrum at ipsum quis, convallis euismod sapien. Ut a gravida dolor, eget rutrum lorem. Fusce leo turpis, congue id nisl pellentesque, finibus finibus enim. Praesent at tristique nisi. Vestibulum eget viverra tortor. Suspendisse facilisis justo id porttitor fringilla. Sed nulla velit, aliquam convallis lobortis ac, molestie vitae quam. Curabitur elementum sem at pretium convallis. Nullam feugiat condimentum urna, nec ullamcorper diam volutpat vulputate.

Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Etiam fringilla, quam sit amet eleifend lacinia, dui nulla aliquam metus, vitae scelerisque diam nibh euismod lacus. Cras ut neque at mauris pellentesque ornare a at orci. Cras aliquet a nisl ac placerat. Curabitur urna enim, imperdiet in orci quis, viverra pretium tellus. Quisque efficitur tellus hendrerit nisi condimentum, ut vulputate nulla dapibus. Nam at elit ut justo vulputate vestibulum ut in tellus. Donec fermentum massa et porta accumsan. Morbi nec faucibus nunc, in tristique leo. Donec sollicitudin lacinia euismod. Donec lacinia tempus metus, quis convallis massa. Nunc auctor eget augue a laoreet. Aliquam interdum ligula ac ex eleifend pellentesque. Mauris et orci sit amet ipsum laoreet gravida. Nunc tempor congue velit, a consequat enim placerat vitae. Etiam eu odio ipsum.

## Laboratório 2

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus quis quam nulla. Proin vulputate ornare massa a suscipit. Sed et lacus sit amet enim commodo consectetur eu lobortis est. Aliquam ullamcorper erat ut neque faucibus, in imperdiet mi eleifend. Donec dictum scelerisque tellus venenatis dignissim. Mauris turpis odio, rutrum at ipsum quis, convallis euismod sapien. Ut a gravida dolor, eget rutrum lorem. Fusce leo turpis, congue id nisl pellentesque, finibus finibus enim. Praesent at tristique nisi. Vestibulum eget viverra tortor. Suspendisse facilisis justo id porttitor fringilla. Sed nulla velit, aliquam convallis lobortis ac, molestie vitae quam. Curabitur elementum sem at pretium convallis. Nullam feugiat condimentum urna, nec ullamcorper diam volutpat vulputate.

Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Etiam fringilla, quam sit amet eleifend lacinia, dui nulla aliquam metus, vitae scelerisque diam nibh euismod lacus. Cras ut neque at mauris pellentesque ornare a at orci. Cras aliquet a nisl ac placerat. Curabitur urna enim, imperdiet in orci quis, viverra pretium tellus. Quisque efficitur tellus hendrerit nisi condimentum, ut vulputate nulla dapibus. Nam at elit ut justo vulputate vestibulum ut in tellus. Donec fermentum massa et porta accumsan. Morbi nec faucibus nunc, in tristique leo. Donec sollicitudin lacinia euismod. Donec lacinia tempus metus, quis convallis massa. Nunc auctor eget augue a laoreet. Aliquam interdum ligula ac ex eleifend pellentesque. Mauris et orci sit amet ipsum laoreet gravida. Nunc tempor congue velit, a consequat enim placerat vitae. Etiam eu odio ipsum.

## Laboratório 4

O objetivo deste laboratório é criar um circuito que, por meio de um sensor de luminosidade, vai detectar o valor de luminosidade sobre a placa ***Arduino*** e acionar um buzzer caso esse valor fique menor que um valor determinado.

![screenshot of arduino board](/laboratorio-4/exercicio-1.png)

### Setup

Quando um programa é carregado e executado em um ***Arduino***, a função *setup()* é chamada para inicializar variáveis, configurar o modo dos pinos, inicializar bibliotecas, e etc. Além disso, a função *setup()* será executada apenas uma vez, no começo do programa.

No caso do programa deste laboratório, a função *setup()* foi utulizada para definir o pino digital de número 8, que está conectado ao buzzer e, como OUTPUT (Saída). 

A classe *Serial* é usada para comunicar o computador com o ***Arduino***. A função *Serial.begin()* é usada para que a placa possa se comunicar com o computador atráves do Monitor Serial, possibilitando impressão.

~~~c
void setup()
{
    pinMode(8, OUTPUT);
    Serial.begin(9600);
}
~~~

### Loop

Depois da função *setup()* ter sido executada, a função *loop()* é chamada e é executada infinitamente enquanto o ***Arduino*** estiver ligado.

A função *analogRead()* lê o valor de um pino analógico especificado, que no caso deste laboratório é o pino analógico A0. O valor desta leitura é, então, armanezado em uma variável.

~~~c
int photoResistorValue = analogRead(A0);
~~~

Com o valor da luminosidade armazenado na variável, é feito uma comparação para determinar se o valor é maior ou menor que um valor determinado. 

Caso o valor da luminosidade seja menor que o valor estipulado, a função *tone()* é chamada e recebe dois valores: **8**, que é o pino conectado ao buzzer; e **1000** que é uma frequência escolhida para a realização do laboratório. 

Caso o valor da luminosidade seja maior que o valor estipulado, a função *noTone()* é chamada para interromper o som emitido pelo buzzer.

~~~c
(photoResistorValue < 900) ? tone(8, 1000) : noTone(8);
~~~

A primeira parte do laboratório já foi concluída com sucesso e só resta a impressão do valor da luminosidade, que é feito usando a função *Serial.println()*.

Além disso, para que fique mais claro o som emitido pelo buzzer, um delay é chamado.

~~~c
Serial.println(photoResistorValue);
delay(2000);
~~~

## Referências

- **ARDUINO REFERENCE**. Disponível em: https://www.arduino.cc/reference/en/. Acesso em: entre 03 out. 2020 e 07 out. 2020.
- **TINKERCAD**. Disponível em: https://www.tinkercad.com. Acesso em: entre 03 out. 2020 e 07 out. 2020.

