/*Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas (P1 e P2) iniciais; 
se a média nas duas provas for maior ou igual a 5.0, e se nenhuma das duas notas for inferior a 3.0, o aluno passa direto.
 Caso contrário, o aluno faz uma terceira prova (P3) e a média é calculada considerandose a terceira nota e a maior das notas
 entre P1 e P2. Neste caso, o aluno é aprovado se a média final for maior ou igu */

#include <stdio.h>

int main()
{
    float p1, p2;

    printf("Digite as notas das provas 1 e 2: ");
    scanf("%f %f", &p1, &p2);

    if ((p1 >= 5.0 && p2 >= 5.0) || (p1 >= 3.0 && p2 >= 3.0))
    {
         luno passou direto\n");
    }

    else 
    {
        float p3;
        
        printf("Digite o valor da prova 3: ");
        scanf("%f", &p3);
 
        float maiorNota = 0;
        if(p1 > maiorNota)
        {
            maiorNota = p1;
        }
        if (p2 > maiorNota)
        {
            maiorNota = p2;
        }
        
        float media = (p3 + maiorNota) / 2;
        if(media >= 5){
            printf("Media = %.2f\n", media);
            
        }
        else
            printf("O aluno reprovou\n");
        
}