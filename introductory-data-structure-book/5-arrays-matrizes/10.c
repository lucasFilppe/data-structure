/*Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac¸ao (linha e a coluna) do ˜
maior valor*/
#include <stdio.h>

//função que retorna posiçao da linha e coluna
//função que retorna maior valor
int maior(int matriz[][100], int l, int c,int *linha,int *coluna)
{
  int maiorValor = 0;
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      if (matriz[i][j] > maiorValor)
      {
        maiorValor = matriz[i][j];
        *linha = i;
        *coluna = j;
      }
    }
  }

  return maiorValor;
}

//função para ler matriz
void leMatriz(int matriz[][100], int l, int c)
{
  for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("matriz[%d][%d] = ", i, j);
      scanf("%d", &matriz[i][j]);
      
    }
  }
  printf("\n");
}

void imprimeMatriz(int matriz[][100], int l, int c){
   for (int i = 0; i < l; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}

int main()
{
  int linha, coluna, l, c;

  printf("Digite a quantidade de linas e coluna da matriz: ");
  scanf("%d %d", &linha, &coluna);

  int matriz[linha][coluna];

  leMatriz(matriz, linha, coluna);
  imprimeMatriz(matriz, linha, coluna);
  printf("Maior %d\n", maior(matriz, linha, coluna, &l, &c));
  printf("Posicao: matriz[%d][%d]\n\n", l, c);

  return 0;
}