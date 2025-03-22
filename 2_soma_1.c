#include <stdio.h>

int main()
{
    int a, b, x;

    printf("Insira dois numeros inteiros, para soma-los: \n");
    scanf("%i %i", &a, &b); //%i ou %d usar com numeros inteiro

    x = a + b;
    printf("A soma dos numeros eh: \n%i", x);
    return 0;
}