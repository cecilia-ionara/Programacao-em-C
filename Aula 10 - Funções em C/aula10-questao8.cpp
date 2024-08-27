/*8. **Fun��o para Encontrar o Maior de Dois N�meros**   
- **Enunciado:** Escreva uma fun��o que recebe dois n�meros inteiros e 
retorna o maior deles. Solicite dois n�meros ao usu�rio e utilize a fun��o 
para determinar qual � o maior.
   - **Objetivo:** Trabalhar com compara��es e opera��es condicionais.*/

#include<stdio.h>

int maior(int x, int y){
	if(x>y){
		return(0);
	} else if(y>x){
		return(1);
	} else{
		return(2);
	}
}
int main(){
	int n1, n2, resultado;
    
    printf("Informe o numero 1: ");
    scanf("%i", &n1);
    
    printf("Informe o numero 2: ");
    scanf("%i", &n2);     
    
	resultado = maior(n1,n2);
	
	if (resultado==0){
		printf("%i eh maior que %i",n1,n2);
	} else if(resultado==1){
		printf("%i eh maior que %i",n2,n1);
	} else{
		printf("Os valores sao iguais");
	}  
    return 0;
}

