/*2. Encontrar o Maior Elemento de um Vetor
**Descri��o**: Crie um programa que recebe um vetor de 10 n�meros inteiros 
e uma fun��o que retorna o maior valor encontrado no vetor.
// Fun��o esperada: int encontrarMaior(int vetor[], int tamanho);
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

