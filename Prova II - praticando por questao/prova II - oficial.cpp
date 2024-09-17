/*Escreva um programa em C que leia uma matriz 4x4 de inteiros (1 ponto). 
Em seguida, crie uma função que receba essa matriz como parâmetro, 
copie uma linha (escolhida pelo usuário) para um vetor, e retorne o vetor para o programa principal, 
onde ele será impresso. Para imprimir o vetor crie uma função que receba e imprima o vetor; 
Para imprimir a matriz crie uma outra função que receba e imprima a matriz. No programa principal, 
chame a função de impressão do vetor e, em seguida, chame a função de impressão da matriz.
Leia a matriz de 4x4 inteiros.
Peça ao usuário para escolher uma linha da matriz (de 0 a 3).
Crie uma função que receba a matriz e a linha escolhida como parâmetros, copie essa linha para um vetor, e retorne o vetor.
Imprima o vetor no programa principal.

Desejo a todos, uma ótima prova!

Atenciosamente,
*/
#include<stdio.h>

// copiar uma linha da matriz para um vetor
int* vetorLinha(int matriz[4][4], int linha) {
    static int vetor[4];  // Vetor estático para ser retornado
    for (int j = 0; j < 4; j++) {
        vetor[j] = matriz[linha][j];
    }
    return vetor; 
}

// Função para imprimir o vetor
void imprimeVetor(int *vetor) {
    printf("[ ");
    for (int i=0; i<4; i++) {
        printf("%i ", vetor[i]);  
    }
    printf("]\n");
}

// Função para imprimir a matriz
void imprimeMatriz(int matriz[4][4]) {
    printf("Matriz 4x4:\n");
    for (int i=0; i<4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%i ", matriz[i][j]);  
        }
        printf("\n");
    }
}

int main() {
    int matriz[4][4], linha;
    int* vetor;  // Ponteiro para o vetor retornado

    // Leia a matriz de 4x4 inteiros
    printf("Informe os valores da matriz 4x4: \n");
    for (int i=0;i<4;i++) {
        for (int j=0;j<4;j++) {
            scanf("%i", &matriz[i][j]);
        }
    }

    // Peça ao usuário para escolher uma linha da matriz (de 0 a 3)
    do {
        printf("Escolha uma linha da matriz (0 a 3): ");
        scanf("%d", &linha);
    } while (linha < 0 || linha > 3);  // Valida se a linha está entre 0 e 3

    // Chama a função que copia a linha da matriz para o vetor
    vetor = vetorLinha(matriz, linha);

    // Imprime o vetor
    printf("Os elementos contidos na linha %d são: ", linha);
    imprimeVetor(vetor);

    // Imprime a matriz
    imprimeMatriz(matriz);

    return 0;
}

