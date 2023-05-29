//escreva uma função para calcular e retornar a média harmônica de um conjunto de valores.
 //Essa função deve obedecer ao protótipo a seguir. 
 //Escreva um programa para testar sua função.

#include <stdio.h>

void lerVetor(int n, float *v){
  printf("Digite os valores do conjunto: ");
  for ( int i = 0; i < n; i++){
    scanf("%f", &v[i]);
  }
  printf("\n\n");
}

float harmonica (int n, float *v){

  float soma = 0.0;
  /* para obter a média harmônica, calculamos a quantidade de elementos do conjunto dividida pela soma dos inversos desses elementos. */
 
  for ( int i = 0; i < n; i++)
  {
    
    soma = soma + 1.0 / v[i]; 
  }

  float m = 3 / soma; 
  return m;
  
}

int main(){

  int n;

  printf("Digite o tamnho do vetor: ");
  scanf("%d", &n);

  float v[n];
  
  lerVetor(n, v);

  float mediaHarmonica = harmonica(n, v);

  printf("Valor da media harmonica %.2f\n\n", mediaHarmonica);

  return 0;
}