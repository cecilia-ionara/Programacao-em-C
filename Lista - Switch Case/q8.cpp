/*8.  Escolha de Cores: 
   -  Enunciado:  Crie um programa onde o usuário possa 
   escolher entre três cores: 1 para Vermelho, 2 para Verde, 3 para Azul. 
   O programa deve imprimir o nome da cor escolhida usando `switch-case`.
   -  Exemplo de Entrada:  2
   -  Exemplo de Saída:  Verde
*/

#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");

    int escolha;

    printf("Escolha uma cor:\n");
    printf("1 - Vermelho\n");
    printf("2 - Verde\n");
    printf("3 - Azul\n");
    printf("Digite o número correspondente à cor escolhida: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Vermelho");
            break;
        case 2:
            printf("Verde");
            break;
        case 3:
            printf("Azul");
            break;
        default:
            printf("Escolha inválida");
            break;
    }

    return 0;
}
