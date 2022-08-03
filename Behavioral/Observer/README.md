# Observer pattern

## Objetivo
---
Permitir a utilização de algorítimos independentes entre sí em um mesmo cliente, sendo intercambiávies durante o tempo de execução.

Permite criar algorítimos de maneira flexível e reutilizável para serem utilizados por mais de um cliente.

## Funcionamento
---
É criado uma interface (abstrata pura em C++) em uma classe base para encapsular a implementação dos algorítimps em classes derivadas. Os clientes irão conter a interface e não terão nenhum impacto quando o número de classes derivadas mudar e nem quando a implementação de uma classe derivada mudar.

![Observer UML](../../Imgs/Observer.png "Observer UML").