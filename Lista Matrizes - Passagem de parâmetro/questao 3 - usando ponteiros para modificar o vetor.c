/******************************************************************************
3. MultiplicaC'C#o escalar de um vetor
Desenvolva um programa em C que multiplica todos os elementos de um vetor de 10
inteiros por um valor constante fornecido pelo usuC!rio. Use uma funC'C#o que receba o vetor
e o valor constante, modifique o vetor e o retorne modificado.
*******************************************************************************/
#include <stdio.h>

void multiVetor(int *vet, int tamanho, int c) {
    for(int i = 0; i < tamanho; i++) {
        vet[i] *= c;  
    }    
}

int main() {
    int vetor[10], constante;

    for(int i = 0; i < 10; i++) {
        printf("Insira o numero %i: ", i + 1);
        scanf("%i", &vetor[i]);
    }

    printf("Informe a constante que deseja multiplicar: ");
    scanf("%i", &constante);


    multiVetor(vetor, 10, constante);

    printf("O vetor modificado eh: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
