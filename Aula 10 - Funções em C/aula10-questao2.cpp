/* 2. Escreva uma função que recebe um número inteiro como parâmetro 
e retorna o dobro desse número. O programa deve solicitar um número ao usuário 
e imprimir o dobro utilizando a função.
 - Objetivo: Entender como passar um único parâmetro para uma função..
*/

#include<stdio.h>

int dobro(int x){
	int resultado;
	resultado = x*2;
	return resultado;
}

int main(){
	int numero, resultado;
	printf("Informe o numero: ");
	scanf("%i", &numero);
	
	resultado = dobro(numero);
	printf("O dobro de %i eh %i", numero, resultado);
		
	return 0;
}
