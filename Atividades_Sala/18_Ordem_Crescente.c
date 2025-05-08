#include <stdio.h>

    int main ()
{
    int X, Y, Z;

    printf("Insira o valor de X: \n");
        scanf("%i", &X);

    printf("Insira o valor de Y: \n");
        scanf("%i", &Y);

    printf("Insira o valor de Z: \n");
        scanf("%i", &Z);

if ((X > Y) && (Y > Z))
    {
    printf("Decrescente: \n");
        printf("%i %i %i\n", X, Y, Z);
            printf("Crescente: \n");
                printf("%i %i %i\n", Z, Y, X);
    }

else if ((X > Y) && (Y < Z))
{
    printf("Decrescente: \n");
        printf("%i %i %i\n", X, Z, Y);
            printf("Crescente: \n");
                printf("%i %i %i\n", Y, Z, X);
}

else if ((Y > X) && (Z > X))
{
    printf("Decrescente: \n");
        printf("%i %i %i\n", Y, X, Z);
            printf("Crescente: \n");
                printf("%i %i %i\n", Z, X, Y);
}

else if ((Y > X) && (X > Z))
{
    printf("Decrescente: \n");
        printf("%i %i %i\n", Y, X, Z);
            printf("Crescente: \n");
                printf("%i %i %i\n", Z, X, Y);
}

else if ((Z > X) && (X > Y))
{
    printf("Decrescente: \n");
        printf("%i %i %i\n", Z, X, Y);
            printf("Crescente: \n");
                printf("%i %i %i\n", Y, X, Z);
}

else if ((Z > X) && (Y > X))
{
    printf("Decrescente: \n");
        printf("%i %i %i\n", Z, Y, Z);
            printf("Crescente: \n");
                printf("%i %i %i\n", X, Y, Z);
    }

    printf("Ordem que foi dita: \n");
        printf("%i %i %i\n", X, Y, Z);

return 0;
}
