/*3. Escreva um programa que leia uma matriz 2x3 de números inteiros. O programa deve 
multiplicar cada elemento da matriz por uma constante (escolhida pelo usuário) e 
imprimir a matriz resultante.
*/

#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
     int i, j, matriz[2][3], n, novaMatriz[2][3];
    // i = linha
    //j = coluna
   	for(i=0;i<2;i++){
   		printf("\n%i° linha:\n", i+1);
   		for(j=0;j<3;j++){
  	    	printf("%i° coluna:", j+1);
			scanf("%i", &matriz[i][j]);
		   }
   	}
   	printf("Informe o valor que vamos multiplicar toda a matriz: ");
   	scanf("%i", &n);
   	
   	//multiplicação e exibição
	printf("\nResultado:\n");
   	for(i=0;i<2;i++){
        printf("[ ");
   		for(j=0;j<3;j++){
   			novaMatriz[i][j] = matriz[i][j] * n;
            printf(" %i ", novaMatriz[i][j]);
        }
        printf(" ]\n");
 	}
    return 0;
}
