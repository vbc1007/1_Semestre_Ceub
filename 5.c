#include <stdio.h>
int main () 
{
  
    int A, B, PROD;

    printf("Insira um numero para multiplica-lo: \n");
    scanf("%i", &A);

    printf("Insira outro numero para finalizar a multiplicacao: \n");
    scanf("%i", &B);

    PROD = A * B;
    printf ("o resulta da multiplicacao, eh: \n%i",PROD);
return 0;
}