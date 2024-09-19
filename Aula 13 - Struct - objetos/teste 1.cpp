#include <stdio.h>
#include <string.h>
#include <locale.h>

//declaração de struct
struct Pessoa {
	char nome [50];
	int idade ;
	float altura;
};

void imprimePessoa(struct Pessoa p ) {
	printf("nome: %s\n", p.nome);
	printf("Idade: %d\n", p.idade);
	printf("altura: %.2f\n", p.altura);
}
int main (){
	setlocale(LC_ALL,"");
	struct Pessoa pessoa1;
	
	strcpy(pessoa1.nome, "João");
	pessoa1.idade = 30;
	pessoa1.altura = 1.75;
	
	imprimePessoa(pessoa1);
	return 0 ;
}
