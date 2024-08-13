/*7.  Identificação de Caracteres: 
   -  Enunciado:  Escreva um programa que peça ao usuário para digitar uma letra e utilize `switch-case` 
   para verificar se a letra é uma vogal ou uma consoante.
   -  Exemplo de Entrada:  A
   -  Exemplo de Saída:  Vogal*/
#include<stdio.h>
#include<locale.h>
#include <ctype.h>  // Necessário para tolower()

int main(){
	setlocale(LC_ALL,"");
	char c;
	printf("Digite a letra: ");
	scanf("%c", &c);
	
	c = tolower(c);//deixar minuscula

	switch(c){
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("Vogal");
			break;
		default: 
			printf("Consoante");
	}
	return 0;
} 
