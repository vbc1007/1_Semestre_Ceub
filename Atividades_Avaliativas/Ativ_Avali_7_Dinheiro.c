//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
int main () 
{

    int c100, c50, c20, c10, c5, c2, m1, m05, m025, m010, m005, m001;
    double valor;

    printf("Qual o valor em R$? \n");
        scanf("%lf", &valor);

    c100 = valor/100;
    c50 = (valor - c100 * 100)/50;
    c20 = ((valor - c100 * 100) - c50 * 50)/20;
    c10 = (((valor - c100 * 100)- c50 * 50)- c20 * 20)/10; 
    c5 = ((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)/5;
    c2 = (((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)- c5 * 5)/2;
    
    m1 = ((((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)- c5 * 5)- c2 * 2)/1;
    m05 = (((((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)- c5 * 5)- c2 * 2)- m1 * 1)/ 0.5;
    m025 = ((((((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)- c5 * 5)- c2 * 2)- m1 * 1)- m05 * 0.5)/ 0.25;
    m010 = (((((((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)- c5 * 5)- c2 * 2)- m1 * 1)- m05 * 0.5)- m025 * 0.25)/0.10;
    m005 = ((((((((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)- c5 * 5)- c2 * 2)- m1 * 1)- m05 * 0.5)- m025 * 0.25)- m010 * 0.10)/0.05;
    m001 = (((((((((((valor - c100 * 100)- c50 * 50)- c20 * 20)- c10 * 10)- c5 * 5)- c2 * 2)- m1 * 1)- m05 * 0.5)- m025 * 0.25)- m010 * 0.10)- m005 * 0.05)/0.01;

    printf("NOTAS: \n");
        printf("%i, nota(s) de R$ 100,00 \n", c100);
            printf("%i, nota(s) de R$ 50,00 \n", c50);
                printf("%i, nota(s) de R$ 20,00 \n", c20);
                    printf("%i, nota(s) de R$ 10,00 \n", c10);
                        printf("%i, nota(s) de R$ 5,00 \n", c5);
                            printf("%i, nota(s) de R$ 2,00 \n", c2);
    
    printf("MOEDAS: \n");
        printf("%i, moeda(s) de R$ 1,00 \n", m1);
            printf("%i, moeda(s) de R$ 0,50 \n", m05);
                printf("%i, moeda(s) de R$ 0,25 \n", m025);
                    printf("%i, moeda(s) de R$ 0,10 \n", m010);
                        printf("%i, moeda(s) de R$ 0,05 \n", m005);
                            printf("%i, moeda(s) de R$ 0,01 \n", m001);

return 0;

}
