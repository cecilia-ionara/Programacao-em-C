#include<stdio.h>

int main(){
	int numero, *ponteiro;
	numero=10;
	ponteiro= &numero; //usa-se o e comercial
	
	printf("\nConteudo REAL de NUM(numero): %i", numero);
	printf("\nCont  eudo de NUM acessado por PONTEIRO(*ponteiro): %i", *ponteiro);
	printf("\nEndereco REAL de NUM(&numero): %i", &numero); //o e indica endereço
	printf("\nEndereco de NUM em PONTEIRO(ponteiro): %i", ponteiro); //ponteiro dedura o endereço do NUM q é oq ele receb eu
	printf("\nEndereco REAL de PONTEIRO(&numero): %i", &ponteiro); //endereço real do ponteiro, usando & pra saber
	return 0;
}
