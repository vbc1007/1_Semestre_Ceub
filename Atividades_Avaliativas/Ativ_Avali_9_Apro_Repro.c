//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
int main () 
{

float N1, N2, N3, N4, media, exame, final;

    printf("Escreva a primeira nota: \n");
        scanf("%f", &N1);

    printf("Escreva a segunda nota: \n");
        scanf("%f", &N2);

    printf("Escreva a terceira nota: \n");
        scanf("%f", &N3);

    printf("Escreva a quarta nota: \n");
        scanf("%f", &N4);
    
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    
    if (media >= 7)
    {
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado.");
    }
    
    else if (media < 5)
    {
        printf("Media: %.1f\n",media);
        printf("Aluno reprovado.");
    }

    else if ((media <= 6.9) && (media >= 5))
    {
        printf("Media: %.1f\n",media);
        printf("Aluno em exame. \n");
            
        printf("Qual foi a nota do exame?\n");
            scanf("%f", &exame);

        final = (media + exame) / 2;

        printf("Nota do exame: %.1f\n", exame);

        if (final >= 5)
        {
            printf("Aluno aprovado.");
            printf("Final da media: %.1f\n", final);
        }

        else if (final <= 4.9)
        {
            printf("Aluno reprovado.");
            printf("Final da media: %.1f\n", final);
        }
    }

return 0;

}