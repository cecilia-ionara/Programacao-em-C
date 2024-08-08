#include<stdio.h>
//Peça ao usuário para inserir os comprimentos dos três lados de um triângulo 
//e determine se é equilátero, isósceles ou escaleno.


int main(){
	
int num1, num2, num3;

printf("Digite o primeiro lado do triângulo: ");
scanf("%i", &num1);

printf("Digite o segundo lado do triângulo: ");
scanf("%i", &num2);

printf("Digite o terceiro lado do triângulo: ");
scanf("%i", &num3);

if ((num1 == num2) && (num1 == num3)){
	printf("O triângulo é equilátero");
}
else if ((num2 == num1 ) || (num2 == num3) || (num1 == num3)){
	printf("O triângulo é isósceles");
}

else {
	printf("O triângulo é escaleno");
} 

}
