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

