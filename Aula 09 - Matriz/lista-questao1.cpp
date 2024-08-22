/*1. Escreva um programa em C que declare uma matriz 2x2 de números inteiros. 
O programa deve solicitar ao usuário que insira valores para todos os elementos
 da matriz e, em seguida, imprimir a matriz resultante.
*/

#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
    int i, j, matriz[2][2];
    // i = linha
    //j = coluna
    for(i=0;i<2;i++){
        printf("\n%i° linha: \n", i+1);
        for(j=0;j<2;j++){
            printf("%i° coluna: ", j+1);
            scanf("%i", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }
    printf("\nResultado: \n");
    for(i=0;i<2;i++){
        printf("[ ");
        for(j=0;j<2;j++){
            printf(" %i ", matriz[i][j]);
        }
        printf(" ]\n");
    }
   
    return 0;
}
