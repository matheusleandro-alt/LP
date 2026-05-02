#include <stdio.h>

int main(){
    float A[10];
    int i;

    for(i=0; i<10; i++){
        printf("Insira o valor da posição %d: ", i+1);
        scanf("%f", &A[i]);
    }

    float X;
    printf("Insira um valor X: ");
    scanf("%f", &X);

    float M[10];
    for(i=0; i<10; i++){
        M[i]=(X*A[i]);
        printf("\n%f", M[i]);
    }
}
