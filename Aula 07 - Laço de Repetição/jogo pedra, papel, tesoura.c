#include <stdio.h>
int main(){
    int i, j1, j2, j=0, k=0;

    printf("1 - Tesoura, 2 - Papel, 3 - Pedra");
    for(i=1;i<=3;i++){
        printf("\nJogador 1: ");
        scanf("%i", &j1);
        printf("Jogador 2: ");
        scanf("%i", &j2);

        if(j1==1 && j2==2){
            printf("Jogador 1 venceu a rodada!!\n");
            j++;
        } else if(j1==2 && j2==3){
            printf("Jogador 1 venceu a rodada!!\n");
            j++;
        } else if(j1==3 && j2==1){
            printf("Jogador 1 venceu a rodada!!\n");
            j++;
        } else {
            printf("Jogador 2 venceu a rodada!!\n");
            k++;
        }
    }
    if (j>k){
        printf("\nRESULTADO: Jogador 1 eh o VENCEDOR!!");
    } else if(k>j){
        printf("\nRESULTADO: Jogador 2 eh o VENCEDOR!!");
    }else{
        printf("EMPATE!!");
    }
return 0;
}
