/***
4. (Vale 2 pontos) Crie um programa que imprima, em ordem decrescente, todos os n�meros
pares existentes entre o 100 e 200 (incluindo tamb�m o 100 e o 200). Utilize o la�o de
repeti��o for para essa opera��o.

***/

#include <stdio.h>

int main() {
	int i;

	for (i = 100; i <= 200; i++) {
		if (i % 2 == 0) {
			printf(" %i", i);
		}
	}
	return 0;
}
