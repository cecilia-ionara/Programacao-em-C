#include<stdio.h>
#include<locale.h>

void copiaColuna(int matriz[5][5], int j_escolhida){
	int vetor[5];
	printf("Vetor com a coluna escolhida: \n");
	for(int i=0;i<5;i++){
		vetor[i] = matriz[i][j_escolhida];
		printf("%i ", vetor[i]);
	}	
	printf("\n\n");
}

void imprimeMatriz(int matriz[5][5]){
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
	int matriz[5][5], j_escolhida, vetor[5];
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
	
	printf("\n\n Matriz: \n");
	imprimeMatriz(matriz);
	
	printf("\n\n");
	copiaColuna(matriz, j_escolhida);
	
	return 0;
}
