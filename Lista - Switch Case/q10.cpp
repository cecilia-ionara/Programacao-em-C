/*10.  Verifica��o de G�nero: 
    -  Enunciado:  Crie um programa que pe�a ao usu�rio para digitar 'M' para masculino ou 'F' para feminino. 
	O programa deve responder com "Masculino" ou "Feminino" usando a estrutura `switch-case`.
    -  Exemplo de Entrada:  F
    -  Exemplo de Sa�da:  Feminino*/
#include <stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL,"");
    int g;
    printf("Qual o g�nero: ");
    scanf("%c", &g);

    switch (g) {
        case 'M': case 'm':
            printf("Masculino");
            break;
        case 'F': case 'f':
            printf("Feminino");
            break;
        default:
            printf("Escolha inv�lida\n");
            break;
    }

    return 0;
}
