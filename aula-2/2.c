//alocação dinamica de um vetor
#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float *v;
    scanf("%d", &n);

    v = (float*) malloc(n * sizeof(float));//alocação dinamica

    if (v == NULL)
    {
        printf("Memmoria insuficiente\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("v[%d]: ", i);
        scanf("%f", &v[i]);
    }

    free(v);
    
    return 0;
}