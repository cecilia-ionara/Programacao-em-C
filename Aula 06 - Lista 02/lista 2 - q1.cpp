/**Encontrar o dobro de um n�mero caso ele seja positivo e o seu triplo caso seja negativo,
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
		printf("O dobro de %i � %i", n, r);
	} else if(n<0) {
		//negativo
		r = n*3;
		printf("o triplo de %i � %i",n, r);
	} else{
		printf("O valor digitado � zero, portanto n�o podemos definir se � positivo ou negativo.");
	}
	return 0;
}
