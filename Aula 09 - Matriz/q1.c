/******************************************************************************

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, k, matriz[10][10], valor;
    printf("Aula Matriz\n");
    for(i=0;i<3;i++){
        printf("\n\n%i° linha: \n", i+1);
        for(j=0;j<3;j++){
            printf("%i° coluna: ", j+1);
            scanf("%i", &matriz[i][j]);
        }
    }
    
    for(i=0;i<3;i++){
        printf("[ ");
        for(j=0;j<3;j++){
            printf(" %i ", matriz[i][j]);
        }
        printf(" ]\n");
    }
    
    return 0;
}