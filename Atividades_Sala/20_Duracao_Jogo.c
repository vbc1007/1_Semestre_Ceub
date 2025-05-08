#include <stdio.h>

    int main ()
{

int inicio, fim, durou;

    printf("Qual foi a hora que iniciou o jogo? \n");
        scanf("%i", &inicio);

    printf("Que horas o jogo acabou? \n");
        scanf("%i", &fim);

    if (fim < 12)
    {
        durou = (fim + 24) - inicio; 
    }
    else
    {
        durou = fim - inicio;
    }

    printf("O JOGO DUROU %i HORA(S)", durou);

return 0;
}