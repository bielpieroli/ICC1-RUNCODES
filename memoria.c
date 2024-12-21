#include <stdio.h>
#include <stdlib.h>
int main (void) {
	unsigned long int resp1, resp2, resp3;
	short unsigned int A, B, C;
	scanf("%hu%hu%hu", &A, &B, &C);
	resp1= C;
	resp2= resp1<<16;
	resp2= resp2 | B;
	resp3= resp2<<16;
	resp3= resp3 | A;
	printf("%lu", resp3);
	return EXIT_SUCCESS;
}
/*
Voce recebe tres numeros para guardar, representados por A, B e C. No entanto, voce ainda nao domina
o uso de vetores e quer simplificar sua vida. Para facilitar a memorizacao dos tres numeros, voce
decide concatena-los em um unico valor. Voce precisa ser capaz de recuperar esses numeros posteriormente,
entao voce decide criar um padrao para armazena-los. Voce decide armazenar os numeros de forma sequencial
em um novo valor. O valor de A sera guardado nos primeiros 2 bytes (menos significativos) da variavel que
ira memorizar, B nos proximos 2 bytes e C nos 2 bytes seguintes.

Input
Voce recebera tres valores A, B e C, cada um representado por um tipo short unsigned int. Sua tarefa e
retornar a variavel que memoriza os tres numeros seguindo o algoritmo dado. A saida deve ser o valor
resultante da concatenacao dos tres numeros, seguido de uma quebra de linha.

Entrada  Saida
3 6 5    21475229699

Entrada  Saida
1 0 0    1
*/