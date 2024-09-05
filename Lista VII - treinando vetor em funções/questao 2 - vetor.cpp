/*2. Encontrar o Maior Elemento de um Vetor
**Descrição**: Crie um programa que recebe um vetor de 10 números inteiros 
e uma função que retorna o maior valor encontrado no vetor.
// Função esperada: int encontrarMaior(int vetor[], int tamanho);
*/

#include<stdio.h>

void encontrarMaior(int vetor[], int tamanho){
	int maior=0;
	for(int i=0; i<tamanho;i++){
		if(vetor[i]>maior){
			maior = vetor[i];
		}
	}
	printf("O maior numero inserido eh %i", maior);
}

int main(){
	int vetor[10];
	for(int i=0;i<10;i++){
		printf("Digite o numero %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	encontrarMaior(vetor, 10);
	return 0;
}

