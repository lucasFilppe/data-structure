/*Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
modificac¸ao.  */
#include <stdio.h>

int main(){

  int inteiro = 1;
  float real = 2.4;
  char letra = 'l';

  int *i; i = &inteiro;
  float *r; r = &real;
  char *l; l = &letra;

  printf("&inteiro = %p, inteiro = %d\n", &inteiro, inteiro);
  printf("&real = %p, real = %f\n", &real, real);
  printf("&letra = %p, real = %c\n", &letra, letra);
  printf("&i = %p, i = %p, *i = %d\n", &i, i, *i);
  printf("&r = %p, r = %p, *r = %f\n", &r, r, *r);
  printf("&l = %p, l = %p, *l = %c\n", &l, l, *l);

  printf("\n\n");

  //modificando valores das variaveis
  printf("Modificando valores das variaveis com ponteiros:\n");
  printf("----------------------------------------------------\n");
  *i = 10;
  *r = 1.8;
  *l = 'F';

  printf("&inteiro = %p, inteiro = %d\n", &inteiro, inteiro);
  printf("&real = %p, real = %f\n", &real, real);
  printf("&letra = %p, real = %c\n", &letra, letra);
  
  return 0;
}