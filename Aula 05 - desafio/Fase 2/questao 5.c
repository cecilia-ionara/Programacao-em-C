
#include <stdio.h>
#include <string.h>

int senha;
char nome[10];

int main(){
    printf("Olá, insira o nome:");
    scanf("%s", nome);
    
    printf("Olá, insira a senha:");
    scanf("%i", &senha);
    
    if (strcmp(nome,"admin") == 0 && senha==1234){
        printf("Você pode entrar!");
    }
    else {
        printf("ACESSO NEGADO");
    }
    return 0;
}
