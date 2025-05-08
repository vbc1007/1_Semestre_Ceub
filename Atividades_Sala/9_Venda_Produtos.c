#include <stdio.h>
int main() {

    int CODIGO_1, CODIGO_2, NUMERO_1, NUMERO_2;
    float PRECO_1, PRECO_2, VALOR_TOTAL;

printf("Insira o codigo do produto 1: \n");
scanf("%i", &CODIGO_1);

printf("Quantas unidades do produto 1 voce ira comprar?: \n");
scanf("%i", &NUMERO_1);

printf("Qual e o preco do produto 1?: \n");
scanf("%f", &PRECO_1);

printf("Agora insira o codigo do produto 2: \n");
scanf("%i", &CODIGO_2);

printf("Quantas unidades do produto 2 voce ira comprar?: \n");
scanf("%i", &NUMERO_2);

printf("Qual e o preco do produto 2?: \n");
scanf("%f", &PRECO_2);

VALOR_TOTAL = (NUMERO_1 * PRECO_1) + (NUMERO_2 * PRECO_2);

printf("Entao o valor total que voce ira pagar eh de: R$ %.2f\n", VALOR_TOTAL);
return 0;
}