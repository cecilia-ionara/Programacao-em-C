/**Fa�a um c�digo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar,
imprimir o resultado desta opera��o.**/
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
		printf("A soma � %i", r);
	} else {
		//impar
		r = n+8;
		printf("A soma � %i", r);
	} 
	return 0;
}
