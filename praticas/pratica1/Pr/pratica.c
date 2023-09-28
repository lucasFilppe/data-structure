#include <stdio.h>

int main(){

    double s = 0.0, M[12][12];
    char T;
    int i, j;

    //le caractere
    scanf("%c", &T);

    //Leitura da Matriz e Cálculos
    for(i = 0; i < 12; i++)
        for(j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);

    for(i = 0; i < 5; i++){
        for(j = i+1; j < 11 - i; j++){
            s+=M[i][j];
        }
    }
    if(T=='M')
        s = s / 30;

    printf("%.1lf", s);
    return 0;
}
