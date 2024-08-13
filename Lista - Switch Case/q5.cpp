/*5.  Conversão de Notas para Conceito: 
   -  Enunciado:  Escreva um programa que converta uma nota numérica 
   para um conceito (A, B, C, D ou F). Utilize a estrutura `switch-case`.
   -  Exemplo de Entrada:  9
   -  Exemplo de Saída:  A*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int nota;
	printf("Digite a nota(inteira): ");
	scanf("%i", &nota);
	
	switch(nota){
		case 1: case 2: case 3: case 4:
			printf("F");	
		case 5: case 6:
			printf("D");
			break;	
		case 7: 
			printf("C");
		case 8: case 9:
			printf("B");
		case 10:
			printf("A");
			break;	
	}
	return 0;
} 
   
