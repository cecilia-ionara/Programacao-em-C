/**
b) Crie um programa que calcule a soma dos primeiros 10 n�meros inteiros positivos
 e exiba o resultado. Utilize o la�o DO...WHILE.
 **/

#include <stdio.h>

int main()
{
	int i=1, n=0;
	
	do{
		n = n + i;
		i++;
	}while(i<11);
	printf("%i ", n);
	return 0;
}
