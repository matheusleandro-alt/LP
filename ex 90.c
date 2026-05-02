#include <stdio.h>

int main(){
    float V[30];
    float X;
    int vezes = 0;
    int i;

    for(i=0; i<30; i++){
        printf("\nInsira o número da posição %d: ", i+1);
        scanf("%f", &V[i]);
    }

    printf("\nInsira um valor: ");
    scanf("%f", &X);

    for(i=0; i<30; i++){
        if(V[i]==X){
            vezes = vezes + 1;
        }
    }
    printf("\nX aparece %d vezes", vezes);
}
