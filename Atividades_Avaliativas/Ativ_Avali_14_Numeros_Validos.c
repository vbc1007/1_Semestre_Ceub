#include <stdio.h>

int main() 
{
    int numero, maior, posicao;

    maior = -1;
    posicao = -1;

    for (int i = 1; i <= 100; i++)
     {
        scanf("%d", &numero);
        if (numero > maior) 
        {
            maior = numero;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}

