#include <stdio.h>
#include <stdlib.h>
int main () {
	int n, cont=0;
	short int ascii[256]={};
    scanf("%d", &n);
    char str[n];
    // Ler string
    // Add 1 ao vetor ascii conforme a ASCII
    for(int i=0; i<n; i++)
    {
        scanf(" %c", &str[i]);  
    	(ascii[((int)str[i])])+=1;
    }
    // Percorrer o vetor ascii em busca de números ímpares para as letras;
    for (int j=0; j<255; j++)
    {
    	if(ascii[j]%2==1)
        {
            cont+=1;
            if (cont==2)
            {
                break;
            }
        }
    }
   	if (cont==2)
   		printf("Nao\n");
   	else
   		printf("Sim\n");
   	return EXIT_SUCCESS;
}