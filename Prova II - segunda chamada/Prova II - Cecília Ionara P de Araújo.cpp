#include<stdio.h>
#include<locale.h>

int imprimeVetor(int *matriz[5][5], int j_escolhida){
	int j=j_escolhida;
	printf("Vetor com a coluna %i: \n", j);
	for(int i=0;i<5;i++){
		printf("%i ", matriz[i][j]);
		//nao consegui fazer <vetor = matriz[i][j]>, ficou dando erro(?)
		//tentei com * e tb nao foi, por isso printei a propria matriz
	}	
}

int imprimeMatriz(int *matriz[5][5]){
	for(int j=0;j<5;j++){
		printf("[");
		for(int i=0;i<5;i++){
			printf("%i ", matriz[i][j]);
		}
		printf("]\n");
	}
}
int main(){
	setlocale(LC_ALL, "");
	int *matriz[5][5], j_escolhida;
	printf("Informe os valores da matriz: \n");
	for(int j=0;j<5;j++){
		printf("\nColuna %i: \n", j+1);
		for(int i=0;i<5;i++){
			printf("Linha %i: ", i+1);
			scanf("%i", &matriz[i][j]);
		}
	}
	printf("Escolha uma coluna para ser copiada(0 a 4): ");
	scanf("%i", &j_escolhida);
	
	printf("\nMatriz: \n");
	imprimeMatriz(matriz);
	
	printf("\n");
	imprimeVetor(matriz, j_escolhida);
	
	return 0;
}
