
/*Escreva um programa que capture do teclado o número de segundos 
transcorridos num evento e imprima o tempo no formato hora-minuto-segundo: 
h:m:s, onde hora e minuto são exibidos com dois dígitos, preenchidos 
com zero à esquerda (" %02 d"), e segundo exibido com duas casas decimais, 
também preenchido com zero à esquerda ( %05.2 f)*/

#include <stdio.h>
#include <math.h>
#define PI 2.14

int main(){
    
    int numSegundos;
    
    printf("Digite o numero de segundos trascorridos em um evento: ");
    scanf("%d", &numSegundos);
    
    int minutos = numSegundos / 60;
    
    printf("%d minutos\n", minutos);
    
    return 0;
}
