#include <stdio.h>
int main () {

    double A, B, C, pi, TRI, CIR, TRA, QUA, RET;
        pi = 3.14159;

    printf("Insira um numero: \n");
     scanf("%lf", &A);

    printf("Insira o segundo numero: \n");
        scanf("%lf", &B);

    printf("Por ultimo insira o terceiro numero: \n");
        scanf("%lf", &C);

    TRI = (A * C)/2;
    CIR = pi * (C * C);
    TRA = (A + B) * C/2;
    QUA = B * B;
    RET = A * B;
    
    printf("TRIANGULO: %.3lf\n", TRI);
    printf("CIRCULO: %.3lf\n", CIR);
    printf("TRAPEZIO: %.3lf\n", TRA);
    printf("QUADRADO: %.3lf\n", QUA);
    printf("RETANGULO: %.3lf\n", RET);
    
    return 0;
    }