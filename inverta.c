#include <stdio.h>
#include <stdlib.h>

int main () {
      
    int n, temp;
    scanf("%d\n", &n);
    int array[n], *p, *q, *r=array;
    int meiomenor, meiomaior;
    meiomaior=n/2;
    meiomenor=(n-1)/2;
    for (int v=0; v<n; v++) {
        scanf("%d", &temp);
        *r=temp;
        r++;
    }
    p=&array[meiomaior];
    q=&array[meiomenor];
    r=array;
    for (int i=0; i<meiomenor+2 ; i++) {
    	temp=*p;
    	*p=*q;
    	*q=temp;
    	p++;
    	q--;
    }
    for (int u=0; u<n; u++) {
        printf("%d ", *r);
        r++;
    }
}
/*
Voce deve imprimir um vetor na ordem inversa sem usar o operador [i] para acessar suas posicoes.
Input
A primeira linha contem um inteiro n, que representa o tamanho do vetor (1≤n≤10^5).
A segunda linha contem n inteiros representando os elementos do vetor.
Output
O vetor invertido, seguido de uma quebra de linha.
Entrada     Saida
5           5 4 3 2 1   
1 2 3 4 5
*/