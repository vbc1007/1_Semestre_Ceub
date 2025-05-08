#include <stdio.h>

    int main ()
{

    float X, Y;

    printf("Insira o valor do ponto X \n");
        scanf("%f", &X);

    printf("Agora insira o valor do ponto Y \n");
        scanf("%f", &Y);

if ((X == 0) && (Y == 0))
{
    printf("Origem");
}

else if ((X > 0) && (Y > 0))
{
    printf("Primeira Quadrante");
}

else if ((X < 0) && (Y > 0))
{
    printf("Segundo Quadrante");
}

else if ((X < 0) && (Y < 0))
{
    printf("Terceiro Quadrante");
}

else if ((X > 0) && (Y < 0))
{
    printf("Quarto Quadrante");
}

return 0;

}