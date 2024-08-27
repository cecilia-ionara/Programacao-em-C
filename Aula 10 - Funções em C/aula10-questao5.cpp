/*5. Função para Calcular o Fatorial de um Número   - 
**Enunciado:** Crie uma função que recebe um número inteiro positivo
 e retorna o fatorial desse número. Solicite um número ao usuário e 
 mostre o fatorial calculado usando a função.
   - **Objetivo:** Praticar a lógica de loops e recursão.
*/
#include<stdio.h>

int verificador(int x){
    int i, fatorial = 1; 
    i = x;
    while(i > 0){
        fatorial = fatorial * i; 
        i--;
    }
    return fatorial; 
}

int main(){
    int numero, resultado;
    printf("Informe o numero: ");
    scanf("%i", &numero);
    
    resultado = verificador(numero);
    printf("O fatorial de %i eh: %i\n", numero, resultado);
        
    return 0;
}

