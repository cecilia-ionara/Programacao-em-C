/*2. C�lculo da m�dia de elementos de um vetor
Crie um programa em C que leia um vetor de 6 n�meros reais e passe esse vetor para uma
fun��o que calcule e retorne a m�dia dos valores.*/

#include <stdio.h>

int mediaVetor( int vet[], int tamanho){
    float media = 0;
    for(int i=0;i<tamanho;i++){
        media+=vet[i];
    }
    return media/tamanho;
}

int main(){
    int vetor[6]={1,2,3,4,5,6};
    int tamanho = 6;
    
    for(int i = 0; i < tamanho; i++){
    
    float media = mediaVetor(vetor, tamanho);
    printf("a media dos numeros eh: %.2f\n", media);
    }
    
    return 0;
    
}
