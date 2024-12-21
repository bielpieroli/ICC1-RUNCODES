#include <stdio.h>
#include <stdlib.h>

int main () {
    int verdade, perguntas, num;
    scanf("%d", &perguntas);
    /* LER A QNTD DE PGNTS */
    for (int i=0; i<perguntas; i++)
    {
        scanf("%d", &num);
        verdade=1;
        for (int div=2; div*div<=num; div++)
        {
            if(num%div==0)
            {
                verdade=0;
                break;
            }
        }
        if (num!=0 && num !=1 && verdade==1)
            printf("Sim\n");
        else
            printf("Nao\n");
    }
        return EXIT_SUCCESS;
}
/*
Serao dadas Q perguntas, em cada uma, sera dado um valor N e voce 
deve retornar para cada uma se o valor N e primo ou nao.  

Input  
1 <= Q <= 10^6  
2 <= N <= 1500000  

Output  
Entrada Saida  
2       Sim  
101     Nao
30  
*/