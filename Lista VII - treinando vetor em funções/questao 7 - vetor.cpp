/*7. Inverter a Ordem dos Elementos de um Vetor
**Descrição**: Desenvolva um programa que receba um vetor de
 6 elementos e uma função que inverte a ordem dos elementos do
  vetor. O vetor modificado deve ser exibido após a inversão.
// Função esperada: void inverterVetor(int vetor[], int tamanho);*/

#include<stdio.h>

void inverterVetor(int vetor[], int tamanho){
	int i, novoVetor[6];
	i = tamanho - 1;
	for(int j=0;j<tamanho;j++){
		novoVetor[j] = vetor[i];
		i--; 
	}
	
	printf("Vetor invertido: ");
	printf("[");
	for(int j=0;j<tamanho;j++){
		printf(" %i ", novoVetor[j]);
	}
	printf("]");
}

int main(){
	int vetor[6];
	
	for(int i=0;i<6;i++){
		printf("Informe o numero %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	printf("\n");
	
	inverterVetor(vetor, 6);
	
	return 0;
}
