/* Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec¸os e ´
exiba o maior enderec¸o.
*/

#include <stdio.h>

int main(){

  int a; int b;


  if (&a > &b)
  {
    printf("Endereco de &a = %p > endereco de b& = %p\n", &a, &b);
  }
  else
  {
    printf("Endereco de &b = %p > endereco de a& = %p\n", &b, &a);
  }
  
  
}