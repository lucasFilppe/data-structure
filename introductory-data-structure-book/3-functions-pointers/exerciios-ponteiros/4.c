/* Fac¸a um programa que leia 2 valores inteiros e chame uma func¸ao que receba estas ˜
2 variaveis e troque o seu conte ´ udo, ou seja, esta func¸ ´ ao˜ e chamada passando duas ´
variaveis A e B por exemplo e, ap ´ os a execuc¸ ´ ao da func¸ ˜ ao, A conter ˜ a o valor de B e B ´
tera o valor de A.*/ 

#include <stdio.h>

void troca(int *a, int *b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;
    
    printf("Digite os dois valores: ");
    scanf("%d %d", &num1, &num2);
    
    troca(&num1, &num2);
    
    printf("Valor de a = %d\n", num1);
    printf("Valor de b = %d\n", num2);
    
    

    return 0;
}
