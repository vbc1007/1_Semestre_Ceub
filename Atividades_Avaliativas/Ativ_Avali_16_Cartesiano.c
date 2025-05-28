#include <stdio.h>
int main ()
{

    int x, y;

    while ((x != 0 ) && (y != 0))
    {
        scanf("%i %i", &x, &y);

        if ((x > 0) && (y > 0))
        {
            printf("Primeiro quadrante\n");
        }

        else if ((x < 0) && (y > 0))
        {
            printf("Segundo quadrante\n");
        }

        else if ((x < 0) && (y < 0))
        {
            printf("Terceiro quadrante\n");
        }

        else if ((x > 0) && (y < 0))
        {
            printf("Quarto quadrante\n");
        }
    }

    printf("\tPrograma terminado");

    return 0;
}