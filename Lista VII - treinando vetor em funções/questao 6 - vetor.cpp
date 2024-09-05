/*
6. Contar Ocorr�ncias de um N�mero em um Vetor**Descri��o**: 
Escreva um programa que receba um vetor de 15 inteiros e conte quantas 
vezes um determinado n�mero aparece no vetor. O vetor e o n�mero devem ser 
passados para uma fun��o que retorna a quantidade de vezes que o n�mero aparece.

// Fun��o esperada: int contarOcorrencias(int vetor[], int tamanho, int numero);*/
#include<stdio.h>

void verificar(int vetor[], int tamanho, int n) {
	int j=0;
	for(int i=0; i<tamanho; i++) {
		if(vetor[i] == n){
			j++;
		} 
	} 
	if(j>0){
		printf("O numero %i aparece %i vezes", n, j);
	} else {
		printf("O numero %i nao aparece nenhuma vez", n);
	}
}

int main() {
	int vetor[15], n;
	for(int i=0; i<15; i++) {
		printf("Digite o numero %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	printf("\nQual o numero para verificar a ocorrencia? ");
	scanf("%i", &n);
	verificar(vetor, 15, n);
	
	return 0;
}

