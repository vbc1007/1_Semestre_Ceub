#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char *argv[]) 
{

    float A, B, MEDIA, PESO_A, PESO_B, C;

    printf ("Insira a primeira nota do aluno: \n");
    scanf ("%f", &A);
    
    printf ("Qual e o peso da primeira nota?: \n");
    scanf ("%f", &PESO_A);
    
    printf ("Insira a segunda nota do aluno: \n");
    scanf ("%f", &B);
    
    printf ("Qual e o peso da segunda nota?: \n");
    scanf ("%f", &PESO_B);

    C = PESO_A + PESO_B;
    MEDIA = (A * PESO_A + B * PESO_B)/C;
    
    printf("A media do aluno, eh: %.5f\n", MEDIA);
return 0;
}