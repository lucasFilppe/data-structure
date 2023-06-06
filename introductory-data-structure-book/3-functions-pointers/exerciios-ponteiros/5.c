#include <stdio.h>

void maior(int *a, int *b){


  if(*b > a*){
    maior = *b;
    return *b;
  }
  else
  {
    return *a;
  }


}

int main(){

  int num1, num2;

  //ler duas variaveis
  scanf("%d %d", &num1, &num2);

 maior(&num1, &num2);



  //
  return 0;
} 