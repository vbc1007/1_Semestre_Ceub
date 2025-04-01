//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
#include <math.h>

int main () 
{

    float A, B, C, delta, R1, R2;

    printf("Insira o valor de a: \n");
        scanf("%f", &A);

    printf("Insira o valor de b: \n");
        scanf("%f", &B);

    printf("Insira o valor de c: \n");
        scanf("%f", &C);

    delta = pow(B, 2)- 4 * A * C;
    
    R1 = - B + sqrt(delta);
    R2 = - B - sqrt(delta);

    R1 = R1/ (2 * A);
    R2 = R2/ (2 * A);

    if  ((A != 0) && (delta >= 0))
    {
        printf("R1 = %.5f\n", R1);
        printf("R2 = %.5f\n", R2);
    }
    else if ((A = 0) && (A < 0))
    {
        printf("Impossivel calcular");
    }

return 0;

}