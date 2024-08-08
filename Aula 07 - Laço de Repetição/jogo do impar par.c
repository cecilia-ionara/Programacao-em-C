/**
    impar ou par
 **/

#include <stdio.h>

int main()
{
	int j1, j2, j=0, k=0, i=1, soma;

	do {
		printf("\n%i° Rodada \n",i);
		printf("Jogador 1: ");
		scanf("%i", &j1);
		printf("Jogador 2: ");
		scanf("%i", &j2);

		soma = j1+j2;
		if(soma%2==0) {
			//resultado par
			if(j1%2==0 && j2%2!=0) {
				//jogador 1 jogou par e j2 nao
				printf("Jogador 1 venceu a %i° rodada\n\n", i);
				k++;
			} else if(j2%2==0 && j1%2!=0) {
				//jogador 2 jogou par e j1 nao
				printf("Jogador 2 venceu a %i° rodada\n\n", i);
				j++;
			}
		}
			if(soma%2!=0) {
			//resultado impar
			if(j1%2!=0 && j2%2==0) {
				//jogador 1 jogou impar e j2 nao
				printf("Jogador 1 venceu a %i° rodada\n\n", i);
				k++;
			} else if(j2%2!=0 && j1%2==0) {
				//jogador 2 jogou impar e j1 nao
				printf("Jogador 2 venceu a %i° rodada\n\n", i);
				j++;
			}
		}

		i++;
	} while(i<=3);

	if(k>j) {
		printf("\nResultado final: Jogador 1 eh o vencedor!!");
	} else if(j>k) {
		printf("\nResultado final: Jogador 2 eh o vencedor!!");
	}
	return 0;
}
