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

