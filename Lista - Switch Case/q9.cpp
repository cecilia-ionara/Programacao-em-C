/*9.  Determina��o de Categoria Et�ria: 
   -  Enunciado:  Fa�a um programa que leia uma idade e determine em qual 
   categoria ela se encaixa: "Crian�a" (0-12 anos), "Adolescente" (13-17 anos), 
   "Adulto" (18-59 anos) ou "Idoso" (60+ anos). Utilize `switch-case` para categorizar.
   -  Exemplo de Entrada:  15
   -  Exemplo de Sa�da:  Adolescente*/
   
#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"");
	int idade;
	printf("Digite a idade: ");
	scanf("%i", &idade);
	
// Define a categoria com base na idade
    int categoria;
    if (idade >= 0 && idade <= 12) {
        categoria = 0;  // Crian�a
    } else if (idade >= 13 && idade <= 17) {
        categoria = 1;  // Adolescente
    } else if (idade >= 18 && idade <= 59) {
        categoria = 2;  // Adulto
    } else if (idade >= 60) {
        categoria = 3;  // Idoso
    } else {
        printf("Idade inv�lida\n");
        return 1;
    }

    switch (categoria) {
        case 0:
            printf("Crian�a\n");
            break;
        case 1:
            printf("Adolescente\n");
            break;
        case 2:
            printf("Adulto\n");
            break;
        case 3:
            printf("Idoso\n");
            break;
        default:
            printf("Categoria desconhecida\n");
            break;
    }

    return 0;
}
