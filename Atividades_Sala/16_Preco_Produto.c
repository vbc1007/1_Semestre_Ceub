#include <stdio.h>

    int main ()
{

    int X, Y;
    float preco;

    printf("Digite o codigo do produto: \n");
        scanf("%i", &X);

    printf("Qual a quantidade do produto que vc ira pegar? \n");
        scanf("%i", &Y);

if ((X == 1))
    {
    preco = Y * 4.00;
        printf("Total: R$ %.2f", preco);
    }

else if ((X == 2))
{
    preco = Y * 4.50;
        printf("Total: R$ %.2f", preco);
}

else if ((X == 3))
{
    preco = Y * 5.00;
        printf("Total: R$ %.2f", preco);
}

else if ((X == 4))
{
    preco = Y * 2.00;
        printf("Total: R$ %.2f", preco);
}

else if ((X == 5))
{
    preco = Y * 1.50;
        printf("Total: R$ %.2f", preco);
}

return 0;
}