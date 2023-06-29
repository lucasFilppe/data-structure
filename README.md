# Estrutura de Dados

### `modularização`
Quando o código é pequeno, basta colocarmos nosso algoritmo bem organizado em um arquivo. Contudo, quanto maior a quantidade de linhas de código, mais complexo pode ficar para que possamos entender nosso programa. Uma forma de modularizar é separar em funções, como já vimos nas aulas anteriores. Mesmo assim, depois de algumas boas linhas de código, navegar no arquivo cheio de códigos, começa a ficar um pouco complicado.

Para isso, podemos separar nosso código em outros arquivos, criando nosso próprio conjunto de bibliotecas. Em geral, separamos nossas bibliotecas tendo cada arquivo as funções que possuem funções correlacionadas, como biblioteca matemática, biblioteca de gerenciamento de um arquivo, biblioteca para manipulação de informações de entrada de determinado sensor, etc..

No C, para cada arquivo de biblioteca "arquivo.c", devemos ter um arquivo de cabeçalho (ou header) com o mesmo nome, mas com extensão .h: "arquivo.h". No arquivo H colocamos os protótipos das funções que iremos precisar, e no arquivo C a gente implementa essas funções.

Porque separar os arquivos em .H e .C? Bem existem vários motivos, mas de forma simples, muitas vezes queremos poder distribuir bibliotecas que implementamos sem fornecer os códigos fontes das mesmas. Então distribuímos as bibliotecas em arquivos compilados, e os arquivos .H são a forma como o programa que implementamos vão ver as funções que estão nas bibliotecas compiladas, ou seja, é a assinatura das mesmas e possui a interface para acessar aquelas funções. 

Compilação exemplo:
- gcc -c converte.c
- gcc -c principal.c
- gcc -o exe converte.o principal.o