/*1. Soma dos Elementos de um Vetor
**Descrição**: Escreva um programa em C que receba um vetor de 
inteiros de tamanho 5 e calcule a soma de seus elementos. A soma deve ser 
calculada dentro de uma função que receba o vetor como parâmetro.
// Função esperada: void somarVetor(int vetor[], int tamanho);*/

#include<stdio.h>

void somaVetor(int vetor[], int tamanho){
	int soma=0;
	for(int i=0; i<tamanho; i++){
		soma = vetor[i] + soma;	
	}
	printf("\nA soma de todos os valores inseridos eh %i", soma);
}

int main(){
	int vetor[5];
	for(int i=0;i<5;i++){
		printf("Digite o numero %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	somaVetor(vetor, 5);

	return 0;
}
