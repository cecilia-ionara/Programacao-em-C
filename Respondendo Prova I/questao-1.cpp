/***
71. (Vale 2.5 pontos) Em uma disciplina de programação da FACSI/Unifesspa, um discente
deve realizar três provas práticas. Crie um programa, em linguagem C, que receba as três
notas desse discente, calcule e exiba a média (com duas casas decimais) alcançada por
ele, imprimindo também o conceito equivalente, conforme é indicado na Tabela 1. O
programa deve ser executado novamente para receber novas notas, enquanto a média for
um número positivo. Utilize a estrutura de repetição while.
Tabela 1: Gradiente de conceitos
” “CONCEITO A SER IMPRESSO
Se a média é maior ou igual à O (zero) e menor ou igual a 5.0
Se a média é maior do 5.0 e menor ou igual a 7.0
Se a média é maior do que 7.0
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
