/*Encontrar o Maior e o Menor Elemento 
Crie um programa que leia 10 números inteiros e armazene-os em um vetor. 
Em seguida, o programa deve encontrar e exibir o maior e o menor número do vetor.
Utilize variáveis para armazenar o maior e o menor valor e compare-os em um laço for.
*/

#include <stdio.h>

int main()
{
    int n[10], i, maior=0, menor=1000;
    
	for(i=0;i<10;i++){
	    printf("Numero %i: ", i+1 );
    	scanf("%i", &n[i]);
    	if(n[i]>maior){
    		maior = n[i];
		} if(n[i]<menor){
			menor=n[i];
		}
	}
    printf("O menor numero inserido foi: %i", menor);
    printf("\nO maior numero inserido foi: %i", maior);	    
    return 0;
}
