/*4.**Enunciado:** Escreva uma função que recebe um número inteiro e retorna `0` 
se o número for par e `1` se for ímpar. O programa deve pedir um número ao usuário 
e usar a função para determinar se é par ou ímpar.
   - **Objetivo:** Trabalhar com operadores de módulo e lógica.*/
#include<stdio.h>

int verificador(int x){
	if(x%2==0){
		return(0);	
	} else{
		return(1);
	}
	
}

int main(){
	int numero, resultado;
	printf("Informe o numero: ");
	scanf("%i", &numero);
	
	resultado = verificador(numero);
	printf("%i", resultado);
		
	return 0;
}
