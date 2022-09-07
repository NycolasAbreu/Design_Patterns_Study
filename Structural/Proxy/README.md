# Proxy pattern

## Objetivo

Fornecer um objeto que atua como substituto de um objeto real. O proxy recebe solicitações do cliente e faz algum trabalho (cache, controle de acesso, log, etc) e dependendo do resultado, passa a execução para o mesmo método do seu objeto vinculado.

## Funcionamento

- Criar uma interface para tornar os objetos proxy e de serviço intercambiáveis.

- Crie a classe proxy. Contendo uma referência ao serviço. Normalmente, os proxies criam e gerenciam todo o ciclo de vida de seus serviços.

- Implemente os métodos de proxy de acordo com seus propósitos. Na maioria dos casos, depois de fazer algum trabalho, o proxy deve delegar o trabalho ao objeto de serviço.

![Proxy UML](../../Imgs/Proxy_pattern.png "Proxy UML").
