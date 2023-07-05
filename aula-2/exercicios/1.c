#include <stdio.h>
#include <stdlib.h>

float* reverso(int n, float* v) {
    float* reversed = (float*) malloc(n * sizeof(float));
    if (reversed == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return NULL;
    }

    int i, j;
    for (i = n - 1, j = 0; i >= 0; i--, j++) {
        reversed[j] = v[i];
    }

    return reversed;
}

int main() {
    int n, i;
    float* v;
    float* reversed;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    v = (float*) malloc(n * sizeof(float));
    if (v == NULL) {
        printf("Erro: Falha na alocação de memória.\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }

    reversed = reverso(n, v);

    printf("Vetor original: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", v[i]);
    }

    printf("\nVetor reverso: ");
    for (i = 0; i < n; i++) {
        printf("%.2f ", reversed[i]);
    }
    printf("\n");

    free(v);
    free(reversed);

    return 0;
}
