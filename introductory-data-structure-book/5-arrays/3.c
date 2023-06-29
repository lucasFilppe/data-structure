#include <stdio.h>

//função que retorna menor valor de um vetor
float minimo(int n, float *v){
  float menor = v[0];

  for (int i = 1; i < n; i++)
  {
    //se vetor[i] for menor que menor, entao:
    if (v[i] < menor)
    {
      menor = v[i]; //atribua valor de v[i] para menor
    }
    
  }
  return menor;
}

int main(){

  int n;
  float  menor;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  float vetor[n];

  //lendo valores do vetor
  for (int i = 0; i < n; i++)
  {
    printf("vetor[%d]: ", i);
    scanf("%f", &vetor[i]);
  }

  menor = minimo(n, vetor);//chamando função que retorna menor valor de um vetor
  printf("O menor eh: %.2f\n\n", menor);
  return 0;
}