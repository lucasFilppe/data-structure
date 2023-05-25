#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int numeroGerado, escolha;
    int tentativas = 1;

    srand(time(NULL));

    numeroGerado = rand( ) % 10 + 1;
    printf("\n*****************************************\nChute o numero gerado pelo computador\n*****************************************\n\n");

    do
    {
        printf("Digite a °%d tentativa: ", tentativas);
        scanf("%d", &escolha);

        printf("\nMenu de regras\n\n");
        printf("****************************************************************\n");
        printf("- numero -1, se numero escolhido for menor que numero gerado\n ");
        printf("- numero 1, se numero escolhido for maior que numero gerado\n ");
        printf("- numero 0, se numero escolhido for menor que numero gerado\n\n");
        printf("****************************************************************\n");

        if( escolha < numeroGerado){
            printf("-1\n\n");
        }
        else if(escolha > numeroGerado)
        {
            printf("1\n\n");
        }
        else if(escolha == numeroGerado){
            printf("Voce acertou!\n");
            printf("Numero de tentativas: %d\n\n", tentativas);
        }
        tentativas++;
    } while (escolha != numeroGerado);
    return 0;
} 