/*Escreva um programa que calcule o preço da gasolina por litro no Brasil 
se aqui fosse adotado o mesmo preço cobrado nos Estados Unidos. O programa
deve capturar dois valores fornecidos via teclado: o preço do galão de gasolina
praticado nos Estados Unidos (em dólares) e a taxa de conversão do dólar para 
o real. O programa então deve exibir o preço do litro de gasolina 
correspondente em reais. Sabe-se que um galão tem 3.7854 litros.*/

#include <stdio.h>
#include <math.h>
#define PI 2.14

int main(){
    
    float galaoGasolina, taxaConversaoDolarReal;
    
    printf("Digite o valor do preço do galao de gasolina praticado nos EUA(em dolares):\n");
    printf("R$ ");
    scanf("%f", &galaoGasolina);
    printf("Digite o valor de conversão do dolar para real: ");
    scanf("%f", &taxaConversaoDolarReal);
    
    float litroGasolinaReal = galaoGasolina * taxaConversaoDolarReal;
    
    
    printf("Preço do litro de gasolina convertido em reais %.2f\n", litroGasolinaReal);
    
    return 0;
}