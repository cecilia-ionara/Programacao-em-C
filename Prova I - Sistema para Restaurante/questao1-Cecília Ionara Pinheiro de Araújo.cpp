//Cecília Ionara Pinheiro de Araújo
//Questao 1
#include<stdio.h>
#include<locale.h>

int main(){
	int opcao, prato, bebida, pessoa;
	float precoTotal, precoDesconto, desconto, precoPrato, precoBebida, precoPessoa;
	setlocale(LC_ALL,"");
	do{
		printf("Olá, bem-vindo ao nosso restaurante!!\n");
		printf("As opções de cardápio do dia são:\n Item \t\t\t Preço(R$)\n\n");
		printf("1 - Prato executivo \t 45,50\n");
		printf("Refrigerante Baré \t 3,50\n\n");
		printf("2 - Almoço especial \t 65,00\n");
		printf("Jarra de Suco \t\t 18,00\n");
	
		printf("Qual será o seu pedido?(1 ou 2): ");
		scanf("%i", &opcao);
		if(opcao!=1 && opcao!=2){
			printf("Código Inválido. Selecione um novo código(1 ou 2)\n\n\n\n");				
		}
	
		switch(opcao){
			case 1:
				printf("\nOk! Vemos que você selecionou o item 1.\n");
				printf("1 - Prato executivo \t 45,50\n");
				printf("Refrigerante Baré \t 3,50\n\n");
				printf("Agora, nos informe a quantidade de pratos especiais que deseja: ");
				scanf("%i", &prato);
				printf("Quantidade de refrigerante: ");
				scanf("%i", &bebida);
				
				precoPrato = prato *45.50;
				precoBebida = bebida*3.5;
				precoTotal = precoPrato+precoBebida;
				
				printf("\nO subtotal a se pagar pelos %i pratos solitados é R$ %.2f\n",prato,precoPrato);
				printf("O subtotal a se pagar pelos %i refrigerantes Baré é R$ %.2f\n",bebida,precoBebida);
				break;
			case 2:
				printf("\nOk! Vemos que você selecionou o item 2.\n");
				printf("2 - Almoço especial \t 65,00\n");
				printf("Jarra de Suco \t\t 18,00\n");
				printf("Agora, nos informe a quantidade de almoço que deseja: ");
				scanf("%i", &prato);
				printf("Quantidade de suco: ");
				scanf("%i", &bebida);
				
				precoPrato = prato*65;
				precoBebida = bebida*18;
				precoTotal = precoPrato+precoBebida;
				
				printf("\nO subtotal a se pagar pelos %i almoços solitado é R$ %.2f\n",prato,precoPrato);
				printf("O subtotal a se pagar pelas %i jarras de suco é R$ %.2f\n",bebida,precoBebida);
				break;
		}
		if(precoTotal<=500){
			desconto = (precoTotal*0.03);
			precoDesconto = precoTotal - desconto;
		}else if(precoTotal>500 && precoTotal<=800){
			desconto = (precoTotal*0.05);
			precoDesconto = precoTotal - desconto;
		}else if(precoTotal>800){
			desconto = (precoTotal*0.07);
			precoDesconto = precoTotal - desconto;
		}else{
			//desconto é 0
			precoDesconto = precoTotal;
		}
		
	}while(opcao!=1 && opcao!=2);
		
	printf("Quantas pessoas irão pagar a conta?");
	scanf("%i", &pessoa);
	
	precoPessoa = precoDesconto/pessoa;	
	
	printf("\n\t\tComanda\n");
	printf("Valor total da comanda(sem o desconto): R$ %.2f\n",precoTotal);
	printf("Valor do desconto recebido: R$ %.2f\n",desconto);
	printf("Valor com o desconto aplicado: R$ %.2f\n",precoDesconto);
	printf("Valor individual a ser pago: R$ %.2f\n",precoPessoa);
	printf("\nAgradecemos a preferencia!! Volte sempre!\n");
	
	return 0;	
}

