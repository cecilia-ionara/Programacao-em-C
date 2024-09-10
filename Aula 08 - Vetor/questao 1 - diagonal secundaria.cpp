#include<stdio.h>

int main(){
	int matriz[3][3], n=1, diagonalSec[3], k=0;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			matriz[i][j] = n++; //ao inves de usar scanf vou selecionar valores acima de 1
		}
	}
	
	for(int i=0; i<3; i++) {
		printf("[ ");
		for(int j=0; j<3; j++) {
			printf("%i ", matriz[i][j]);
		}
		printf("]\n");
	}

	
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++) {
			if (i + j == 2) { // **diagonal secundaria = a soma dos índices da linha e da coluna deve ser igual ao tamanho da matriz menos um
				diagonalSec[k] = matriz[i][j];
				k++;
			}
		}
	}
	printf("Diagonal secundaria:\n");
	for(k=0;k<3;k++){
		printf("%i ", diagonalSec[k]);
	}
	return 0;
}
