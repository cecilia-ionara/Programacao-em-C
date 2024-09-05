/* 3. Multiplicação de Elementos de um Vetor por uma Constante
**Descrição**: Faça um programa que multiplica cada elemento de um vetor por uma constante. O vetor e a constante
 devem ser passados como parâmetros para uma função que faz a operação. O tamanho do vetor será 5.
// Função esperada: void multiplicarPorConstante(int vetor[], int tamanho, int constante);
*/

#include<stdio.h>

void multiplica(int vetor[], int tamanho, int c) {
	int novoVetor[5];
	printf("Resultado da Multiplicacao: ");
	for(int i=0; i<tamanho; i++) {
		novoVetor[i] = vetor[i] * c;
	}
	for(int i=0; i<5; i++) {
		printf(" %i ", novoVetor[i]);
	}
}

int main() {
	int vetor[5], c;
	for(int i=0; i<5; i++) {
		printf("Digite o numero %i: ", i+1);
		scanf("%i", &vetor[i]);
	}
	printf("\nQual o valor que multiplicara o vetor? ");
	scanf("%i", &c);
	multiplica(vetor, 5, c);
	return 0;
}

