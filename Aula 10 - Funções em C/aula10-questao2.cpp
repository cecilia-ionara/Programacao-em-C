/* 2. Escreva uma fun��o que recebe um n�mero inteiro como par�metro 
e retorna o dobro desse n�mero. O programa deve solicitar um n�mero ao usu�rio 
e imprimir o dobro utilizando a fun��o.
 - Objetivo: Entender como passar um �nico par�metro para uma fun��o..
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
