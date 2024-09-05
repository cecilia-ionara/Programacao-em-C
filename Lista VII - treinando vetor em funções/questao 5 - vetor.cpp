/*5. Verificar se um Número Está Presente no Vetor
**Descrição**: Crie um programa que recebe um vetor de 10 inteiros 
e um número. O programa deve passar o vetor e o número para uma função 
que verifica se o número está presente no vetor. A função deve retornar 
1 se o número estiver presente e 0 se não estiver.
// Função esperada: int verificarPresenca(int vetor[], int tamanho, int numero);*/

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
