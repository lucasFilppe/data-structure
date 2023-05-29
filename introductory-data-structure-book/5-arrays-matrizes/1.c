# include <stdio.h>
# define N 100 // dimensão do v e t o r∗/

int main (void )

{

    int n; /*número de v a l o r e s*/
    float x[N]; /** v e t o r dos v a l o r e s */

    /*l ê número de v a l o r e s */
    printf("Entre com o numero de valores: ");
    scanf("%d", &n);

    if (n > N) {
        printf("Valor ultrapassa o limite de % d.\n", N);
        return 1; /* f i n a l i za a execução da função main */
    }

    /*c a p tu ra e armazena v a l o r e s*/
    printf("Entre com os valores:\n");
    for (int i=0; i<n; ++i) {
    scanf("%f", &x[i]);
    }

    /*c a l c u l a o v a l o r da média */
    float m = 0.0;

    for (int i=0; i<n; i++) {
        m += x[i];
    }
    m /= n;

/* c a l c u l a o v a l o r da v a r i â n c i a */
    float v = 0.0;
    for (int i=0; i<n; i++) {
    v = v + (x[i]-m) * (x[i]-m);
    printf("%d variacao = %f\n", i, v); 
    }
    v /= n;

/* e x i b e  v a l o r e s*/

printf("Media: %f\n Variancia: %f\n", m, v);

return 0;

}
