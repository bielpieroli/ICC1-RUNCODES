#include <stdio.h>

int main (void)
{
	int numero;
	char nome1, nome2, caracter;
	scanf("%d %c %c %c", &numero, &nome1, &nome2, &caracter);
	int resposta;
	resposta = numero;
	printf("a resposta eh %d \n", resposta);
	return (0);
}
/*
FAÇA UM CÓDIGO QUE SIGA O ALGORITMO:
INICIO
	inteiro : case
	caracter : 1 nome , 2 nome , char
	leia ( case )
	leia (1 nome )
	leia (2 nome )
	leia ( char )
	inteiro : resposta
	resposta <- case
	escreva ("a resposta eh ")
	escreva ( resposta )
FIM
*/