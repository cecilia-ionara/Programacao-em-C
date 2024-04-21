 /***
****/
  
#include <stdio.h>
int num;

int main(){
    printf("Olá, insira o valor:");
    scanf("%i", &num);
    
    if (num%5==0 && num%3==0){
        printf("O valor inserido é divisivel por 3 e 5 ao mesmo tempo");
    }
    else {
        printf("Não é divisivel");
    }
    return 0;
}
