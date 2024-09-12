#include<stdio.h>

int main(){
	char nome[50];
	printf("Digite seu nome: ");
	scanf("%49s", nome); //lê no maximo 49, mas corta os espacos, usar gets()
	printf("Ola, %s!\n", nome);
}
