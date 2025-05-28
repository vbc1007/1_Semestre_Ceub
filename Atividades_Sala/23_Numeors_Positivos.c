#include <stdio.h>

int main ()
{

    int contpositivos = 0;
    float valor, soma = 0;

    int i;
    
    for (i = 0; i < 6; i += 1)
     {
        printf("Insira um numero \n");
            scanf("%f", &valor);

    if (valor > 0) {
        soma = soma + valor;
        contpositivos ++;
    }
        }
printf("%d Valores Positivo\n", contpositivos);
printf("%.1f A media dos numeros positivos e de", soma/contpositivos);

return 0;

}