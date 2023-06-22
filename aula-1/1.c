//passagem de vetores para função
#include <stdio.h>

void incrementaVetor(int n , int *v){
  for (int i = 0; i < n; i++)
  {
    v[i]++;
  }
  
}

void imprimeVetor(int n, int *v){
  for (int i = 0; i < n; i++)
  {
    printf("v[%d] = %d\n", i, v[i]);
  }
  printf("\n\n");
}

int main(){
  int vetor[] = { 1, 3 , 5};

  imprimeVetor(3, vetor);
  incrementaVetor(3, vetor);
  imprimeVetor(3, vetor);

  return 0;
}