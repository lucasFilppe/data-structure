//alocação dinamica de tipo estruturad
#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
  int x;
  int y;
}Ponto;


int main(){
  int x = 10;
  int y = 15;

  Ponto *pt = (Ponto*) malloc(sizeof(Ponto));//alocação dinamica
  if(pt == NULL){
    printf("Memoria insuficiente\n");
    exit(1);
  }

  //inicializaçao dos elementos da estrututa
  pt -> x = x;
  pt -> y = y;

  free(pt);
  return 0;
}