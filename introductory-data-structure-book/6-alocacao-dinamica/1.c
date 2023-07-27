/*Escreva uma função que receba um vetor de números reais e tenha como valor de retorno um novo vetor, alocado dinamicamente, com os elementos do vetor original em ordem reversa. A função deve ter como valor de retorno o ponteiro do vetor alocado, seguindo o protótipo:

float * reverso (int n, float * v);*/

#include <stdio.h>
#include <stdlib.h>

float *reverso(int n, float *v) {
    // Alocar dinamicamente o novo vetor com o tamanho n
    float *novo_vetor = (float *)malloc(n * sizeof(float));

    // Verificar se a alocação de memória foi bem-sucedida
    if (novo_vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        exit(1);
    }

    // Preencher o novo vetor em ordem reversa
    for (int i = 0; i < n; i++) {
        novo_vetor[i] = v[n - 1 - i];
    }

    return novo_vetor;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Alocar dinamicamente o vetor original
    float *vetor_original = (float *)malloc(n * sizeof(float));

    // Verificar se a alocação de memória foi bem-sucedida
    if (vetor_original == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%f", &vetor_original[i]);
    }

    // Chamar a função para obter o vetor em ordem reversa
    float *vetor_reverso = reverso(n, vetor_original);

    printf("Vetor original: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor_original[i]);
    }

    printf("\nVetor reverso: ");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", vetor_reverso[i]);
    }

    // Liberar a memória alocada para os vetores
    free(vetor_original);
    free(vetor_reverso);

    return 0;
}
