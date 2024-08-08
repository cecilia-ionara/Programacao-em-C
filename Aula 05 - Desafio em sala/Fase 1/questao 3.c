/***
****/
  
#include <stdio.h>
float volume, raio, altura;

int main()
{
    printf("Olá, insira o valor do raio:");
    scanf("%f", &raio);
    
    printf("Insira a altura:");
    scanf("%f", &altura);
    
    volume = 3.14159 * (raio * raio) * altura;

    printf("O volume é %f", volume);

    return 0;
}
