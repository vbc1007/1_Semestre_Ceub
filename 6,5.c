//desafio 6, modificado colocando o peso de cada nota
#include <stdio.h>
#include <stdlib.h> //serve para funcionar o codigo abaixo

int main(int argc, char *argv[]) //ainda não explicou para que serve
{

    float A, B, MEDIA, PESO_A, PESO_B, C; //float usar para numeros quebrados e que sao maiores


    printf ("Vamos ver qual e a media dos dois primerios bimestres do aluno, insira a primeira nota do aluno: \n");
    scanf ("%f", &A);
    
    printf ("Qual e o peso da primeira nota?: \n");
    scanf ("%f", &PESO_A);
    
    printf ("Insira a segunda nota do aluno: \n");
    scanf ("%f", &B);
    
    printf ("Qual e o peso da segunda nota?: \n");
    scanf ("%f", &PESO_B);

    C = PESO_A + PESO_B; //adicao para saber o numero que ira dividir 
    MEDIA = (A * PESO_A + B * PESO_B)/C;
    
    printf("A media do aluno, eh: %.5f\n", MEDIA);
return 0;
}