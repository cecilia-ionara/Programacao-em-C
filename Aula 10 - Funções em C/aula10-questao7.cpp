/*7. **Fun��o para Converter Temperatura de Celsius para Fahrenheit**   - 
**Enunciado:** Crie uma fun��o que recebe uma temperatura em graus Celsius como 
par�metro e retorna a temperatura equivalente em Fahrenheit. Pe�a ao usu�rio uma 
temperatura em Celsius e use a fun��o para mostrar a convers�o.
   - **Objetivo:** Compreender convers�es de unidades e passagem de par�metros.*/
   
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

