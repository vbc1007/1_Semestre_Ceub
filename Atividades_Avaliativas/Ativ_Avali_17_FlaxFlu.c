#include <stdio.h>
int main ()
{

    int classico, vflu, vfla, flugol, flagol, empate, escolha;

    classico = 0;
    vflu = 0;
    vfla = 0;
    escolha = 1;
    empate = 0;

    while (escolha == 1)
    {
        scanf("%d %d", &flugol, &flagol);
        printf("Novo FlxFla (1-sim/2-nao)\n");
        scanf("%d", &escolha);

        if(flugol > flagol)
        {    
            vflu++;
        }

        else if(flagol > flugol)
        {
            vfla++;
        }

        else if (flugol == flagol)
        {
            empate++;
        }  
        
        classico++;
    }

    printf("%i classicos\n", classico);
        printf("Fluminense: %i\n", vflu);
            printf("Flamengo: %i\n", vfla);
                printf("Empates: %i\n", empate);

    
    if (vflu > vfla)
    {
        printf("Fluminense venceu mais\n");
    }

    else if (vfla > vflu)
    {
        printf("Flamengo venceu mais\n");
    }

    return 0;
    
}