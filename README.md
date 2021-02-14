# LINP

Esta é uma biblioteca criada para ajudar os alunos da graduação em Engenharia Elétrica da Universidade Federal do Maranhão. Alguns algoritmos cobrados anteriormente na disciplina Linguagem de Programação se encontram neste repositório.

No momento, contém poucas funções. A ideia é que os alunos aprovados na cadeira Linguagem de Programação colaborem criando funções úteis para ajudar alunos que ainda não foram aprovados.

## Instalação

Antes de tentar instalar a biblioteca LINP, instale o gcc no seu computador. Para verificar se já possui o gcc no Windows, execute os seguintes passos.

1. Pressione as teclas windows+R e digite cmd.
2. Na janela aberta, digite gcc e pressione ENTER. Se aparecer "gcc: fatal error: no input files" então o gcc está instalado.
3. Caso o comando for dado como não reconhecido, você não possui o gcc instalado. Instale o MinGW no site oficial. A biblioteca LINP foi compilada utilizando a versão 8.1.0 do gcc (com MinGW64) com a flag -std=c17, então é recomendável instalar essa versão ou mais atualizadas. Para obter a versão mais atualizada mesmo já tendo o mingw instalado, abra novamente o cmd (passo 1) e execute o comando "mingw-get update" e depois "mingw-get upgrade" (aparentemente esses comandos não estão disponíveis para o MinGW64).
4. Não se esqueça de adicionar o MinGW ao PATH do seu Windows. Para isso, digite "Editar as Variáveis de Ambiente do Sistema" na aba de busca. Clique em Variáveis de Ambiente... Em Variáveis do Sistema, selecione PATH e clique em Editar. Clique em Novo e digite o caminho onde a pasta bin do MinGW64 foi instalada. Por exemplo, se o caminho for C:\MinGW\bin, digite isso e clique em ok, depois ok novamente e feche a janela.
5. Para verificar se o passo 4 funcionou, abra novamente o cmd, digite PATH e depois pressione enter. Verifique se o caminho que você inseriu apareceu. 

Assim que o gcc estiver devidamente instalado no seu computador, navegue até a pasta linp do repositório clonado. Execute o arquivo build_linp.cmd. Você pode clicar duas vezes nele ou abrir uma janela de comando (cmd), navegar até a pasta linp, digitar build_linp e depois pressionar enter. Para verificar se a instalação foi um sucesso, tente compilar e executar um dos programas de teste. Observe que um arquivo build para o sublime foi disponibilizado neste repositório. Caso não esteja utilizando o sublime, você pode alterar as flags utilizadas pela sua IDE ou abrir uma janela de comando e navegar até a pasta teste. Nela, execute o comando:

**gcc -std=c17 -Wall -pedantic-errors *nome do arquivo*.c -lliblinp -o *nome do arquivo*.exe**

Depois disso, execute o arquivo exe criado. Por exemplo:

**gcc -std=c17 -Wall -pedantic-errors tb_input.c -lliblinp -o tb_input.exe**
**tb_input**

Caso não haja nenhum erro, a instalação foi bem sucedida.

## Como incluir LINP

Em um arquivo c, utilize #include <linp.h>.

## Funções

LINP possui algumas funções cobradas em provas, mas não se limita a isso. Se algum aluno julgar uma função criada por ele como importante, basta fazer contato com um dos contribuidores do repositório e enviar um arquivo c contendo a função e o seu uso.

As funções em LINP são precedidas do namespace lp. Por exemplo, a função criarmat é escrita como lp.criarmat(). Atualmente existe também a macro input que permite interação com o usuário e limpa o buffer automaticamente. 

### Funções Existentes (em construção)

Na tabela abaixo, leia matriz e entenda Linp_Mat, o tipo padrão de matriz da biblioteca LINP.

| Função | Descrição |
| --- | --- |
| start | Inicia um bloco LINP. |
| stop | Finaliza um bloco LINP, liberando toda a memória alocada dinamicamente dentro dele. |
| criarmat | Cria uma matriz dinamicamente com linhas e colunas fornecidos pelo usuário. |
| lerarquivo | Lê um arquivo de texto e armazena os caracteres em uma matriz passada como parâmetro. |
| criararquivo | Cria um arquivo texto a partir de uma matriz. |
| dispmat | Imprime a matriz na tela. |
| input | Lê dados em stdin e armazena em uma variável passada como parâmetro pelo usuário. |
| procstr | Procura pela string na matriz. Pode destacar essa string em outra matriz para melhor visualização e também armazena as posições onde encontrou cada variante da string. |
| procpali | Procura por palíndromos na matriz. Pode destacar os palíndromos encontrados em outra matriz para melhor visualização e também armazena as posições onde encontrou cada palíndromo. |
