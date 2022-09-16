# Builder pattern

## Objetivo
Permitir a construção de objetos complexos passo a passo.

Permite produzir diferentes tipos e representações de um objeto usando o mesmo código de construção.

## Funcionamento
- Definir as etapas de construção comuns para construir todas as representações de produtos disponíveis. Declarar essas etapas na interface do Builder.

- Criar uma classe de Builder concreta para cada uma das representações do produto e implemente suas etapas de construção.

- Implementar um método para buscar o resultado da construção.

- Se necessário criar uma classe de diretor. Ele irá encapsular várias maneiras de construir um produto usando o mesmo objeto Builder.

- O resultado da construção deve ser obtido do Builder.

![Builder UML](../../Imgs/builder_pattern.png.png "Builder UML")
