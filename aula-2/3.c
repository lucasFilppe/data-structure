#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3;
    int colunas = 4;

    // Aloca a matriz dinamicamente e inicializa com zeros
    int **matriz = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)calloc(colunas, sizeof(int));
    }

    // Preenche a matriz com valores
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i + j; // Exemplo simples de preenchimento
        }
    }

    // Imprime a matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}