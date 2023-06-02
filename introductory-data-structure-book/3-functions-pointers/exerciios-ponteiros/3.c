/*  Escreva um programa que contenha duas variaveis inteiras. Leia essas vari ´ aveis do ´
teclado. Em seguida, compare seus enderec¸os e exiba o conteudo do maior enderec¸o.*/

#include <stdio.h>

int main(){
  int num1, num2, *n1, *n2;

  
  //LENDO NUMEROS
  scanf("%d %d", &num1, &num2);

  n1 = &num1;
  n2 = &num2;

  if(*n1 > *n2)
    printf("%d eh maior\n", num1);
  else
  {
    printf("%d eh maior\n", num2);
  }
  
  return 0;
}