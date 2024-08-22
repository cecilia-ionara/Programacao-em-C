/******************************************************************************
MATRIZ
*******************************************************************************/
#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
    int i, j, k, matriz[3][3], valor, soma=0;
    printf("Aula Matriz\n");
    for(i=0;i<3;i++){
    	//recebe linhas (o usuario nao precisa inserir pq vai ser sempre em ordem
        printf("\n%i° linha: \n", i+1);
        for(j=0;j<3;j++){
		//usuario insere o valor q ta naquela linha e coluna
            printf("%i° coluna: ", j+1);
            scanf("%i", &matriz[i][j]);
            soma = soma + matriz[i][j];
        }
    }
    printf("\nResultado: \n");
    for(i=0;i<3;i++){
        printf("[ ");
        for(j=0;j<3;j++){
        	//exibindo a linha de acordo com coluna
            printf(" %i ", matriz[i][j]);
        }
        printf(" ]\n");
    }
    
    printf("\nA soma de todos os elementos da matriz é %i", soma);
    return 0;
}
