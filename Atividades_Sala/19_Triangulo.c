#include <stdio.h>
#include <math.h>

    int main ()
{
    
    float A, B, C, soma1, soma2;

    printf("Insira o valor do ponto A: \n");
        scanf("%f", &A);

    printf("Insira o valor do ponto B: \n");
        scanf("%f", &B);

    printf("Insira o valor do ponto C: \n");
        scanf("%f", &C);
    
    soma1 = B + C;
    soma2 = pow(B, 2) + pow(C, 2);  
        
if ((A) >= (soma1))
{
    printf("NAO FORMA TRIANGULO\n");
}

else if ((pow(A, 2)) == (soma2))
{
    printf("TRIANGULO RETANGULO\n");
}

else if ((pow(A, 2)) > (soma2))
{
    printf("TRIANGULO OBTUSANGULO\n");
}

else if ((pow(A, 2)) < (soma2))
{
    printf("TRAINGULO ACUTANGULO\n");
}

if ((A) == (B) && (B) == (C))
{
    printf("TRIANGULO EQUILATERO\n");
}

else if ((A) == (B) || (A) == (C) || (B) == (C))
{
    printf("TRIANGULO ISOSCELES\n");
}

return 0;
}