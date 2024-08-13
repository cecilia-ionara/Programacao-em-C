/*4.  Verificação de Mês: 
   -  Enunciado:  Crie um programa que pergunte ao usuário um número 
   de 1 a 12 e imprima o nome do mês correspondente. Use `switch-case`.
   -  Exemplo de Entrada:  4
   -  Exemplo de Saída:  Abril*/
   
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int n;
	printf("Digite o numero do mês: ");
	scanf("%i", &n);
	
	switch(n){
		case 1:
			printf("Janeiro"); 
			break;		
		case 2: 
			printf("Fevereiro");
			break;		
		case 3:
			printf("Março");
			break;		
		case 4:
			printf("Abril");
			break;	
		case 5:
			printf("Maio");
			break;	
		case 6:
			printf("Junho");
			break;	
		case 7:
			printf("Julho");
			break;	
		case 8:
			printf("Agosto");
			break;	
		case 9:
			printf("Setembro");
			break;	
		case 10:
			printf("Outubro");
			break;	
		case 11:
			printf("Novembro");
			break;	
		case 12:
			printf("Dezembro");
			break;	
	}
	return 0;
}
