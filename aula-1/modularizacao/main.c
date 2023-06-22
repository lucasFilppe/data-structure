#include <stdio.h>
#include "converte.h"//inclusao do moodulo de conversao de temperaturas

int main(){

    float t1, t2;

    //entrada  de dados
    printf("Digite o valor da temperatura em Celsius: ");
    scanf("%f", &t1);

    t2 = convert_celsius_farenheit(t1);///faz a conversao

    printf("Farenheit: %f\n", t2);
    return 0;
}

//compilação
