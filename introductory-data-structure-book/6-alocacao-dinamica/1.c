#include <stdio.h>
#include <stdlib.h>

//função para ler vetor
void leVetor(int n, float *v){
    for (int i = 0; i < n; i++)
    {
        printf("V[%d] = ", i);
        scanf("%f", &v[i]);
    }
    printf("\n\n");
}
//função que calcula a media de um vetor
float media(float *v, int n){
    float soma = 0.0;
    float media;

    //soma notas
    for (int i = 0; i < n; i++)
    {
        soma += v[i];
    }
    
    //calcula media
    media = soma / n;
    return media;
}
int main(){

    int n;//numero de valores

    printf("Digite o numero de valores: ");
    scanf("%d", &n);

    float *x = (float*) malloc(n * sizeof (float));

    if(x == NULL){
        printf("Memoria insuficiente\n\n");
        exit(1);
    }

    leVetor(n, x);
    float m = media(x, n);

    free(x);

    printf("Media %f\n", m);

    return 0;
}