/*Escreva uma função que receba como parâmetro um vetor de números inteiros 
de tamanho n e retorne quantos números pares estão armazenados nesse vetor. 
Essa função deve obedecer ao protótipo a seguir. 
Escreva um programa para testar sua função.

int pares (int n, int * vet); */

#include <stdio.h>

int pares (int n, int * vet){
  int contador = 0; //quantidade de numeros pares

  //loop para p vetor
  for (int i = 0; i < n; i++)
  {
    //se vetor[i] for par, entao:
    if(vet[i] % 2 == 0){
      contador++;
    }
  }
  return contador;
}

int main(){

  int n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d",&n);

  int v[n];

  //lendo vetor
  printf("Digite os elementos do vetor: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
  }

  int quantidadePares = pares(n, v);

  printf("Tem %d numeros pares nesse vetor\n\n", quantidadePares);
  
  return 0;
}
