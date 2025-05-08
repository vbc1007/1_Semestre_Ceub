#include <stdio.h>

    int main ()
    {

    int idade, ano, mes, dia;
    
    printf("Qual a sua idade em dia? \n");
        scanf("%i", &idade);

    ano = idade/365;
    mes = (idade - ano * 365)/30;
    dia = ((idade - ano * 365) - mes * 30);

    printf("%i ano(s)\n", ano);
        printf("%i mes(es)\n", mes);
            printf("%i dia(s)\n", dia);

return 0;

}