#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1, x2, y2, distX, distY, dist;

    printf("Insira o valor do primeiro ponto: \n");
        scanf("%lf %lf", &x1, &y1);
    
    printf("Insira o valor do segundo ponto: \n");
        scanf("%lf %lf", &x2, &y2);

    distX = x2 - x1;
    distY = y2 - y1;

        dist = sqrt (pow (distX, 2) + pow (distY, 2));

    printf("A distancia entre os pontos eh de: %.4lf", dist);
    return 0;
}