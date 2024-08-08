/**Faça um código que leia uma variável e some 5 caso seja par ou some 8 caso seja ímpar,
imprimir o resultado desta operação.**/
#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"");
	int n, r;

	printf("n: ");
	scanf("%i", &n);
	
	if(n%2==0) {
		//par
		r = n+5;
		printf("A soma é %i", r);
	} else {
		//impar
		r = n+8;
		printf("A soma é %i", r);
	} 
	return 0;
}
