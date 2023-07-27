/*Implemente uma função que receba como parâmetro um vetor de números inteiros de 
tamanho n e inverta a ordem dos elementos armazenados nesse vetor. 
Essa função deve obedecer ao protótipo a seguir. 
Escreva um programa para testar sua função.

void inverte (int n, int * vet)*/
#include <stdio.h>
void inverte (int n, int * vet){
  int invert[100];
  for (int i = 0; i < n; i++)
  {
    invert[i] = vet[n - 1];
  }
  
  printf("Vetor ivertido: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", invert[i]);
  }
  printf("\n\n");
}

int main(){

  int n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int v[n];

  printf("Digite os elemntos do vetor: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
  }
  
  inverte(n, v);
  return 0;
}