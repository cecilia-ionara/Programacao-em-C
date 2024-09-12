/******************************************************************************
1. Soma de elementos de um vetor
Escreva um programa em C que leia um vetor de 5 números inteiros. Crie uma função que
receba esse vetor como parâmetro e retorne a soma dos elementos.
*******************************************************************************/
#include <stdio.h>

float mediaVetor(int vet[], int tamanho) {
    float media = 0, soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vet[i];
    }
    media = soma / tamanho;
    return media;
}

int main() {
    int vetor[5];
    float media;
    
    for (int i = 0; i < 5; i++) {
        printf("Insira o numero %i: ", i + 1);
        scanf("%i", &vetor[i]);
    }
    
    media = mediaVetor(vetor, 5);
    printf("A media dos numeros inseridos eh: %.2f\n", media);
    
    return 0;
}
