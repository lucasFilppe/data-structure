/*1. Leia uma matriz 4 x 4, c
onte e escreva quantos valores maiores que 10 ela possui.*/
#include <stdio.h>

int main(){
    int l, c;

    printf("Digite o tamanho da matriza: ");
    scanf("%d %d", &l, &c);

    int matriz[l][c];
    int contador = 0
    //lendo valores da matriz
    ptintf("Digite os valores da matriz\n");
    for ( i = 0; i < l; i++)
    {
        for (int i = 0; i < c; i++)
        {
            printf("matriz[%d][[%d]: \n", i, j);
            scanf("%d", &matriz[i][j]);
            
            //se valor da matriz for maior que 10, entao:
            if (matriz[i][j] > 10)
            {
                contador++; //some 1 a contador
            }
            
        }
        
    }
    printf("\n");

    printf("Matriz desenhada:\n\n");
    for (int i = 0; i < l; i++)
    {
        for (int i = 0; i < c; i++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("quantidade de numeros maiores que 10 na matriz %d\n", contador);
    return 0;
}