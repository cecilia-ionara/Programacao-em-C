/*1.  Verifica��o de Dia da Semana: 
   -  Enunciado:  Escreva um programa em C que pe�a ao usu�rio um n�mero de 1 a 7 e imprima o dia da semana correspondente. Utilize a estrutura `switch-case`. Considere 1 como Domingo, 2 como Segunda-feira, e assim por diante.
   -  Exemplo de Entrada:  3
   -  Exemplo de Sa�da:  Ter�a-feira
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int dia;
	printf("Digite um n�mero de 1 a 7: ");
	scanf("%i", &dia);

	switch(dia){
		case 1:
			printf("Domingo");
			break;
		case 2:
			printf("Segunda-feira");
			break;
		case 3:
			printf("Ter�a-feira");
			break;
		case 4:
			printf("Quarta-feira");
			break;
		case 5:
			printf("Quinta-feira");
			break;
		case 6:
			printf("Sexta-feira");
			break;
		case 7:
			printf("S�bado");
			break;
		default:
            printf("Escolha inv�lida");
            break;	
	}
	return 0;
}
