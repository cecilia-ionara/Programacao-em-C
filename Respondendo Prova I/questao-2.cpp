/***
2. (Vale 2.5 pontos) Faça um programa que leia o
nome de um vendedor
seu salário fixo e
O total de vendas efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor
ganha 10% de comissão sobre suas vendas efetuadas, informar O total à receber no final do
mês, com duas casas decimais. Utilize a estrutura de repetição do...while para receber
novos valores, enquanto o salário informado for maior do que O (zero).
Entrada
O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla
precisão (double) com duas casas decimais, representando o salário fixo do vendedor e
montante total das vendas efetuadas por este Vendedor, respectivamente.
Saída
Imprima o total que o funcionário deverá receber,
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
