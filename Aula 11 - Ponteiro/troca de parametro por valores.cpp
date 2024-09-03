//nao substitui, trocou mas num1 e num2 continua  o msm
#include <stdio.h>
void troca(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    
    printf("\nTroca\nNum 1: %i\nNum 2: %i", a, b);
}

int main() {
    int num1, num2;

    printf("Num 1: ");
    scanf("%i", &num1);
    printf("Num 2: ");
    scanf("%i", &num2);

    troca(num1, num2);

    return 0;
}

