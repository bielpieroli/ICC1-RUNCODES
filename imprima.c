#include <stdio.h>
int main (void) {
        long double n;
        scanf ("%Lf", &n);
        printf("%0.0Lf\n", n);
        return 0;
}

/*
Ler um valor N e imprimi-lo seguido de uma quebra de linha.
Entrada
0 <= n <= 18446744073709551615
*/

