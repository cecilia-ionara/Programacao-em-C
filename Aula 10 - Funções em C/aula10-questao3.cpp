/*3. Enunciado: Crie uma fun��o que recebe um n�mero inteiro e retorna o 
quadrado desse n�mero. Solicite um n�mero ao usu�rio e utilize a fun��o para exibir o resultado.
 **Objetivo:** Praticar opera��es matem�ticas simples usando fun��es.*/
 
#include<stdio.h>

int quadrado(int x){
	int resultado;
	resultado = x*x;
	return resultado;
}

int main(){
	int numero, resultado;
	printf("Informe o numero: ");
	scanf("%i", &numero);
	
	resultado = quadrado(numero);
	printf("O quadrado de %i eh %i", numero, resultado);
		
	return 0;
}
