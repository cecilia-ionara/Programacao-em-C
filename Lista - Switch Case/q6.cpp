/* 6.  Menu de Opera��es: 
   -  Enunciado:  Crie um programa que apresente um menu com tr�s op��es: 
   1. Adi��o, 2. Subtra��o, 3. Sair. O programa deve executar a opera��o escolhida pelo usu�rio. 
   Use `switch-case` para controlar as op��es.
   -  Exemplo de Entrada:  1
   -  Exemplo de Sa�da:  Digite dois n�meros para somar.*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int o, n1, n2;
	printf("Digite a opera��o: ");
	scanf("%i", &o);
	
	switch(o){
		case 1:
			printf("Digite dois numeros para somar\n");
			printf("n1: ");
			scanf("%i", &n1);
			printf("n2: ");
			scanf("%i", &n2);
			printf("A soma �: &i", n1+n2);
			break;
		case 2: 
			printf("Digite dois numeros para subtrair\n");
			printf("n1: ");
			scanf("%i", &n1);
			printf("n2: ");
			scanf("%i", &n2);
			printf("A soma �: %i", n1-n2);
			break;
		case 3:
			printf("Encerrando...");
			break;
	}
	return 0;
} 
