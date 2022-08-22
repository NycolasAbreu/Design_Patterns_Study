# Factory pattern

## Objetivo
Permite definir um mecanismo de assinatura para notificar vários objetos sobre quaisquer eventos que ocorram com o objeto que estão observando.


## Funcionamento
É criado uma interface para o objeto que iremos observar, chamado de **Subject/Publisher**, ele irá conter uma lista com os **Observers/Subscribers** e irá controlar a inscrição e remoção destes Observers, também ficará responsável por notificar os Observers de todas as modificações que serão feitas no **Cliente** sendo observado.

![Observer UML](../../Imgs/Observer.png "Observer UML").
