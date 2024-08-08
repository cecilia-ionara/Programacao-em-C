/**
 * Crie um código (em linguagem C) que:
a) Imprima na tela uma mensagem para que o usuário digite número inteiro e,
em seguida, leia esse número inteiro. Novamente, escreva uma mensagem para 
que ele digite um segundo número inteiro, e leia esse segundo número. Após 
isso, calcule a soma de ambos (utilize a variável ''soma", também do tipo inteiro).
Por fim, imprima na tela o resultado da soma após a frase: "Resultado da soma = " .
 **/

#include <stdio.h>

int main()
{
    int n1, n2, soma;
    
    printf("Numero 1: ");
    scanf("%i", &n1);
    printf("Numero 2: ");
    scanf("%i", &n2);
    
    soma = n1+n2;
    
    printf("Resultado da soma de %i e %i: %i", n1, n2, soma);
    
    return 0;
}