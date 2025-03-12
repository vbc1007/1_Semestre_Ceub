#include <stdio.h>
int main() {

    int A, B, C, D, DIFERENCA;

    printf ("Insira um numero: \n");
    scanf ("%i", &A);

    printf ("Insira outro numero para multiplica-lo: \n");
    scanf ("%i", &B);

    printf ("Insira novamente outro numero: \n");
    scanf ("%i", &C);

    printf ("E por ultimo, insira denovo um numero para multiplicarmos; \n");
    scanf ("%i", &D);

    DIFERENCA = (A * B - C * D);
    printf("O a difenca, eh: \n%i", DIFERENCA);
    return 0;
}