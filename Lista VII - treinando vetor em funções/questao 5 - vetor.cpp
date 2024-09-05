/*5. Verificar se um N�mero Est� Presente no Vetor
**Descri��o**: Crie um programa que recebe um vetor de 10 inteiros 
e um n�mero. O programa deve passar o vetor e o n�mero para uma fun��o 
que verifica se o n�mero est� presente no vetor. A fun��o deve retornar 
1 se o n�mero estiver presente e 0 se n�o estiver.
// Fun��o esperada: int verificarPresenca(int vetor[], int tamanho, int numero);*/

#include<stdio.h>

int verificarPresenca(int vetor[], int tamanho, int n) {
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] == n) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int vetor[10], n, resultado;
    
    for(int i = 0; i < 10; i++) {
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &vetor[i]);
    }
    
    printf("\nQual o numero para verificar presenca? ");
    scanf("%i", &n);
    
    resultado = verificarPresenca(vetor, 10, n); //precisa usar variavel pra receber o valor que a funcao retorna
    
    printf("%d\n", resultado);
    
    return 0;
}
