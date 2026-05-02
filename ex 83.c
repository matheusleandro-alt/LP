#include <stdio.h>

int main(){
    float V[20];
    int i;

    for(i=0; i<20; i++){
        printf("\nInsira o valor da posição %d: ", i+1);
        scanf("%f", &V[i]);
    }

    for(i=19; i>=0; i--){
        printf("\n%f", V[i]);
    }
}
