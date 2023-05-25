//fatorial
#include <stdio.h>

int fatorial (int n){

    int f = 1;

    while (n > 1) {
        f *= n;
        --n;

    }
    return f;

}

int main (void ){

    int x;
    printf("Entre com um numero: ");
    scanf("%d", &x);

    int fat = fatorial(x);

    printf(" Fatorial de %d = %d\n", x, fat);

    return 0;

}