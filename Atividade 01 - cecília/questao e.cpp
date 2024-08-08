/**
e) Crie um programa que calcule o fatorial de 5 utilizando um laço for.
**/

#include <stdio.h>

int main()
{
	int fat=1, i;
	
	for(i=5;i>1;i--){
		fat = fat * i;
	}
	printf("%i ", fat);
	return 0;
}
