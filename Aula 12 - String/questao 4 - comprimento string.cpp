#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL," ");
	char minhaString[] = " Faz o L ";
	int comprimento = strlen(minhaString);
	printf("comprimento da string: %i\n", comprimento);
	
	return 0;
}
