/**Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo,
imprimindo o resultado.**/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	int n, r;

	printf("n: ");
	scanf("%i", &n);
	
	if(n>0) {
		//positivo
		r = n*2;
		printf("O dobro de %i é %i", n, r);
	} else if(n<0) {
		//negativo
		r = n*3;
		printf("o triplo de %i é %i",n, r);
	} else{
		printf("O valor digitado é zero, portanto não podemos definir se é positivo ou negativo.");
	}
	return 0;
}
