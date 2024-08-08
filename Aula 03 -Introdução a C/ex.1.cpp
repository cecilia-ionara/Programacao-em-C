#include <stdio.h>

int main(){
	int n1, n2, soma;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%i", &n2);
		
	soma = n1 + n2;
	
	printf("O resultado da soma é: %i",soma);
	
	return 0;
}
