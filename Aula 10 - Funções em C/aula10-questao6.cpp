/*6. Função para Calcular Média de Três Notas   - 
**Enunciado:** Escreva uma função que recebe três números reais (notas de um aluno)
 e retorna a média. O programa deve solicitar três notas e imprimir a média utilizando a função.
   - **Objetivo:** Trabalhar com tipos de dados `float` e operações aritméticas.*/
   
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

