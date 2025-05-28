#include <stdio.h>

int main ()
{

    int opcao, alcool, gasolina, diesel;

    printf("\t \" Escolha uma opcao \" \n [1] Alcool \n [2] Gasolina \n [3] Diesel \n [4] Fim \n");
    
    opcao = 0;
    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while (opcao != 4)
    {
        scanf("%d", &opcao);

    if (opcao == 1)
    {
        alcool++;
    }
    
    else if (opcao == 2)
    {
        gasolina++;
    }

    else if (opcao == 3)
    {
        diesel++;
    }
}

    printf(" \t MUITO OBRIGADO \nAlcool: %d\nGasolina: %d\nDiesel: %d", alcool, gasolina, diesel);

return 0;
    
}