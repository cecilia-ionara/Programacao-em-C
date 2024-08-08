
#include <stdio.h>

int main()
{
	float n1, n2, n3, media;

	printf("Nota 1: ");
	scanf("%f", &n1);
	printf("Nota 2: ");
	scanf("%f", &n2);
	printf("Nota 3: ");
	scanf("%f", &n3);
	
    media = (n1+n2+n3)/3;
    
	if (media <= 4.9) {
		printf("Sua nota final foi %.2f, conceito INSIFUCIENTE", media);
	} else if (media >= 5 && media <= 6.9) {
		printf("Sua nota final foi %.2f, conceito REGULAR", media);
	} else if (media >= 7 && media <= 8.9) {
		printf("Sua nota final foi %.2f, conceito BOM", media);
	} else if (media >= 9) {
		printf("Sua nota final foi %.2f, conceito EXCELENTE", media);
	} 
	return 0;
}