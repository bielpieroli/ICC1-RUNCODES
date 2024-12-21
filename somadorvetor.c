#include <stdio.h>
#include <stdlib.h>
int main () {
	int n1, n2, x=1, y=1;
	scanf("%d %d", &n1, &n2);
	long int bin1[n1], bin2[n2], *p=bin1, *q=bin2, soma=0;
	for (int i=0; i<n1 ; i++) {
		scanf("%ld", p);
		p++;
		if(i==0)
			continue;
		x*=2;
	}
	for (int j=0; j<n2 ; j++) {
		scanf("%ld", q);
		q++;
		if(j==0)
			continue;
		y*=2;
	}
	p=bin1;
	q=bin2;
	for (int u=0; u<n1 ; u++) {
		(*p)*=x;
		soma+=*p;
		x=x/2;
		p++;
	}
	for (int v=0; v<n2 ; v++) {
		(*q)*=y;
		soma+=*q;
		y=y/2;
		q++;
	}
	printf("%ld\n", soma);
	return EXIT_SUCCESS;
}