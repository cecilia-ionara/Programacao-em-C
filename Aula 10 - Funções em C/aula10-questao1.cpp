/*
1. Fun��o para Somar Dois N�meros
- Enunciado: Crie uma fun��o que recebe dois n�meros inteiros como 
par�metros e retorna a soma deles. Escreva um programa que solicite dois
n�meros ao usu�rio, chame a fun��o e exiba o resultado.
- Objetivo:Compreender a passagem de par�metros por valor e o retorno 
de uma fun��o.*/

/*tipo_da_fun��o nome_da_fun��o (lista de par�metros) {
		int funcao_taltal(int n1, int n2){
		corpo da fun��o 
		 	}
*/

#include<stdio.h>

int soma(int x, int y){
	int resultado;
	resultado = x+y;
	return resultado;
}

int main(){
	int num1, num2, resultado;
	printf("Informe o numero 1: ");
	scanf("%i", &num1);
	printf("Informe o numero 2: ");
	scanf("%i", &num2);
	
	resultado = soma(num1,num2);
	printf("O resultado da soma eh %i", resultado);
		
	return 0;
}
