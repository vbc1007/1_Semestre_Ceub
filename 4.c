#include <stdio.h>
int main () {
    
    int A, B, SOMA;

    printf ("Insira um numero: \n");
    scanf ("%i", &A);
    
    printf ("Insira outro numero: \n");
    scanf ("%i", &B);

    SOMA = A + B;
    printf ("O resultada da soma eh: \n%i", SOMA);
    return 0;
}