/**Faça um código que leia os valores A, B, C e imprima na tela se a soma de A + B é menor
que C.**/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	int a, b, c;

	printf("a: ");
	scanf("%i", &a);
	printf("b: ");
	scanf("%i", &b);
	printf("c: ");
	scanf("%i", &c);
	
	if(a+b<c) {
		printf("A soma de %i e %i É menor que %i", a, b, c);
	} else {
		printf("A soma de %i e %i NAO é menor que %i", a, b, c);
	}
	return 0;
}
