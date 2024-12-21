#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long long int n, resp = 0, vezescinco = 5;
    scanf("%llu", &n);

    while(n/vezescinco>0){
            resp += (n/vezescinco);
            vezescinco*=5;        
    }
    printf("%llu\n", resp);
}

/*
Descricao
Sera dado um numero "N", e seu papel e retornar quantos zeros a direita o numero 𝑁! possui.
Por exemplo:

𝑁 = 10, teriamos 
10! = 3628800
Assim, a resposta seria 2.

𝑁 = 4, teriamos 
4! = 24.
Portanto, a resposta seria 0.

Input
1 <= 𝑁 <= 10^9

Output
A saida deve ser seguida de uma quebra de linha.

Observacao: Nao ha restricoes quanto a percorrer todos os valores

Entrada Saida
20      4
12      2
*/