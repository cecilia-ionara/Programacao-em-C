/**
d) Repita o item c) , porém utilizando a estrutura do... while;

 **/

#include <stdio.h>

int main()
{
    int n1, n2, soma, i=1;
    
    do{
    printf("%i° Rodada \n",i);
    printf("Numero 1: ");
    scanf("%i", &n1);
    printf("Numero 2: ");
    scanf("%i", &n2);
    
    soma = n1+n2;
    i++;
    
    printf("Resultado da soma de %i e %i: %i\n\n", n1, n2, soma);
    }while(i<=3);
    
    return 0;
}