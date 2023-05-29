//Escreva uma função que receba como parâmetro um vetor de números inteiros de tamanho n e retorne quantos números pares estão armazenados nesse vetor.
// Essa função deve obedecer ao protótipo a seguir. 
//Escreva um programa para testar sua função. int pares (int n, int * vet);

#include <stdio.h>


//função que ler elementos de um vetor
void lerVetor(int n, int * vet){
  printf("Digite os valores do vetor: ");
  for(int i = 0; i < n; i++){
    scanf("%d", &vet[i]);
  }
  printf("\n\n");
}

//retorna numeros quantidade de numeros pares de um vetor
int pares (int n, int * vet){
  int qtdPares = 0;
 
  for (int i = 0; i < n; i++)
  {
    //se resto da divisão com o num por 2 for 0
    if(vet[i] % 2 == 0) {
      qtdPares++;
    }
  }
  return qtdPares;
}


int main(){

  int n;

  printf("Digite o tamanho do vetor: ");
  scanf("%d", &n);

  int v[n];
  lerVetor(n, v);

  int quantidadePares = pares(n, v);
  printf("Quantidade de pares no vetor: %d\n", quantidadePares);

  return 0;
}