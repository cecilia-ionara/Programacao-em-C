/***
71. (Vale 2.5 pontos) Em uma disciplina de programa��o da FACSI/Unifesspa, um discente
deve realizar tr�s provas pr�ticas. Crie um programa, em linguagem C, que receba as tr�s
notas desse discente, calcule e exiba a m�dia (com duas casas decimais) alcan�ada por
ele, imprimindo tamb�m o conceito equivalente, conforme � indicado na Tabela 1. O
programa deve ser executado novamente para receber novas notas, enquanto a m�dia for
um n�mero positivo. Utilize a estrutura de repeti��o while.
Tabela 1: Gradiente de conceitos
� �CONCEITO A SER IMPRESSO
Se a m�dia � maior ou igual � O (zero) e menor ou igual a 5.0
Se a m�dia � maior do 5.0 e menor ou igual a 7.0
Se a m�dia � maior do que 7.0
***/

#include <stdio.h>

int main() {

	float n1, n2, n3, media;

	do {
		printf("\n==CALCULO DA MEDIA==\n");
		printf("Digite a nota 1: ");
		scanf("%f",&n1);

		printf("Digite a nota 2: ");
		scanf("%f",&n2);

		printf("Digite a nota 3: ");
		scanf("%f",&n3);

		media = (n1 + n2 + n3)/3;

		if (media>= 0 && media <= 5) {
			printf("\n== REPROVADO ==\n");
			printf("Lamentamos, a media alcancada foi: %.2f\n", media);
		} else if (media> 5 && media <= 7) {
			printf("\n== RECUPERACAO ==\n");
			printf("A media alcancada foi: %.2f\n", media);
		} else if (media> 7) {
			printf("\n== APROVADO ==\n");
			printf("Parabens! A media alcancada foi: %.2f\n", media);
		} else {
			printf("Media invalida. Programa encerrado.\n");
		}
	} while (media>0);

	return 0;
}
