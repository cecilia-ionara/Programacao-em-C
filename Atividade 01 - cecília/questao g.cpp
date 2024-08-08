/**
g) Crie um programa que calcule e exiba a soma dos números ímpares de 1 a 15.
 **/

#include <stdio.h>

int main()
{
	int i, s=0;
	
	for(i=1;i<=15;i++){
		if(i%2!=0){
			s = s + i;
		}      
	}
	printf("%i \n", s);

	return 0;
}
