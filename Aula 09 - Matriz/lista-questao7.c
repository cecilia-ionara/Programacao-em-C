/*7. Praticar operaC'C5es de soma entre duas matrizes.
Escreva um programa que leia uma matriz 4x4 de nC:meros
inteiros e imprima apenas os elementos da diagonal principal
(elementos onde o C-ndice da linha C) igual ao C-ndice da coluna).
*/

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i, j, matriz[4][4], diagonal[10], k=0;

	printf("\n- Matriz -\n");
	for(i=0; i<4; i++) {
		printf("\n%i° linha:\n", i+1);
		for(j=0; j<4; j++) {
			printf("%i° coluna: ", j + 1);
			scanf("%i", &matriz[i][j]);
			if(i==j) {
				diagonal[k]=matriz[i][j];
				k++;
			}
		}
	}
	printf("\n\n- Matriz Soma -\n");
	for(i=0; i<4; i++) {
		printf("[ ");
		for(j=0; j<4; j++) {
			printf("%i ", matriz[i][j]);
		}
		printf("]\n");
	}
	printf("Os elementos que estão em diagonal são: ");
	for(i=0; i<k; i++) {
		printf("%i ",diagonal[i]);
	}
	return 0;
}
