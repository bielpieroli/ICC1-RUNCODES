// Inclusão das bibliotecas stdio e stdlib para a construção do código.
#include <stdio.h>
#include <stdlib.h>
// Protótipos das funções
void entradadedados(int *i, int *j);
char **alocamatriz(int i, int j);
void leituramatriz(char **mat, int i, int j);
void desaloca (char **mat, int i);
// A função "entradadedados" lê os valores de i (linha) e j (coluna) da matriz e, ainda, soma 2 a cada um desses valores para garantir que, posteriormente, não invadiremos memória com as verificações.
void entradadedados(int *i, int *j) {
    scanf("%d %d ", i, j);
    (*i)+=2;
    (*j)+=2;
}
// A função "alocamatriz" realiza a alocação dinâmica da matriz de caracteres. A metodologia utilizada foi a criação de um vetor de ponteiros, os quais representam e apontam para cada linha (i) da matriz. Em seguida, alocamos o espaço para o conteúdo dessas linhas a partir do número de colunas (j). Em caso de alocação falha, o código encerra com exit (1). Em caso de sucesso na alocação, a matriz mat (local) é retornada pela função e recebida na main pela mat(do código principal).
char **alocamatriz(int i, int j) {
    char **mat;
    mat= (char **) malloc (i*sizeof(char *));
    if (mat==NULL)
        exit (1);
    for (int a=0; a<i; a++) {
        mat[a]= (char *) malloc (j*sizeof(char));
        if(mat[a]==NULL)
            exit (1);
    }
    return (mat);
}
// A função "leituramatriz" é responsável por realizar a leitura dos elementos da matriz. Note que comecei a ler da posição 1 até a posição n(seja linha ou coluna)-1, de modo que não haja elementos nas bordas da matriz que interfiram nas verificações futuras de vizinhos, tampouco, que a memória seja invadida com isso.
void leituramatriz(char **mat, int i, int j) {
    for (int a=1; a<i-1; a++) {
        for (int b=1; b<j-1; b++) {
            scanf(" %c", &mat[a][b]);
        }
    }
}
//A função "verificacaoesaida" é aquela que detém a lógica do exercício (inclusive, é exigido que essa etapa seja feita com uma função). Ela analisa a quantidade de vizinhos 'X', quando o caracter da posição for '.', o que é costatado pelo primeiro if. Confirmado que estamos em uma posição vazia '.', há 4 if's dedicados a ver os vizinhos, referentes às 4 posições (cima, baixo, esquerda, direita). Uma variável contadora é atualizada sempre que um desses vizinhos é 'X', até o momento em que se verifica caso haja uma quantia par de 'X' e o elemento da matriz se altera para '*', como pedido. Na sequência, o loop novamente se inicia com a posição sequente e a variável contadora se reinicializa com valor 0 para as próximas verificações. Ainda, para não ter que criar outra função dedicada a imprimir os elementos da matriz, que demandaria mais dois for's, optei por simplesmente printá-los ao fim de cada verificação.
void verificacaoesaida(char **mat, int i, int j) {
    for (int a=1; a<i-1; a++) {
        for (int b=1; b<j-1; b++) {
            int cont=0;
            if(mat[a][b]=='.') {
                if(mat[a-1][b]=='X')
                    cont++;
                if(mat[a+1][b]=='X')
                    cont++;
                if(mat[a][b-1]=='X')
                    cont++;
                if(mat[a][b+1]=='X')
                    cont++;
                if(cont%2==0)
                    mat[a][b]='*';
            }
            printf("%c", mat[a][b]);
        }
        printf("\n");
    }
}
// A função "desaloca" efetua a desalocação da matriz alocada anteriormente, dado que não utilizaremos mais os seus dados.
void desaloca (char **mat, int i) {
    for (int z=0; z<i; z++)
        free(mat[z]);
    free(mat);
}

int main() {
// Declaração de variáveis i e j para linha e coluna, respectivamente. Seguida da declaração da matriz de caracteres mat, via ponteiro de ponteiro para char. Por fim, são chamadas as funções acima para o desenvolvimento do exercício, com entrada de todos os dados e execução lógica exigida, até que é liberada a memória alocada dinamicamente e, se tudo correr corretamente, é retornado ao compilador que o programa rodou com sucesso.
    int i, j;
    char **mat;
    entradadedados(&i, &j);
    mat= alocamatriz(i, j);
    leituramatriz(mat, i, j);
    verificacaoesaida(mat, i, j);
    desaloca (mat, i);
    return EXIT_SUCCESS;
}
