/*Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida*/

#include <stdio.h>

int main(){
int l, c;

    printf("Digite o tamanho da matriza: ");
    scanf("%d %d", &l, &c);

    int matriz[l][c];
    
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            //se i for igual a j, entao faz parte da digonal principal
            if(i == j){
                matriz[i][j] = 1; //atribui 0 ao elemento da matriz
            }
            else// se nao
                matriz[i][j] = 0; //atribui 1 ao elemento da matriz
        }
        
    }

    printf("Mostrando matriz atribuido 1 a diagonal pricipal e 0 aos demais elememntos\n\n");
    for (int i = 0; i < l; i++)
    {
        for (int j  = 0; j < c; j++)
        {
            printf("%d\t", &matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n\n");
    return 0;
}