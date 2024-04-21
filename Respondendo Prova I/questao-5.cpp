/***
5. (Vale 2 pontos) Na cidade de Marabá. que fica no sudeste do Pará, existe uma emprese-de-— -
r táxi tradiciónál que opera que cobra uma taxa fixa de R$ 5,50 (cinco reais e cinquenta
centavos) e uma tarifa de R$ 0.60 (sessenta centavos) por quilômetro percorrido, Crie um
programa, em linguagem C, que possibilite ao usuário informar um número real, para
simular a quantidade de quilômetros a serem percorridos e, ao final, exibir o valor total a
pagar pela corrida de táxi, considerando a taxa fixa e tarifa informadas.
***/
#include <stdio.h>

int main() {

	float taxa_fixa, tarifa, km, valor_total;

	printf("Insira a quantidade de km que deseja percorrer: ");
	scanf("%f", &km);

	taxa_fixa = 5.5;
	tarifa = km * 0.6;

	valor_total = taxa_fixa + tarifa;

	printf("O valor a ser cobrado pela corrida de %.2f km eh de R$: %.2f ", km, valor_total);

	return 0;
}
