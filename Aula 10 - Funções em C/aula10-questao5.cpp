/*5. Fun��o para Calcular o Fatorial de um N�mero   - 
**Enunciado:** Crie uma fun��o que recebe um n�mero inteiro positivo
 e retorna o fatorial desse n�mero. Solicite um n�mero ao usu�rio e 
 mostre o fatorial calculado usando a fun��o.
   - **Objetivo:** Praticar a l�gica de loops e recurs�o.
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

