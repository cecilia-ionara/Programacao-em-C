/*5. Treinar a busca de um elemento específico dentro de uma matriz.
Escreva um programa que leia uma matriz 2x2 de números inteiros e gere a matriz transposta. 
A transposta de uma matriz é obtida trocando as linhas pelas colunas. Imprima a matriz transposta.
*/

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int i, j, matriz[2][2], transposta[2][2];

    for(i = 0; i < 2; i++){
    	printf("\n%i° linha:\n", i+1);
        for(j = 0; j < 2; j++){
            printf("%i° coluna: ", j + 1);
            scanf("%i", &matriz[i][j]);
        }
    }
	
	//trocando ordem	
	for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            transposta[j][i] = matriz[i][j];
        }
    }
	
    printf("\nResultado matriz transposta:\n");
    for(i=0;i<2;i++){
        printf("[ ");
        for(j=0;j<2;j++){
            printf("%i ", transposta[i][j]);
        }
        printf("]\n");
    }
    return 0;
}
