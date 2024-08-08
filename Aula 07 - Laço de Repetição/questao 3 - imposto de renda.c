
#include <stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	float salario_bruto, salario_liquido, desconto;

	printf("Salário: ");
	scanf("%f", &salario_bruto);

	if(salario_bruto<=2259.20) {
		printf("Seu salário é menor que 2259.20, portanto não há descontos\n");
		printf("Salario liquido: %.2f", salario_bruto);
	} else     if(salario_bruto>2259.20 && salario_bruto<=2826.65) {
		desconto = salario_bruto * 0.075;
		printf("Desconto de 7.5%%: %.2f\n", desconto);
		salario_liquido =  salario_bruto - desconto; 
		printf("Salário liquido: %.2f", salario_liquido);
	} else     if(salario_bruto>2826.65 && salario_bruto<=3751.05) {
		desconto = salario_bruto * 0.15;
		printf("Desconto de 15%%: %.2f\n", desconto);
		salario_liquido =  salario_bruto - desconto; 
		printf("Salário liquido: %.2f", salario_liquido);
	}else     if(salario_bruto>3751.05 && salario_bruto<=4664.68) {
		printf("Desconto de 22.5%%: %.2f\n", desconto);
		desconto = salario_bruto * 0.225;
		salario_liquido =  salario_bruto - desconto; 
		printf("Salário liquido: %.2f", salario_liquido);
	}else     if(salario_bruto>4664.68) {
		desconto = salario_bruto * 0.275;
		printf("Desconto de 27.5%%: %.2f\n", desconto);
		salario_liquido =  salario_bruto - desconto; 
		printf("Salário liquido: %.2f", salario_liquido);
	}
	return 0;
}