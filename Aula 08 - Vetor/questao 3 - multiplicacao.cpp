/*3. Multiplicação escalar de um vetor
Desenvolva um programa em C que multiplica todos os elementos de um vetor de 10
inteiros por um valor constante fornecido pelo usuário. Use uma função que receba o vetor
e o valor constante, modifique o vetor e o retorne modificado.*/

#include <stdio.h>

int multiVetor(int vet[],int tamanho){
    int multi= 0;
    int c = 2;
    for(int i=0; i<tamanho;i++){
        multi+=vet[i];
    }
    return multi*c;
}
int main(){
    int vetor[10]= {1,2,3,4,5,6,7,8,9,10};
    int tamanho=10;
    

        printf("o valor da multiplicacao eh: %d\n", multiVetor(vetor, tamanho));

    
    return 0;
}
