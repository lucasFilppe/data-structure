/*. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac¸a uma func¸ao˜
que retorne a soma do dobro dos dois numeros lidos. A func¸ ´ ao dever ˜ a armazenar o dobro ´
de A na propria vari ´ avel A e o dobro de B na pr ´ opria vari ´ avel B */

#include <stdio.h>

//função que recebe o dobro de duas variaveis por referencia
void dobro(int *a, int *b){
  *a = (*a) * (*a);
  *b = (*b) * (*b);  
}
int main(){

  int a, b;
  scanf("%d %d", &a, &b);

  dobro(&a, &b);

  printf("A = %d\n B = %d\n", a, b);
  return 0;
}