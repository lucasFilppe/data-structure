/*Escreva uma função que receba um vetor de inteiros e tenha como valor de retorno um novo vetor, alocado dinamicamente, apenas com os elementos pares do vetor original. A função deve ter como valor de retorno o ponteiro do vetor alocado e preencher o endereço de memória passado com a dimensão do novo vetor, seguindo o protótipo:

int * somente_pares (int n, int * v, int * npares);*/
#include <stdio.h>
#include <stdlib.h>

int *somente_pares(int n, int *v, int *npares) {
    // Contar o número de elementos pares
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            count++;
        }
    }

    // Alocar memória para o novo vetor
    int *novo_vetor = (int *)malloc(count * sizeof(int));

    // Preencher o novo vetor com os elementos pares
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            novo_vetor[index] = v[i];
            index++;
        }
    }

    // Atualizar o valor de npares
    *npares = count;

    return novo_vetor;
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    int npares;
    int *novo_vetor = somente_pares(n, vetor, &npares);

    printf("Novo vetor (apenas pares): ");
    for (int i = 0; i < npares; i++) {
        printf("%d ", novo_vetor[i]);
    }
    printf("\n");

    // Liberar a memória alocada
    free(vetor);
    free(novo_vetor);

    return 0;
}
