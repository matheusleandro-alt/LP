#include <stdio.h>

int main(){
    float V[15];
    float W[15];
    int i;
    int iguais = 0;
    
    for(i=0; i<15; i++){
        printf("\nInsira o número da posição %d: ", i+1);
        scanf("%f", &V[i]);
    }

    for(i=0; i<15; i++){
        printf("\nInsira o número da posição %d: ", i+1);
        scanf("%f", &W[i]);
        if(V[i]==W[i]){
            iguais = iguais + 1;
        }
    }

    printf("\nA igualdade ocorre %d vezes", iguais);
}
