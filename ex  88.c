#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float V[20];
    int i, j;

    for(i=0; i<20; i++){
        printf("\nInsira o número da posição %d: ", i+1);
        scanf("%f", &V[i]);
    }

    for(i=0; i<20; i++){
        for(j=i+1; j<20; j++){
            if(V[i]==V[j]){
                V[j]= rand() % 100;
            }
        }
    }

    for(i=0; i<20; i++){
        printf("\n%f", V[i]);
    }
}
