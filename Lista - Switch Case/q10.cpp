/*10.  Verificação de Gênero: 
    -  Enunciado:  Crie um programa que peça ao usuário para digitar 'M' para masculino ou 'F' para feminino. 
	O programa deve responder com "Masculino" ou "Feminino" usando a estrutura `switch-case`.
    -  Exemplo de Entrada:  F
    -  Exemplo de Saída:  Feminino*/
#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int g;
    printf("Qual o gênero: ");
    scanf("%c", &g);

    switch (g) {
        case 'M': case 'm':
            printf("Masculino");
            break;
        case 'F': case 'f':
            printf("Feminino");
            break;
        default:
            printf("Escolha inválida\n");
            break;
    }

    return 0;
}
