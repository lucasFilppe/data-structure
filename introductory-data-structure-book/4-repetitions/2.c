#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int numeroGerado, escolha, numero, computador;
    int tentativas = 1;
    int tentativasComp= 1;

    srand(time(NULL));

    printf("\nMenu de regras\n\n");
    printf("****************************************************************\n");
    printf("- numero -1, se numero escolhido for menor que numero gerado\n ");
    printf("- numero 1, se numero escolhido for maior que numero gerado\n ");
    printf("- numero 0, se numero escolhido for menor que numero gerado\n");
    printf("****************************************************************\n");

    numeroGerado = rand( ) % 10 + 1;
    printf("\n*****************************************\nChute o numero gerado pelo computador\n*****************************************\n\n");

    do
    {
        printf("Digite a %d tentativa: ", tentativas);
        scanf("%d", &escolha);

        if( escolha < numeroGerado){
            printf("-1 = numero menor\n\n");
        }
        else if(escolha > numeroGerado)
        {
            printf("1 = numero maior\n\n");
        }
        else if(escolha == numeroGerado){
            printf("\nVoce acertou!\n");
            printf("Numero de tentativas: %d\n\n", tentativas);
        }
        tentativas++;
    } while (escolha != numeroGerado);

    printf("\n*****************************************\nChute do computador\n*****************************************\n\n");
    printf("Usuario digite o numero de um 1 a 10: ");
    scanf("%d", &numero);

    srand(time(NULL));

    do{
        
        computador =  numeroGerado = rand( ) % 10 + 1;
        printf("\n %d escolha do computador: %d\n", computador, tentativasComp);

        if(computador < numero){
            printf("-1 = numero menor\n\n");
        }
        else if (computador > numero)
        {
            printf("1 = numro maior\n\n");
        }
        else if (computador == numero)
        {
            printf("\ncomputador acertou!\n");
            printf("Numero de tentativas: %d\n\n", tentativasComp);

        }
        tentativasComp++;    
    }while (computador != numero);
   
    if(tentativas < tentativasComp){
        printf("O usuario acertou na tentativa %d\nE o computador acertou na tentava %d\n", tentativas, tentativasComp);
        printf("WINNER USUARIO");
    }
    else if(tentativas > tentativasComp){
        printf("O usuario acertou na tentativa %d\nE o computador acertou na tentava %d\n", tentativas, tentativasComp);
        printf("WINNER COMPUTADOR\n");
    }
    else if(tentativas == tentativasComp){
        printf("EMPATE\n");
    }
    return 0;
} 