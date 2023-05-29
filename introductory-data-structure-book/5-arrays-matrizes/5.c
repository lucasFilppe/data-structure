//Escreva uma função que retorne o valor mínimo armazenado em um vetor.
// Essa função deve obedecer ao protótipo a seguir. 
// Escreva um programa para testar sua função.

#include <stdio.h>

void lerVetor(float * v, int n){
  for (int i = 0; i < n; i++)
  {
      scanf("%f", &v[i]);
  }
  
}

float minimo (int n, float *v){
  float m = v[0];

  for ( int i = 1; i <  n; i++)
  {
      if(v[i] < m){
        m = v[i];
      }
  }
  return m;
}

int main(){
  int n;

  printf("Digite o tamano do vetor: ");
  scanf("%d", &n);

  float vetor[n];

  lerVetor(vetor, n);
  printf("\n");

  float min = minimo(n, vetor);

  printf("Menor valor = %.2f\n", min);
  return 0;
}