/*6. Compreender e implementar a transposição de matrizes.
Crie um programa que leia duas matrizes 3x3 de números inteiros e calcule a matriz soma, onde cada
 elemento é a soma dos elementos correspondentes das duas matrizes. Imprima a matriz resultante.*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int i, j, matriz1[3][3], matriz2[3][3], matrizSoma[3][3];
	
	printf("Matriz 1\n");
    for(i=0;i<2; i++){
    	printf("\n%i° linha:\n", i+1);
        for(j=0;j<2;j++){
            printf("%i° coluna: ", j + 1);
            scanf("%i", &matriz2[i][j]);
        }
    }
	
	printf("Matriz 2\n");	
	for(i=0;i<2; i++){
    	printf("\n%i° linha:\n", i+1);
        for(j=0;j<2;j++){
            printf("%i° coluna: ", j + 1);
            scanf("%i", &matriz1[i][j]);
        }
    }    
    
    for(i=0;i<2; i++){
        for(j=0;j<2;j++){
			matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
        printf("]\n");
    }   
	return 0;
}
