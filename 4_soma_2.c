#include <stdio.h>
int main () {
    
    int A, B, SOMA;

    printf ("Insira um numero para soma: \n");
    scanf ("%i", &A);
    
    printf ("Insira novamente um numero para realizarmos a soma: \n");
    scanf ("%i", &B);

    SOMA = A + B;
    printf ("O resultada da soma eh: \n%i", SOMA);
    return 0;
}