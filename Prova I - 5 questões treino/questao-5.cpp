/***
5. (Vale 2 pontos) Na cidade de Marab�. que fica no sudeste do Par�, existe uma emprese-de-� -
r t�xi tradici�n�l que opera que cobra uma taxa fixa de R$ 5,50 (cinco reais e cinquenta
centavos) e uma tarifa de R$ 0.60 (sessenta centavos) por quil�metro percorrido, Crie um
programa, em linguagem C, que possibilite ao usu�rio informar um n�mero real, para
simular a quantidade de quil�metros a serem percorridos e, ao final, exibir o valor total a
pagar pela corrida de t�xi, considerando a taxa fixa e tarifa informadas.
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
