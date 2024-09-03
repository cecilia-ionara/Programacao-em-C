#include <stdio.h>
//ponteiro substituiu o valor de n1 e n2
void troca(int *a, int *b) {
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main() {
    int num1, num2;

    printf("Num 1: ");
    scanf("%i", &num1);
    printf("Num 2: ");
    scanf("%i", &num2);

    troca(&num1, &num2);//manda endereço da variavel

    printf("\nTroca\nNum 1: %i\nNum 2: %i", num1, num2);
    return 0;
}

