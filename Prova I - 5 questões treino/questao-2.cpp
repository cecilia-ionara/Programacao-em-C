/***
2. (Vale 2.5 pontos) Fa�a um programa que leia o
nome de um vendedor
seu sal�rio fixo e
O total de vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor
ganha 10% de comiss�o sobre suas vendas efetuadas, informar O total � receber no final do
m�s, com duas casas decimais. Utilize a estrutura de repeti��o do...while para receber
novos valores, enquanto o sal�rio informado for maior do que O (zero).
Entrada
O arquivo de entrada cont�m um texto (primeiro nome do vendedor) e 2 valores de dupla
precis�o (double) com duas casas decimais, representando o sal�rio fixo do vendedor e
montante total das vendas efetuadas por este Vendedor, respectivamente.
Sa�da
Imprima o total que o funcion�rio dever� receber,
***/

#include<stdio.h>

int main() {
	char nome[30];
	double salario_fixo, total_vendas, salario_final, comissao;

	do {
		printf("\n = CALCULO DE SALARIO = \n");

		printf("Informe o seu nome: ");
		scanf("%s", nome);

		printf("Digite o salario fixo: ");
		scanf("%lf", &salario_fixo);

		printf("Digite o total de vendas ao mes (em reais): ");
		scanf("%lf", &total_vendas);
		printf("\n");

		comissao = total_vendas * 0.1;
		salario_final = salario_fixo + comissao;

		printf("%s, ao final do mes seu salario sera : %lf\n", nome, salario_final);
		
	} while (salario_fixo>0);
	
	return 0;
}
