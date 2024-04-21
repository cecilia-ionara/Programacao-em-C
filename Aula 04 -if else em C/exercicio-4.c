#include<stdio.h>
//Solicite ao usuário que insira a nota de um aluno e converta-a para um conceito (A, B, C, D ou F),
//de acordo com uma escala de notas predefinida.


int main(){
	
float nota;

printf("Digite a nota do Aluno: ");
scanf("%f", &nota);

if ((nota>=0) && (nota<=5)){
	printf("Conceito F");
}
else if ((nota>5) && (nota <= 6)){
	printf("Conceito D");
}
else if ((nota>6) && (nota <= 8)){
	printf("Conceito C");
}
else if ((nota>8) && (nota <= 9)){
	printf("Conceito B");
}
else if ((nota>9) && (nota <= 10)){
	printf("Conceito A");
}
else {
	printf("ERRO. Digite um número e tente novamente");
} 

}
