#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[])
{

float A, B, C, MEDIA, PESO_A, PESO_B, PESO_C, SOMA;

printf("Vamos calcular a media dos 3 bimestres do aluno, entãoinsira a primeira nota do aluno: \n");
scanf("%f", &A);

printf ("Qual e o peso da primeira nota?: \n");
    scanf ("%f", &PESO_A);

printf("Agora insira a segunda nota: \n");
scanf("%f", &B);

printf ("Qual e o peso da segunda nota?: \n");
scanf ("%f", &PESO_B);

printf("E por ultimo insira a terceira nota do aluno: \n");
scanf("%f", &C);

printf ("Qual e o peso da segunda nota?: \n");
scanf ("%f", &PESO_C);

SOMA = PESO_A + PESO_B + PESO_C;

MEDIA = (A * PESO_A + B * PESO_B + C * PESO_C)/SOMA;

printf("Entao a media do aluno equivale a: \n");
printf("MEDIA = %.1f\n", MEDIA);
return 0;
}