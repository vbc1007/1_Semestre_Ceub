//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
#include <math.h>

int main () {

    double  R, pi, V;
    pi = 3.14159;

    printf("Insira o valor do raio: \n");
        scanf ("%lf", &R);

V = (4.0 / 3.0) * pi * pow (R, 3);

    printf("Entao o volume dessa esfera eh de: \n");
        printf("VOLUME = %.3lf", V);

return 0;

}
