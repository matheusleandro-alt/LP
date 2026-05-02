#include <stdio.h>

int main(){
    int N;
    int i;

    printf("Insira o tamnho dos vetores: ");
    scanf("%d", &N);

    float A[N];
    float B[N];
    float S[N];

    for(i=0; i<N; i++){
        printf("\nInsira o valor da posição %d: ", i+1);
        scanf("%f", &A[i]);
    }

    for(i=0; i<N; i++){
        printf("\nInsira o valor da posição %d: ", i+1);
        scanf("%f", &B[i]);
    }

    for(i=0; i<N; i++){
        S[i]=(A[i]+B[i]);
        printf("\n%f", S[i]);
    }
}
