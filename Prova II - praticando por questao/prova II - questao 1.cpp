/*1. (Vale 5 pontos) Crie uma matriz de número inteiros, de ordem 4.
Preencha os valores dessa matriz com valores acima de 100
(podem ser números sequenciais, se preferir).
Em seguida, faça o que se pede:

a) Imprima todos os elementos da matriz;
b1) Imprima os valores da diagonal secundária
b2) e, em seguida, imprima o produto dos elementos dessa diagonal;

c) Calcule e imprima a soma dos elementos da matriz, onde o índice da coluna é igual a 2;
d) Calcule e imprima o produto dos elementos da matriz, onde o índice da linha é igual a 0;
*/

//treinar função
#include<stdio.h>

void imprimeMatriz(int matriz[4][4]) {
	printf("\n\n--- Questao a) ---\n");
	for(int i=0; i<4; i++) {
		printf("[ ");
		for(int j=0; j<4; j++) {
			printf("%i ", matriz[i][j]);
		}
		printf("]\n");
	}
}

void imprimeDiagonal(int matriz[4][4]) {
	printf("\n--- Questao b) ---\n");
	int diagonalSec[4], k=0, produto=1;//produto eh 1 pq vai multiplicar;
	//b1) Imprima os valores da diagonal secundária
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			if (i + j == 3) { // **diagonal secundaria = a soma dos índices da linha e da coluna deve ser igual ao tamanho da matriz menos um
				diagonalSec[k] = matriz[i][j];
				k++;
			}
		}
	}
	//printando a lista diagonal
	printf("Diagonal Secundaria: ");
	printf("[");
	for(k=0; k<4; k++) {
		printf(" %i", diagonalSec[k]);
	}
	printf(" ]\n");

	//fazendo produto
	printf("Produto dos elementos da Diagonal Secundaria: ");
	for(k=0; k<4; k++) {
		produto *= diagonalSec[k];
	}
	printf("%i", produto);
}

void imprimeSoma(int matriz[4][4]) {
	printf("\n\n--- Questao c) ---\n");
	// c) Calcule e imprima a soma dos elementos da matriz, onde o índice da coluna é igual a 2
	int soma = 0;
	for (int i = 0; i < 4; i++) { // Percorrer apenas as linhas da matriz
		soma += matriz[i][2];  // Coluna fixa em 2
	} // ATENÇÃO = soma da coluna 3 (que é indice 2)
	printf("A soma de todos os elementos da coluna 2 eh: %i", soma);
}

void imprimeProduto(int matriz[4][4]) {
	printf("\n\n--- Questao d) ---\n");
	// d) Calcule e imprima o produto dos elementos da matriz, onde o índice da linha é igual a 0;
	int produto=1;
	for (int j=0; j<4;j++) { // Percorrer todas as colunas da linha 0
		produto *= matriz[0][j];  // Linha fixa em 0
	}
	printf("O produto de todos os elementos da linha 0 eh: %i\n", produto);
}

int main() {
	int matriz[4][4], n=100;
	for(int i=0; i<4; i++) {
		for(int j=0; j<4; j++) {
			matriz[i][j] = n++; //ao inves de usar scanf vou selecionar valores acima de 100
		}
	}
	//Questão a) imprimir
	imprimeMatriz(matriz);

	//Questao b) imprimir diagonal e produto
	imprimeDiagonal(matriz);

	//questao c) soma da coluna 2
	imprimeSoma(matriz);

	//questao d) produto da linha 0
	imprimeProduto(matriz);

	return 0;
}
