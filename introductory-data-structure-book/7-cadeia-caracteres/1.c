#include <stdio.h>

int main(){

    char cidade[80];
    scanf(" %80[^ \n]", cidade);

    printf("%s", cidade);
    return 0;
}