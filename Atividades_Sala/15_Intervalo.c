#include <stdio.h>

    int main ()
{
    
    float valor;

    printf("Insira um numero\n");
        scanf("%f", &valor);

    if ((0 <= valor) && (valor <= 25))
{
    printf("Intervalo [0,25]");
}
    
    else if((25 < valor) && (valor <= 50))
{
    printf("Intervalo [25,50]");
}

    else if ((50 < valor) && (valor <= 75))
{
    printf("Intervalo [50,75]");
}

    else if ((75 < valor) && (valor <= 100))
{
    printf("Intervalo [75,100]");
}

    else
{
    printf("Fora de Intervalo");
}

return 0;

}