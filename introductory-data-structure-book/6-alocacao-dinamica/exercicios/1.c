//1. Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido, fac¸a a alocac¸ ´ ao˜
//dinamica de mem ˆ oria, leia do usu ´ ario seus valores inteiros e imprima o vetor lido. 
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int* lerVetor(int tamanho) {
    int *vetor = malloc(tamanho * sizeof(int));
    
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor inteiro para a posição %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    return vetor;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int* vetor = lerVetor(tamanho);
    
    printf("Vetor lido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    free(vetor);
    
    return 0;
}