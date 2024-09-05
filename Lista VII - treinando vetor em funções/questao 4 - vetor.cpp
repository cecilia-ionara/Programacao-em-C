/*4. Exibir os Elementos de um Vetor
**Descrição**: Escreva um programa em C que receba um vetor de 8 
elementos e utilize uma função para exibir todos os elementos do vetor na tela.
// Função esperada: void exibirVetor(int vetor[], int tamanho);
*/

#include<stdio.h>

void exibirVetor(int vetor[], int tamanho){
	printf("Resultado do Vetor: ");
	printf("[");
	for(int i=0;i<tamanho;i++){
		printf(" %i ", vetor[i]);
	}
	printf("]");
} 

int main(){
	int vetor[8];
	
	for(int i=0;i<8;i++){
		printf("Informe o numero %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	printf("\n");
	exibirVetor(vetor, 8);
	
	return 0;
}
