/*1. Soma de elementos de um vetor
Escreva um programa em C que leia um vetor de 5 números inteiros. Crie uma função que
receba esse vetor como parâmetro e retorne a soma dos elementos.*/


#include <stdio.h>

int Somavetor(int vet[]){
    int soma=0;
    for (int i=0; i<5;i++){
    soma +=vet[i];
}
return soma;
}
 
  int main(){
    int vetor[5];
      
	for(int i=0;i<5;i++){
	  	printf("Informe o numero %i: ", i+1);
	  	scanf("%i", &vetor[i]);
	}
		printf("a soma eh: %d\n", Somavetor(vetor));
      return 0;
  }
