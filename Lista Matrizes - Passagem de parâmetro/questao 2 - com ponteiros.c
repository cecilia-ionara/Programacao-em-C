/******************************************************************************
2. Cálculo da média de elementos de um vetor
Crie um programa em C que leia um vetor de 6 números reais e passe esse vetor para uma
função que calcule e retorne a média dos valores.
*******************************************************************************/

#include <stdio.h>

float mediaVetor(int *vet, int tamanho){
    int soma=0;
    float media=0;
    for(int i=0;i<tamanho;i++){
        soma+=vet[i];
    }
    media = soma/tamanho;
    return media;
}

int main(){
    int vetor[6];
    float media;
    
    for(int i=0;i<6;i++){
        printf("Insira o numero %i: ", i+1);
        scanf("%i", &vetor[i]);
    }
    media = mediaVetor(vetor, 6);
    printf("A media dos numeros inseridos eh: %.2f\n", media);
    return 0;
    
}