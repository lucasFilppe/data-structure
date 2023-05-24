/*Escreva um programa que, dado o valor do raio via teclado, calcule e 
imprima o volume da esfera correspondente. Sabe-se que o volume da esfera 
é dado por 4/3πr3, onde r representa o raio da esfera. Note que a linguagem 
C não disponibiliza um operador de exponenciação (potenciação). Para calcular o
valor de r3 podemos multiplicar o valor do raio por si mesmo duas 
vezes ou fazer uso da função pow da biblioteca padrão matemática 
(# include < math .h>)*/

#include <stdio.h>
#include <math.h>
#define PI 2.14

int main(){
    
    float raio;
    
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    float volumeEsfera = (4.0 / 3.0) * PI * pow(raio, 3);
    
    printf("Valor do volume da esfera %f\n", volumeEsfera);
    
    return 0;
}