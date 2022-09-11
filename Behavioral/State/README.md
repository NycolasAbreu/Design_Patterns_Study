# State pattern

## Objetivo
Permite encapsular o comportamento do objeto baseado em seu estado de execução atual.

Permite ao objeto uma alternativa para mudar seu estado durante a execução do programa.

Encapsula os estados em classes separadas e delega as tarefas para o objeto que representa o estado atual.

## Funcionamento
É criado a interface de estado com apenas métodos de comportamento específico de cada estado.

Para cada estado real, crie uma classe que deriva da interface de estado. Em seguida, examine os métodos do contexto e extraia todo o código relacionado a esse estado.

A classe contexto delega o comportamento específico do estado para seu objeto de estado atual em vez de implementar o comportamento específico do estado diretamente.

As classes de estado podem alterar o estado atual do contexto durante a execução do programa.

![State UML](../../Imgs/State_Design_Pattern.png "State UML").
