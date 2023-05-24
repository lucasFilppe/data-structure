/*Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura. 
Neste jogo, o usuário e o computador escolhem entre pedra, papel ou tesoura. 
Sabendo que pedra ganha de tesoura, papel ganha de pedra e tesoura ganha de papel,
 exiba na tela o ganhador: usuário ou computador. Para esta implementação, 
 assuma que o número 0 representa pedra, 1 representa papel e 2 representa tesoura. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int escolha;
    int computador;

    srand(time(NULL));    // Semente para a função rand()

    printf("Possiveis escolhas :\n");
    printf(" 0 = pedra\n");
    printf(" 1 = papel\n");
    printf(" 2 = tesoura\n\n");

    printf("Digite sua escolha usuario: ");
    scanf("%d", &escolha);

    
    if (escolha == 0)
    {
        computador = rand() % 2; //gera numero aleatorio entre 0 e 1
        computador++;//incrementa escolha
        printf("Escolha do computador: %d\n\n", computador);

        if(computador == 1){
            printf("WINNER COMPUTADOR\n");
        }
        else
        {
            printf("WINNER USUARIO\n");
        }
        
    }
    else if(escolha == 1)
    {
        // Gera um número aleatório entre 0 e 1
        computador = rand() % 2;
    
        // Multiplica o número gerado por 2
        computador *= 2;
        printf("Escolha do computador: %d\n\n", computador);

        if (computador == 0)
        {
            printf("WINNER USUARIO\n");
        }
        else
        {
            printf("WINNER COMPUTADOR\n");
        }
        
        
    }
    else if (escolha ==  2)
    {
        // Gera um número aleatório entre 0 e 1
        computador = rand() % 2;
        printf("Escolha do computador: %d\n\n", computador);
        
        if (computador == 0){
            printf("WINNER COMPUTADOR\n");
    
        }
        else
        {
            printf("WINNER USUARIO\n");
        }
        
    }
    else
    {
        printf("Opcção invalida\n");
    }
    
    
    
    
    return 0;
}