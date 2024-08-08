/*7. Escreva um código que leia três valores inteiros e diferentes e mostre-os em ordem
crescente.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    int n1, n2, n3;

    printf("n1: ");
    scanf("%i", &n1);
    printf("n2: ");
    scanf("%i", &n2);
    printf("n3: ");
    scanf("%i", &n3);

    if (n1 < n2 && n1 < n3) {
        if (n2 < n3) {
            printf("%i, %i, %i", n1, n2, n3);
        } else {
            printf("%i, %i, %i", n1, n3, n2);
        }
    } else if (n2 < n1 && n2 < n3) {
        if (n1 < n3) {
            printf("%i, %i, %i", n2, n1, n3);
        } else {
            printf("%i, %i, %i", n2, n3, n1);
        }
    } else if (n3 < n1 && n3 < n2) {
        if (n1 < n2) {
            printf("%i, %i, %i", n3, n1, n2);
        } else {
            printf("%i, %i, %i", n3, n2, n1);
        }
    }

    return 0;
}

