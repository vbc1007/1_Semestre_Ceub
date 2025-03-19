#include <stdio.h>
int main() {

    double area, raio, pi; //double usar para numero com virgula, mais preciso

    pi = 3.14159;

    printf("Insira o raio do circulo, para descobrirmos a area dele: \n");
    scanf("%lf",&raio); //%lf usar com numero com virgula
    area= raio*raio*pi;

    printf("A area do circulo eh: A = %.4lf\n", area);
    return 0;
}
