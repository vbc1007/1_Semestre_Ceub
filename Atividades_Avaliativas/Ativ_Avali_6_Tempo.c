//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
int main () 
{

    int N, horas, minutos, segundos;

    printf("Insira o algum tempo em segundos: \n");
        scanf("%i", &N);

    horas = N/3600;
    minutos = (N - horas * 3600)/60;
    segundos = ((N - horas * 3600)- minutos * 60);

    printf("%i: ",horas);
        printf("%i: ", minutos);
            printf("%i", segundos);

return 0;
}