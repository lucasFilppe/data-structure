/* Escreva um programa, estruturado em diversas funções, para calcular o volume de uma peça
 formada por uma esfera com um furo cilíndrico, conforme ilustrado na Figura 4.6. 
 Sabe-se que o volume de uma calota esférica de altura h é dada por 1/3πh2 (3R − h), onde R representa o raio da esfera.*/

 #include <stdio.h>
#define pi 3.14

float raioEsfera(float d){
    return d / 2.0;
}
//calcula volume de uma calota esferica
float calculavolumeCalotaEsferica(float h, float r){

    return 1.0 / 3.0 * pi * h * (3*r - h);
}

int main(){

    float diametro, altura;
    printf("Digite o valor do diametro para descobrir: ");
    scanf("%f", &diametro);

    //variavel que calcula valor do diametro
    float raio = raioEsfera(diametro);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura); 

    float volumeCalota = calculavolumeCalotaEsferica(altura, raio);

    printf("Volume da calota esferica = %f\n", volumeCalota);
     return 0;
 }