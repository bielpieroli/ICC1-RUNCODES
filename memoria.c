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