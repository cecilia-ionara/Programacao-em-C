/**
c) Utilize um laço FOR para exibir a tabuada do 2 (de 2x1 até 2x10)
**/

#include <stdio.h>

int main()
{
	int i=1, n=2, r;
	
	for(i=1;i<=10;i++){
		r = n * i;
		printf("%i x %i = %i\n", n, i, r);
	}
	return 0;
}
