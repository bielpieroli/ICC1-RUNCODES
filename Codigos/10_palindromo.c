#include <stdio.h>
#include <stdlib.h>
int main () {
	int n=0, cont=0;
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

/*
Descricao  
Voce recebe uma cadeia de N caracteres e seu dever e dizer se existe um anagrama tal que essa  
cadeia de caracteres seja um palindromo.  

(Um anagrama de uma palavra e formado por uma reorganizacao dos caracteres presentes nessa). 
(Uma palavra e considerada palindromo se lida nos dois sentidos e a mesma). 
Por exemplo:  
"anna" e um palindromo, ja "aabc" nao e um palindromo.  

Input  
Na primeira linha sera dado um inteiro N que representa a quantidade de caracteres a serem lidos.  
Na proxima linha serao dados N caracteres.  
1 <= N <= 10^5  
Os caracteres dados sao todos minusculos.  

Output  
A saida deve ser seguida por uma quebra de linha.  

Entrada   Saida  
4         Sim  
anna  
Entrada   Saida
4         Nao  
anaa  
*/  