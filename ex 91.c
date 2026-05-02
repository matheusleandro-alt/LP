#include <stdio.h>

int main(){
    float V[50];
    int i, j;

    for(i=0; i<50; i++){
        printf("\nInsira o número da posição %d: ", i+1);
        scanf("%f", &V[i]);
    }

    for(i=0; i<50; i++){
        for(j=i+1; j<50; j++){
            if(V[i]==V[j]){
                printf("\nExistem vetores repetidos nas posições %d e %d", i+1, j+1);
            }
        }
    }
}
