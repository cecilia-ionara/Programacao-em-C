#include<stdio.h>
//Imagine que um evento só permite a entrada de pessoas com ingressos válidos, 
//cujos códigos são números inteiros. Além disso, o evento definiu que apenas os 
//ingressos com números pares entre 10 e 50 são considerados válidos.


int main(){
	
int num;

printf("Digite o número do seu ingresso: ");
scanf("%i", &num);

if ((num>=10) && (num<=50)){
	printf("Parabens! Você pode entrar!");
}
else {
	printf("Poxa, você não pode entrar.");
} 

}
