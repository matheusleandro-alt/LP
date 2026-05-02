#include <stdio.h>

int main(){
    float V[20];
    int i, ima, ime;
    float maior, menor;

    for(i=0; i<20; i++){
        do{
            printf("\nInsira um valor positivo na posição %d: ", i+1);
            scanf("%f", &V[i]);
            if(V[20]<0){
                printf("\nValor inválido. Tente novamente: ");
                scanf("%f", &V[i]);
            }
        }while(V[i]<0);
    }

    maior = V[0];
    menor = V[0];
    ima = 0;
    ime = 0;

    for(i=1; i<20; i++){
        if(V[i]<V[i-1]){
            maior = V[i];
            ima = i;
        }
        if(V[i]>V[i-1]){
            menor = V[0];
            ime = i;
        }
    }

    printf("\nMaior valor: %f", maior);
    printf("    na posição: %d", ima + 1);
    printf("\nMenor valor: %f", menor);
    printf("    na posição: %d", ime + 1);
}