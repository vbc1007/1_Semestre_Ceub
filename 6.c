#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) 
{

    float A, B, MEDIA; //float usar para numeros quebrados e que sao maiores

    printf ("Insira a primeira nota do aluno: \n");
    scanf ("%f", &A);

    printf ("Insira a segunda nota do aluno: \n");
    scanf ("%f", &B);

    MEDIA = (A * 3.5 + B * 7.5)/11;
    printf("A media do aluno, eh: %.5f\n", MEDIA);
return 0;
}