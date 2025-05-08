//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
int main () 
{

float A, B, C, area, perimetro;

    printf("Escreva os 3 pontos \n");
        scanf("%f %f %f", &A, &B, &C);

    perimetro = A + B + C;
    area = (A + B) * (C / 2);

    if ((A + B > C) && (A + C > B) && (B + C > A))
    {
        printf("Perimetro = %.1f", perimetro);
    }

    else 
    {
        printf("Area = %.1f", area);
    }

return 0;

}