#include <stdio.h>
int main () {
  
    int A, B, PROD;

    printf("Insira um numero: \n");
    scanf("%i", &A);

    printf("Insira outro numero: \n");
    scanf("%i", &B);

    PROD = A * B;
    printf ("o resulta da multiplicacao, eh: \n%i",PROD);
return 0;
}