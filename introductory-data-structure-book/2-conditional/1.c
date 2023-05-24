/*Escreva um programa em C que receba três números inteiros como entrada e imprima, como saída, o maior número recebido.*/

#include <stdio.h>

int main(){

    int num1, num2, num3;

    printf("Digite tres numeros inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int maior = 0;

    if(num1 > maior){
        maior = num1;
    }

    if(num2 > maior)
    {
        maior = num2;
    }

    if(num3 > maior)
    {
        maior = num3;
    }

    
    printf("O maior numero eh: %d\n", maior);

    return 0;
}