/*3. Enunciado: Crie uma função que recebe um número inteiro e retorna o 
quadrado desse número. Solicite um número ao usuário e utilize a função para exibir o resultado.
 **Objetivo:** Praticar operações matemáticas simples usando funções.*/
 
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
