/*4.**Enunciado:** Escreva uma fun��o que recebe um n�mero inteiro e retorna `0` 
se o n�mero for par e `1` se for �mpar. O programa deve pedir um n�mero ao usu�rio 
e usar a fun��o para determinar se � par ou �mpar.
   - **Objetivo:** Trabalhar com operadores de m�dulo e l�gica.*/
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
