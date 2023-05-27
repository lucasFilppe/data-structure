//vetores e ponteiros
//Com isso, como v representa um endereço de memória, se quisermos armazenar o valor de v em outra variável, 
//esta deve ser declarada como ponteiro para inteiro:
#include <stdio.h>

int main(){
    int v[3];

    printf("Valores do vetor: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &v[i]);
    }
    
    int *u = v; /* u aponta para o p r im e i ro e le me nto de v */
    
    u[0] = 4;  /* p r imeiro elemento de v é  a l t e r a d o */
    u = &v[1]; /* u aponta agora para o segundo elemento de v */
    u[0] = v[0] + 5; /*segundo elemento de v é alterado */ 

    printf("valores de v = ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", v[i]);
    }
    
    printf("\n");

    return 0;
}