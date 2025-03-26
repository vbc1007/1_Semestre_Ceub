//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
int main () 
{

    int X;    
    double Y, Z;
    
    printf("Qual foi a distancia total percorrida (em km)?: \n");
        scanf("%i", &X);

    printf("Qual foi o total de combustivel gasto?: \n");
        scanf("%lf", &Y);

Z = (X / Y);

    printf("Entao o consumo medio do carro foi de: \n");
        printf("%.3lf", Z);
            printf(" km/l");    
        
return 0;
}
