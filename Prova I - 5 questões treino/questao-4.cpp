/***
4. (Vale 2 pontos) Crie um programa que imprima, em ordem decrescente, todos os números
pares existentes entre o 100 e 200 (incluindo também o 100 e o 200). Utilize o laço de
repetição for para essa operação.

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
