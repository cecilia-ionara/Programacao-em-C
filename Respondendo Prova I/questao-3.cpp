/***
“3. (Vale 1 ponto) O fatorial de um número natural pode ser entendido como à multiplicação
desse número por todos OS SEUS antecessores maiores que zero. Utilizamos O fatorial de
um número para resolver problemas da análise combinatória ligados 80 princípio
multiplicativo.
O fatorial aparece em fórmulas de combinação e arranjo, permutação, entre outras. Para
calcular o fatorial de um número, basta encontrar o produto da multiplicação feita entre o
número informado pelo usuário e os seus antecessores (maiores que zero).
O fatorial de um número natural n é representado por n! (lê-se: n fatorial), que nada mais é
que a multiplicação de n por todos os seus antecessores maiores que O (zero), ou seja:
nt=n*(In=1)"(n=2)".."21.

Dito isso, crie um programa, em Linguagem C, que receba um número inteiro de um
usuário, calcule o fatorial desse número e exiba na tela o resultado desse fatorial.
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
