#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])
{

float A, B, C, MEDIA;

printf("Insira a primeira nota do aluno: \n");
scanf("%f", &A);

printf("Agora insira a segunda nota: \n");
scanf("%f", &B);

printf("E por ultimo insira a terceira nota do aluno: \n");
scanf("%f", &C);

MEDIA = (A * 2 + B * 3 + C * 5)/10;

printf("Entao a media do aluno equivale a: \n");
printf("MEDIA = %.1f\n", MEDIA);
return 0;
}