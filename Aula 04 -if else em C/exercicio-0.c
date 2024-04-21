#include<stdio.h>
//exercicio zero

int main(){
	
int num1, num2;

printf("Digite dois valores para compararmos qual deles é o maior \n");

printf("Digite o primeiro número: ");
scanf("%i", &num1);

printf("Digite o segundo número: ");
scanf("%i", &num2);

if (num1>num2){
	printf("O número %ls é maior que o %ls",&num1,&num2);
}
else if (num2>num1){
	printf("O número %ls é maior que o %ls",&num2,&num1);
} 
else if (num1==num2){
	printf("Os valores são iguais");
}

}
