/**
d) Escreva um programa que utilize um la�o for para contar e exibir todos os n�meros pares de 1 a 20.
**/

#include <stdio.h>

int main()
{
	int i=1;
	
	for(i=1;i<=20;i++){
		if(i%2==0){
			printf("%i \n", i);
		}
	}
	return 0;
}
