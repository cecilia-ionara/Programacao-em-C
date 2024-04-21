/***
****/
  
#include <stdio.h>
int idade;

int main()
{
    printf("olá, insira a idade:");
    scanf("%i", &idade);
    
    if (idade>=18){
        printf("Você é maior de idade");
    }
    else {
        printf("Você é menor de idade");
    }
    return 0;
}
