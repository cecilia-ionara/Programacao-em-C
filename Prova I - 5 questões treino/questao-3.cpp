/***
�3. (Vale 1 ponto) O fatorial de um n�mero natural pode ser entendido como � multiplica��o
desse n�mero por todos OS SEUS antecessores maiores que zero. Utilizamos O fatorial de
um n�mero para resolver problemas da an�lise combinat�ria ligados 80 princ�pio
multiplicativo.
O fatorial aparece em f�rmulas de combina��o e arranjo, permuta��o, entre outras. Para
calcular o fatorial de um n�mero, basta encontrar o produto da multiplica��o feita entre o
n�mero informado pelo usu�rio e os seus antecessores (maiores que zero).
O fatorial de um n�mero natural n � representado por n! (l�-se: n fatorial), que nada mais �
que a multiplica��o de n por todos os seus antecessores maiores que O (zero), ou seja:
nt=n*(In=1)"(n=2)".."21.

Dito isso, crie um programa, em Linguagem C, que receba um n�mero inteiro de um
usu�rio, calcule o fatorial desse n�mero e exiba na tela o resultado desse fatorial.
***/

#include <stdio.h>

int main() {
	int numero, i, fatorial=1;

	printf("\n = CALCULO FATORIAL = \n");
	printf("Digite o numero para calcular o fatorial: ");
	scanf("%i", &numero);
	
	 for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;
    }
	printf("O fatorial de %i eh %i \n", numero, fatorial);
	return 0;
}
