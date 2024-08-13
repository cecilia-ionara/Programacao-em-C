/*3.  Calculadora Simples: 
   -  Enunciado:  Escreva um programa que simule uma calculadora simples. 
   O programa deve solicitar dois números e um operador (como '+', '-', '*', ou '/'),
    e então usar `switch-case` para realizar a operação correta.
   -  Exemplo de Entrada:  5, 3, +
   -  Exemplo de Saída:  8*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1, n2;
	char c;
	printf("1-Soma, 2-Subtração, 3-Divisão, 4-Multiplicação\n");
	printf("Digite a operação: ");
	scanf("%i", &c);
	printf("Digite o n1: ");
	scanf("%i", &n1);
	printf("Digite o n2: ");
	scanf("%i", &n2);
	
	switch(c){
		case 1: 
			printf("%i + %i = %i", n1, n2, n1+n2);
			break;
		case 2: 
			printf("%i - %i = %i", n1, n2, n1-n2);
			break;
		case 3:
			printf("%i / %i = %i", n1, n2, n1/n2);
			break;		
		case 4:
			printf("%i * %i = %i", n1, n2, n1*n2);
			break;	
		default:
            printf("Escolha inválida");
            break;
	}
	return 0;
}
