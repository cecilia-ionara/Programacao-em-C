/*O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o Mundial de Sa�de para
dar uma indica��o sobre a condi��o de peso de uma pessoa adulta. A f�rmula � IMC =
peso / ( altura )2.
Elabore um c�digo que leia o peso e a altura de um adulto e mostre sua condi��o de
acordo com a tabela abaixo.
IMC em adultos Condi��o
Abaixo de 18,5 => Abaixo do peso
Entre 18,5 e 25 => Peso normal
Entre 25 e 30 => Acima do peso
Acima de 30 obeso..
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"");
    float peso, altura, imc;
	
	printf("obs: use virgulas\n");
    printf("peso: ");
    scanf("%f", &peso);
    printf("altura: ");
    scanf("%f", &altura);
	
	imc = peso/(altura*altura);
	
    if (imc <18.5) {
        printf("Com imc %.2f voc� se encontra abaixo do peso ideal", imc);
	} else if(imc>=18.5 && imc<=25){
        printf("Com imc %.2f voc� se encontra no peso ideal", imc);
	} else if (imc>25 && imc<=30){
        printf("Com imc %.2f voc� se encontra acima do peso ideal", imc);
	} else if(imc>30){
        printf("Com imc %.2f voc� est� obeso", imc);
	}
    return 0;
}

