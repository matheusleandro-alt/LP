#include <stdio.h>

int main(){
    float V[20];
    int i;
    float soma = 0;

    for(i=0; i<20; i++){
        printf("\nInsira a nota do aluno %d: ", i+1);
        scanf("%f", &V[i]);
        soma = soma + V[i];
    }

    float media;
    media = (soma/20);
    int acima = 0;

    for(i=0; i<20; i++){
        if(V[i]>media){
            acima = acima + 1;
        }
    }
    printf("\nQuantidade de alunos acima da média: %d", acima);
}
