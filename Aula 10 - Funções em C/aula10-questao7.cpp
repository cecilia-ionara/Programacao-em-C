/*7. **Função para Converter Temperatura de Celsius para Fahrenheit**   - 
**Enunciado:** Crie uma função que recebe uma temperatura em graus Celsius como 
parâmetro e retorna a temperatura equivalente em Fahrenheit. Peça ao usuário uma 
temperatura em Celsius e use a função para mostrar a conversão.
   - **Objetivo:** Compreender conversões de unidades e passagem de parâmetros.*/
   
#include<stdio.h>

float conversao(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit; 
}

int main(){
    float tc, tf;
    
    printf("Informe a temperatura em Celsius: ");
    scanf("%f", &tc);
    
    tf = conversao(tc);
    printf("A temperatura em Fahrenheit eh: %.2f\n", tf);
        
    return 0;
}

