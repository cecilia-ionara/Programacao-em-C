
#include <stdio.h>

char letra;

int main () {
	printf ("Ola!!, insira a letra:");
	scanf ("%c", &letra);

	if (letra >= 'a' && letra <= 'z') {
		printf("A letra digitada eh uma letra minuscula.\n");
	} else if (letra >= 'A' && letra <= 'Z') {
		printf("A letra digitada eh uma letra maiscula.\n");
	} else {
		printf("Nao foi digitada uma letra.\n");
	}

	return 0;
}
