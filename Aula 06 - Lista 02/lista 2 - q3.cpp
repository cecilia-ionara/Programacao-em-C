/**Faça um código que leia dois valores inteiros A e B se os valores forem iguais deverá se
somar os dois, caso contrário multiplique A por B. Ao final de qualquer um dos cálculos
deve-se atribuir o resultado para uma variável C e mostrar seu conteúdo na tela.
**/
#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("a: ");
    scanf("%i", &a);
    
    printf("b: ");
    scanf("%i", &b);
    
    if(a==b){
        c=a+b;
        printf("A soma eh %i", c);
    }else{
        c=a*b;
        printf("A multiplicacao eh %i", c);
    }
    return 0;
}
