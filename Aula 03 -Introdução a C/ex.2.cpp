//2. Pe�a ao usu�rio para digitar as 3 notas de um aluno. Calcule a m�dia desses n�meros 
//e exiba a m�dia deles.

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

printf("A m�dia dos alunos %f", media);

}
