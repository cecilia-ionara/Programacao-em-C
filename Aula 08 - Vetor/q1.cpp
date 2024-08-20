/*Soma de elementos de um vetor
Escreva um programa em C que leia 5 números inteiros e armazene-os em um vetor. 
O programa deve calcular e imprimir a soma de todos os elementos do vetor.
Utilize um laço for para iterar sobre o vetor e somar os elementos.
*/

#include <stdio.h>

int main()
{
    int n[5], i, s=0;
    
	for(i=0;i<5;i++){
	    printf("Numero %i: ", i+1 );
    	scanf("%i", &n[i]);
    	s=s+n[i];
	}
    printf("A soma de todos os elementos eh: %i", s);
	    
    return 0;
}
