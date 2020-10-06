# trabalho-1

## Seções

- [Laboratório 1](#laboratório1)
- [Laboratório 2](#laboratório2)
- [Laboratório 4](#laboratório4)

# Laboratório 1

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus quis quam nulla. Proin vulputate ornare massa a suscipit. Sed et lacus sit amet enim commodo consectetur eu lobortis est. Aliquam ullamcorper erat ut neque faucibus, in imperdiet mi eleifend. Donec dictum scelerisque tellus venenatis dignissim. Mauris turpis odio, rutrum at ipsum quis, convallis euismod sapien. Ut a gravida dolor, eget rutrum lorem. Fusce leo turpis, congue id nisl pellentesque, finibus finibus enim. Praesent at tristique nisi. Vestibulum eget viverra tortor. Suspendisse facilisis justo id porttitor fringilla. Sed nulla velit, aliquam convallis lobortis ac, molestie vitae quam. Curabitur elementum sem at pretium convallis. Nullam feugiat condimentum urna, nec ullamcorper diam volutpat vulputate.

Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Etiam fringilla, quam sit amet eleifend lacinia, dui nulla aliquam metus, vitae scelerisque diam nibh euismod lacus. Cras ut neque at mauris pellentesque ornare a at orci. Cras aliquet a nisl ac placerat. Curabitur urna enim, imperdiet in orci quis, viverra pretium tellus. Quisque efficitur tellus hendrerit nisi condimentum, ut vulputate nulla dapibus. Nam at elit ut justo vulputate vestibulum ut in tellus. Donec fermentum massa et porta accumsan. Morbi nec faucibus nunc, in tristique leo. Donec sollicitudin lacinia euismod. Donec lacinia tempus metus, quis convallis massa. Nunc auctor eget augue a laoreet. Aliquam interdum ligula ac ex eleifend pellentesque. Mauris et orci sit amet ipsum laoreet gravida. Nunc tempor congue velit, a consequat enim placerat vitae. Etiam eu odio ipsum.

# Laboratório 2

Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus quis quam nulla. Proin vulputate ornare massa a suscipit. Sed et lacus sit amet enim commodo consectetur eu lobortis est. Aliquam ullamcorper erat ut neque faucibus, in imperdiet mi eleifend. Donec dictum scelerisque tellus venenatis dignissim. Mauris turpis odio, rutrum at ipsum quis, convallis euismod sapien. Ut a gravida dolor, eget rutrum lorem. Fusce leo turpis, congue id nisl pellentesque, finibus finibus enim. Praesent at tristique nisi. Vestibulum eget viverra tortor. Suspendisse facilisis justo id porttitor fringilla. Sed nulla velit, aliquam convallis lobortis ac, molestie vitae quam. Curabitur elementum sem at pretium convallis. Nullam feugiat condimentum urna, nec ullamcorper diam volutpat vulputate.

Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Etiam fringilla, quam sit amet eleifend lacinia, dui nulla aliquam metus, vitae scelerisque diam nibh euismod lacus. Cras ut neque at mauris pellentesque ornare a at orci. Cras aliquet a nisl ac placerat. Curabitur urna enim, imperdiet in orci quis, viverra pretium tellus. Quisque efficitur tellus hendrerit nisi condimentum, ut vulputate nulla dapibus. Nam at elit ut justo vulputate vestibulum ut in tellus. Donec fermentum massa et porta accumsan. Morbi nec faucibus nunc, in tristique leo. Donec sollicitudin lacinia euismod. Donec lacinia tempus metus, quis convallis massa. Nunc auctor eget augue a laoreet. Aliquam interdum ligula ac ex eleifend pellentesque. Mauris et orci sit amet ipsum laoreet gravida. Nunc tempor congue velit, a consequat enim placerat vitae. Etiam eu odio ipsum.

# Laboratório 4

![screenshot of arduino board](/laboratorio-4/exercicio-1.png)

## Setup

O pino digital de número 8 é o pino que está conectado ao Buzzer e, portanto, precisa ser setado como OUTPUT (Saída).
Para a utilização do Monitor Serial, é preciso configurar uma taxa de transferência.

```
void setup()
{
    pinMode(8, OUTPUT);
    Serial.begin(9600);
}
```

## Loop

A função analogRead() lê o valor do pino analógico de número 0 que está conectado ao sensor de luminosidade e guarda em uma variável.

```
int photoResistorValue = analogRead(0);
```

Com o valor da luminosidade guardada, é checado se é maior ou não que um valor estipulado. Caso o valor da luminosidade seja maior que o valor estipulado, o Buzzer emitira um som até que o valor da luminosidade fique menor que o valor estipulado.

```
if (photoResistorValue > 900)
{
tone(8, 1000);
}
else
{
noTone(8);
}
```

Ao final do loop, o valor da luminosidade é escrito no Monitor Serial.
E um delay é chamado.

```
Serial.println(photoResistorValue);
delay(1000);
```