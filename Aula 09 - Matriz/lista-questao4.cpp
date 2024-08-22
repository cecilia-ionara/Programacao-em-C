/*4. Praticar operações matemáticas em matrizes.
Crie um programa que leia uma matriz 3x3 de números inteiros e um número 
inteiro fornecido pelo usuário. O programa deve verificar se o número está presente na matriz e 
imprimir a mensagem "Encontrado" ou "Não Encontrado" conforme o caso.*/

#include <stdio.h>
#include<locale.h>
#include<stdlib.h> //p usar clean
int main()
{
    setlocale(LC_ALL,"");
     int i, j, matriz[3][3], n, verificador;
    // i = linha
    //j = coluna
   	for(i=0;i<2;i++){
   		printf("\n%i° linha:\n", i+1);
   		for(j=0;j<3;j++){
  	    	printf("%i° coluna:", j+1);
			scanf("%i", &matriz[i][j]);
		   }
   	}
	system("cls"); //limpar tela para usuario nao espiar os valores
	printf("Verificar se o número digitado está na matriz: ");
	scanf("%i", &n);   
	
	for(i=0;i<3;i++){
   		for(j=0;j<3;j++){
   			if(n==matriz[i][j]){
   				verificador=1;
        	}
		}
	}
	if(verificador==1){
		printf("Encontrado", n);
	} else {
		printf("Não encontrado");
	} 
    return 0;
}
