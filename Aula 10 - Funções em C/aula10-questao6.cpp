/*6. Fun��o para Calcular M�dia de Tr�s Notas   - 
**Enunciado:** Escreva uma fun��o que recebe tr�s n�meros reais (notas de um aluno)
 e retorna a m�dia. O programa deve solicitar tr�s notas e imprimir a m�dia utilizando a fun��o.
   - **Objetivo:** Trabalhar com tipos de dados `float` e opera��es aritm�ticas.*/
   
#include<stdio.h>

int media(int x, int y, int z){
	int resultado;
	resultado =(x+y+z)/3;
    return resultado; 
}

int main(){
    int n1, n2, n3, resultado;
    printf("Informe a nota 1: ");
    scanf("%i", &n1);
    printf("Informe a nota 2: ");
    scanf("%i", &n2);
    printf("Informe a nota 3: ");
    scanf("%i", &n3); 
    
    resultado = media(n1, n2, n3);
    printf("A media final eh: %i\n", resultado);
        
    return 0;
}

