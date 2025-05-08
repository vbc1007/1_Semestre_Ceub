//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
int main () 
{

    int A, B;

    printf("Insira 2 numeros: \n");
        scanf("%i %i", &A, &B);

    if ((A % B == 0) || (B % A == 0))
    {
        printf("Sao Multiplos\n");
    }

    else
    {
        printf("Nao sao multiplos\n");
    }

return 0;

}