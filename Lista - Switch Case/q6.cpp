/* 6.  Menu de Operações: 
   -  Enunciado:  Crie um programa que apresente um menu com três opções: 
   1. Adição, 2. Subtração, 3. Sair. O programa deve executar a operação escolhida pelo usuário. 
   Use `switch-case` para controlar as opções.
   -  Exemplo de Entrada:  1
   -  Exemplo de Saída:  Digite dois números para somar.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int o, n1, n2;
	printf("Digite a operação: ");
	scanf("%i", &o);
	
	switch(o){
		case 1:
			printf("Digite dois numeros para somar\n");
			printf("n1: ");
			scanf("%i", &n1);
			printf("n2: ");
			scanf("%i", &n2);
			printf("A soma é: &i", n1+n2);
			break;
		case 2: 
			printf("Digite dois numeros para subtrair\n");
			printf("n1: ");
			scanf("%i", &n1);
			printf("n2: ");
			scanf("%i", &n2);
			printf("A soma é: %i", n1-n2);
			break;
		case 3:
			printf("Encerrando...");
			break;
	}
	return 0;
} 
