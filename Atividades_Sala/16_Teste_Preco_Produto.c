#include <stdio.h>

    int main ()
{

    int X, Y;
    float preco, total;

    printf("Digite o codigo do produto: \n");
        scanf("%i", &X);

    printf("Qual o preco do produto? \n");
        scanf("%f", &preco);
    
    printf("Qual a quantidade do produto que vc ira pegar? \n");
        scanf("%i", &Y);
    
   if ((X == 1))
    {
    total = Y * preco;
        printf("Produto: Cachorro Quente \n");
            printf("Total: R$ %.2f", total);
    }

else if ((X == 2))
{
    total = Y * preco;
        printf("Produto: X-Salada \n");
            printf("Total: R$ %.2f", total);
}

else if ((X == 3))
{
    total = Y * preco;
        printf("Produto: X-Bacon \n");    
            printf("Total: R$ %.2f", total);
}

else if ((X == 4))
{
    total = Y * preco;
        printf("Produto: Torrada simples \n");
            printf("Total: R$ %.2f", total);
}

else if ((X == 5))
{
    total = Y * preco;
        printf("Produto: Refrigerante \n");
            printf("Total: R$ %.2f", preco);
}

return 0;
}