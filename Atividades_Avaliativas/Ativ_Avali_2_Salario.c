//RA:22502793
//ALUNO: Vinicius Bernardes Carneiro

#include <stdio.h>
int main () 
{

float FIXO, VENDA, SALARIO;
char NOME [25];

printf("Qual e o seu nome?: \n");
scanf("%s", &NOME);

printf("Quanto voce recebe por mes?: \n");
scanf("%f", &FIXO);

printf("Quantos produtos voce vendeu esse mes?: \n");
scanf("%f", &VENDA);

SALARIO = FIXO + VENDA * 0.15;

printf("Entao seu salario eh de: \n");
printf("TOTAL = $ %.2f", SALARIO);
return 0;
}
