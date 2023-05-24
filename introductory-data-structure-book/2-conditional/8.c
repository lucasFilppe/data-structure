/*Escreva um programa para fazer conversões entre diferentes unidades. 
As opções do programa devem ser exibidas em forma de um menu apresentado na tela, em dois níveis.
 No primeiro nível, o usuário escolhe a classe de unidade; no segundo nível, o usuário escolhe a conversão que deseja,
 fornecendo então o valor a ser convertido. Por fim, o programa exibe o valor resultante na tela.
 As opções apresentadas no menu podem ser:*/

#include <stdio.h>

int main(){
  
  int classeUnidade, conversao;
  float libra, quilograma;

  //menu explicativo para dar a entrada
  printf("\n1.Peso\n");
  printf("\t1.libra => quilograma\n");
  printf("\t1.quilograma => libra\n");
  printf("\n");

  printf("2.Comprimentro\n");
  printf("\t1.mihas => quilometros\n");
  printf("\t2. quilometros => milhas\n");
  printf("\t3.jadas=> metros\n");
  printf("\t4.metros => jardas\n");
  printf("\n");

  printf("Digite a classe de unidade que deseseja fazer: ");
  scanf("%d", &classeUnidade);

  //se o usuario digita 1, classe de unidade vai ser peso
  if(classeUnidade == 1){
    printf("\t1.libra => quilograma\n");
    printf("\t2.quilograma => libra\n");
    scanf("%d", &conversao);
    printf("\n");

    if(conversao == 1 ){
      printf("Digite o valor da libra, para conversao: ");
      scanf("%f", &libra);

      quilograma = libra * 0.453592;
      printf("Valor em quilograma = %f\n\n", quilograma);

    }
    else if(conversao == 2){
      printf("Digite o valor do quilograma, para conversao: ");
      scanf("%f", &quilograma);

      libra = quilograma * 2.20462 ;
      printf("Valor em libra = %f\n\n", libra);
    }
    else{
      printf("Opcao invalida\n\n");
    }
  }
  
  return 0;
}