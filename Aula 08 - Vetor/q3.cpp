/*M�dia de valores em um vetor
Escreva um programa que leia 8 n�meros reais e os armazene em um vetor. O programa deve calcular 
e imprimir a m�dia desses n�meros.
Calcule a soma dos elementos e depois divida pelo n�mero de elementos para obter a m�dia
*/

#include <stdio.h>

int main()
{
    float n[8], media=0, s=0;
    int i;
	for(i=0;i<8;i++){
	    printf("Numero %i: ", i+1 );
    	scanf("%f", &n[i]);
    	s = s+n[i];
	}
	media = s/8;
    printf("A media eh: %.2f", media);
   
    return 0;
}
