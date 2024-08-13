/*2.  Classificação de Notas: 
   -  Enunciado:  Escreva um programa que peça uma nota de 0 a 10 e imprima "Aprovado" para notas entre 7 e 10, 
   "Recuperação" para notas entre 5 e 6, e "Reprovado" para notas abaixo de 5. Utilize `switch-case`.
   -  Exemplo de Entrada:  8
   -  Exemplo de Saída:  Aprovado
*/

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	float nota;
	int a;
	printf("Digite a nota: ");
	scanf("%f", &nota);
	a = (int)nota;
	switch(a){
		case 1: case 2: case 3: case 4:
			printf("Reprovado");
			break;
		case 5: case 6:
			printf("Recuperação");
			break;
		case 7: case 8: case 9: case 10:
			printf("Aprovado");
			break;			
		default:
            printf("Escolha inválida");
            break;
	}
	return 0;
}
