#include <stdio.h>
int main() {

    int NUMERO, HORA;
    float VALORHORA, SALARIO;

    printf ("Qual e o seu numero de funcionario?: \n");
    scanf ("%i",&NUMERO);

    printf ("Por quantas horas voce trabalha: \n");
    scanf ("%i", &HORA);

    printf ("Quanto voce recebe por hora?: \n");
    scanf ("%f", &VALORHORA);

    SALARIO = HORA * VALORHORA;

    printf ("Seu numero e igual a: %i", NUMERO );
    printf (" e o seu salario eh: %.2f",SALARIO);
    return 0;
}