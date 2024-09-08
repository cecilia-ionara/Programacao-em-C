/* 2. (Vale 5 pontos) Crie um vetor de tamanho 10, do tipo float e, em seguida, utilizando passagem de par�metros por refer�ncia, fa�a o que se pede a seguir:
a) Crie uma fun��o para ler 10 valores informados pelo usu�rio. Esses valores ir�o preencher o vetor;
b) Crie uma fun��o para imprimir o conte�do do vetor e, tamb�m,
uma outra fun��o para calcular a soma dos elementos desse vetor;
c)�Execute os seguintes passos:�
i) chame a fun��o de leitura do vetor e preencha-os com quaisquer n�meros;
ii)�chame a fun��o para imprimir esse vetor;
iii)�chame a fun��o que calcula a soma dos elementos do vetor, e imprima o resultado dessa soma;�
iv)�altere o conte�do do vetor em que o �ndice seja igual a 9;�
v) chame a fun��o para imprimir esse vetor;
vi) chame a fun��o que calcula a soma dos elementos do vetor, e imprima o resultado dessa soma;�*/

#include <stdio.h>

void lerVetor(float *valor, int tamanho) {
	for (int i = 0; i < tamanho; i++) {
		printf("Insira o numero %i: ", i + 1);
		scanf("%f", &valor[i]);
	}
}

void imprimeVetor(float *valor, int tamanho) {
	printf("\nValores inseridos:\n");
	printf("indice\tvalor\n");
	for (int i = 0; i<tamanho; i++) {
		printf("vetor[%i] = %.2f\n", i, valor[i]);
	}
}

void somaVetor(float *valor, int tamanho) {
	float soma = 0;
	for (int i=0; i<tamanho; i++) {
		soma += valor[i];
	}
	printf("\nA soma de todos os elementos deste vetor eh %.2f\n", soma);
}

int main() {
	float vetor[10];

	// a) Ler o vetor
	lerVetor(vetor, 10);

	// b1) Exibir vetor
	imprimeVetor(vetor, 10);

	printf("\nSoma:");
	somaVetor(vetor, 10);

	printf("\nInforme o novo valor para o conteudo do vetor[9]: ");
	scanf("%f", &vetor[9]);

	printf("\nNovo vetor: ");
	imprimeVetor(vetor, 10);

	printf("\nSoma com os novos valores:");
	somaVetor(vetor, 10);

	return 0;
}

