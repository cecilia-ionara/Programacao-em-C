//2. Peça ao usuário para digitar as 3 notas de um aluno. Calcule a média desses números 
//e exiba a média deles.

#include <stdio.h>

int main(){

int n1, n2, n3;
float media;

printf("Insira o n1: ");
scanf("%i",&n1);

printf("Insira o n2: ");
scanf("%i",&n2);

printf("Insira o n3: ");
scanf("%i",&n3);
	
	media = (n1+n2+n3)/3;

printf("A média dos alunos %f", media);

}
