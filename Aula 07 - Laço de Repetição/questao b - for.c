/**
 b) Utilize a estrutura de repetição for para que o usuário possa repetir 3 vezes 
 o item anterior. Ou seja, crie um programa que permita que o usuário informe 2 números 
 e calcule a soma deles, de modo que essa operação possa ser repetida 3 vezes." .
 **/

#include <stdio.h>

int main()
{
    int n1, n2, soma, i;
    
    for(i=1;i<=3;i++){
    printf("%i° Rodada \n",i);
    printf("Numero 1: ");
    scanf("%i", &n1);
    printf("Numero 2: ");
    scanf("%i", &n2);
    
    soma = n1+n2;
    
    printf("Resultado da soma de %i e %i: %i\n\n", n1, n2, soma);
    }
    return 0;
}