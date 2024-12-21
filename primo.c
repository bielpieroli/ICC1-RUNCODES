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
