#include<stdio.h>
//Solicite ao usuário que insira três números inteiros e determine qual é o maior entre eles.


int main(){
	
int num1, num2, num3;

printf("Digite o primeiro número: ");
scanf("%i", &num1);

printf("Digite o segundo número: ");
scanf("%i", &num2);

printf("Digite o terceiro número: ");
scanf("%i", &num3);

if ((num1 > num2) && (num1 > num3)){
	printf("O número %ls é o maior entre os valores", &num1);
}
else if ((num2 > num1 ) && (num2 > num3)){
	printf("O número %ls é o maior entre os valores", &num2);
}
else if ((num3 > num1 ) && (num3 > num2)){
	printf("O número %ls é o maior entre os valores", &num3);
}

else {
	printf("ERRO. Algum dos valores são iguais");
} 

}
