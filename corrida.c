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
/*
CONTEXTO:
O caminho consiste apenas de secoes retas, direcionadas para norte, sul, leste ou oeste, em torno de
um lago. Ela comeca no ponto mais ao sul do circuito, inicialmente ela se move para norte e apos isso ela
ira em uma das 4 direcoes (norte, sul, leste ou oeste), nunca retornando para onde veio. Ou seja, se
ela seguiu norte ela nao ira escolher sul como proximo movimento.
Uma curva e considerada perigosa se quando ignorada ela cair imediatamente no lago.
(O lago é parte interior do trajeto feito, então, é notório que isso está atrelado a um polígono côncavo
e quantas concavidades existem nesse polígono)
Determine quantas curvas perigosas ela tera que fazer.
Input
Sera dado um valor N que representa a quantidade de pontos do circuito. Abaixo sera apresentado
um exemplo de circuito. Vale destacar que o posicionamento dos pontos sao irrelevantes para a
resolucao do exercıcio portanto nao serao dados na entrada.
A saıda deve ser seguida de uma quebra de linha
Entrada Saida
6 		1
Entrada Saida
16 		6
*/