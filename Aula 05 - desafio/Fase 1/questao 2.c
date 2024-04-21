/***
****/
  
#include <stdio.h>
float media, nota1, nota2, nota3, nota4;

int main()
{
    printf("Olá, insira a primeira nota:");
    scanf("%f", &nota1);
    
    printf("Insira a segunda nota:");
    scanf("%f", &nota2);
    
    printf("Insira a terceira nota:");
    scanf("%f", &nota3);
    
    printf("Insira a quarta nota:");
    scanf("%f", &nota4);
    
    media = (nota1+nota2+nota3+nota4)/4;

    if (media>=5){
        printf("Você está aprovado");
    }
    else {
        printf("Você reprovou, nota insuficiente");
    }
    return 0;
}
