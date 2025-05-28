#include <stdio.h>

int main ()
{

    int x, y;

    printf("Insira o primeiro numero \n");
        scanf("%d", &x);

    printf("Insira o segundo numero \n");
        scanf("%d", &y);

    while (x != y)
    {
        if(x > y)
        {
            printf("Decrescente \n");
        }

        else if ( x < y)
        {
            printf("Crescente\n");
        }

    scanf("%d %d", &x, &y);
    }

return 0;
}