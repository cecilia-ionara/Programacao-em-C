#include<stdio.h>
//Peça ao usuário para digitar um número inteiro e determine se é par ou ímpar.


int main(){
	
int num;

printf("Digite o número para verificação de par ou impar: ");
scanf("%i", &num);


if (num%2==0 ){
	printf("O número é par");
}
else {
	printf("O número é ímpar");
} 

}
