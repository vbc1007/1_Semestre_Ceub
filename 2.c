#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Insira dois numeros inteiros: \n");
    scanf("%i %i", &a, &b);

    x = a + b;
    printf("A soma dos numeros eh: \n%i", x);
    return 0;
}