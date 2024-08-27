/*
1. Função para Somar Dois Números
- Enunciado: Crie uma função que recebe dois números inteiros como 
parâmetros e retorna a soma deles. Escreva um programa que solicite dois
números ao usuário, chame a função e exiba o resultado.
- Objetivo:Compreender a passagem de parâmetros por valor e o retorno 
de uma função.*/

/*tipo_da_função nome_da_função (lista de parâmetros) {
		int funcao_taltal(int n1, int n2){
		corpo da função 
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
