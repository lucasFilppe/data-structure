/*7. Crie um programa que contenha uma func¸ao que permita passar por par ˜ ametro dois ˆ
numeros inteiros A e B. A func¸ ´ ao dever ˜ a calcular a soma entre estes dois n ´ umeros e ´
armazenar o resultado na variavel A. Esta func¸ ´ ao n ˜ ao dever ˜ a possuir retorno, mas dever ´ a´
modificar o valor do primeiro parametro. Imprima os valores de A e B na func¸ ˜ ao principal.  */

#include <stdio.h>

void calcularSoma(int *num1, int num2) {
    *num1 = *num1 + num2;
}

int main() {
    int A = 5;
    int B = 3;

    printf("Valores iniciais:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    calcularSoma(&A, B);

    printf("\nValores modificados:\n");
    printf("A: %d\n", A);
    printf("B: %d\n", B);

    return 0;
}



