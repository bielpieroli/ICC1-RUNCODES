#include <stdio.h>
#include <stdlib.h>

int main (void) {
	int n;
	int curvasperigosas = 0;
	scanf("%d", &n);
	if (n%2==0 && n>=6) {
		curvasperigosas = (n/2-2);
	}
	printf ("%d\n", curvasperigosas);
	return EXIT_SUCCESS;
}
