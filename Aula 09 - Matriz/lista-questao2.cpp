/*2. Praticar a inser��o de dados em uma matriz e sua impress�o.
Crie um programa que leia uma matriz 3x3 de n�meros inteiros fornecidos pelo usu�rio. 
O programa deve calcular
e imprimir a soma de todos os elementos da matriz.*/

#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"");
     int i, j, matriz[3][3], soma=0;
    // i = linha
    //j = coluna
    for(i=0;i<3;i++){
    	printf("\n%i� linha: \n", i+1);
    	for(j=0;j<3;j++){
            printf("%i� coluna: ", j+1);
			scanf("%i", &matriz[i][j]);
			soma = soma + matriz[i][j];
		}
	}
	printf("\nResultado: \n");
    for(i=0;i<3;i++){
        printf("[ ");
        for(j=0;j<3;j++){
            printf(" %i ", matriz[i][j]);
        }
        printf(" ]\n");
    }
    printf("\nA soma de todos os elementos da matriz � %i ", soma);
    return 0;
}
