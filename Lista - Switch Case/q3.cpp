/*3.  Calculadora Simples: 
   -  Enunciado:  Escreva um programa que simule uma calculadora simples. 
   O programa deve solicitar dois n�meros e um operador (como '+', '-', '*', ou '/'),
    e ent�o usar `switch-case` para realizar a opera��o correta.
   -  Exemplo de Entrada:  5, 3, +
   -  Exemplo de Sa�da:  8*/
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n1, n2;
	char c;
	printf("1-Soma, 2-Subtra��o, 3-Divis�o, 4-Multiplica��o\n");
	printf("Digite a opera��o: ");
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
            printf("Escolha inv�lida");
            break;
	}
	return 0;
}
