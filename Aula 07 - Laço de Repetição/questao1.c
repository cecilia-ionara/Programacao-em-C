/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int idade;
	float reais;

	printf("Idade: ");
	scanf("%d", &idade);
	
	printf("Quantos reais tem para gastar: ");
	scanf("%f", &reais);
	
	if (idade >= 18 && reais>= 100) {
		printf("A pessoa eh maior de idade e tem dinheiro suficiente, portanto pode entrar");
	} else {
		printf("Infelizmente a pessoa nao pode entrar, pois nao tem idade ou nao tem dinheiro suficiente");
	}

	return 0;
}