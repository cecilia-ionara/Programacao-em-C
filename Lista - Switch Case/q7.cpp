/*7.  Identifica��o de Caracteres: 
   -  Enunciado:  Escreva um programa que pe�a ao usu�rio para digitar uma letra e utilize `switch-case` 
   para verificar se a letra � uma vogal ou uma consoante.
   -  Exemplo de Entrada:  A
   -  Exemplo de Sa�da:  Vogal*/
#include<stdio.h>
#include<locale.h>
#include <ctype.h>  // Necess�rio para tolower()

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
