#include<stdio.h>
#include<string.h>

int main(){
	char nome[50];
	printf("Digite seu nome: ");
	gets(nome);
	printf("Ola, %s!\n", nome);
}
