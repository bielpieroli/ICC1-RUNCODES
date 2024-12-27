#include <stdio.h>
#include <stdlib.h>
int main () {
    int n, m, bit1=0, bit2=0;
	short unsigned int newbit;
    scanf("%d %d", &n, &m);
    do {
	    scanf("%hu", &newbit);
	    bit1 = bit1 | newbit;
		bit1=bit1<<1;
        n--;
	} while (n>0);
	bit1=bit1>>1;
	do {
		scanf("%hu", &newbit);
		bit2 = bit2 | newbit;
		bit2=bit2<<1;
		m--;
	} while (m>0);
	bit2=bit2>>1;
	printf("%d\n", bit1+bit2);
	return EXIT_SUCCESS;

}
/*
Voce recebe dois numeros em binario e deve calcular a soma desses valores em decimal.

Input
A primeira linha contem dois inteiros, 𝑁 e 𝑀, que representam o numero de bits de cada valor.
A segunda linha contem 𝑁 bits (0 ou 1) representando o primeiro valor em binario, começando pelo bit mais significativo.
A terceira linha contem 𝑀 bits (0 ou 1) representando o segundo valor em binario, tambem começando pelo bit mais significativo.
Output
A soma dos dois numeros em decimal, seguida de uma quebra de linha.

Restricoes
0 <= 𝑁, 𝑀 <= 30
Entrada  Saida
3 4      13
1 0 1
1 0 0 0
Entrada  Saida
3 3      8
1 0 1
0 1 1
*/