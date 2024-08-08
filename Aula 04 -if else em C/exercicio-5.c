#include<stdio.h>
//Solicite ao usuário que insira o preço de um produto e aplique um desconto de acordo 
//com o valor total da compra. Se o preço for maior ou igual a R$ 100, aplique um desconto de 10%.
//Caso contrário, não aplique nenhum desconto

int main(){
	
float preco, novopreco;

printf("Digite o preço do produto: ");
scanf("%f", &preco);

if (preco>=100){
	printf("Parabens! Você recebeu um desconto de 10 porcento");
	novopreco = preco - (preco * 0.1);
	printf("O novo preço é %.2f",novopreco);

}
else {
	printf("Poxa, você não recebeu desconto.");
} 

}
