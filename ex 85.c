#include <stdio.h>

int main(){
    float T[365];
    int i;
    float maior, menor, soma, media, acima;

    for(i=0; i<365; i++){
        printf("\nInsira a temperatura do dia %d: ", i + 1);
        scanf("%f", T[i]);
    }

    maior = T[0];
    menor = T[0];
    soma = 0;

    for(i=1; i<365; i++){
        if(T[i]<T[i-1]){
            menor = T[i];
        }
        if(T[i]>T[i-1]){
            maior = T[i];
        }
        soma = soma + T[i];
    }

    media = (soma/365);
    acima = 0;

    for(i=0; i<365; i++){
        if(T[i]>media){
           acima = acima + 1;
        }
    }
    printf("\nO número de dias acima da temperatura média é: %f", acima);
}
