#include <stdio.h>
#include <string.h>

    int main ()
{
    char palavra_1[20], palavra_2[20], palavra_3[20];
    
    scanf("%s", palavra_1);    
    scanf("%s", palavra_2);    
    scanf("%s", palavra_3);  
    
    if(strcmp(palavra_1, "vertebrado") == 0)
        if(strcmp(palavra_2, "ave") == 0)
            if(strcmp(palavra_3, "carnivoro") == 0)
                printf("aguia \n");
                    
    else if (strcmp(palavra_3, "onivoro") == 0)
    {
        printf("pomba\n");
    }
    
    else
        if(strcmp(palavra_2, "mamifero") == 0)
            if(strcmp(palavra_3, "onivoro") == 0)
                printf("homem\n");

    else if (strcmp(palavra_3, "herbivoro") == 0) 
    {
        printf("vaca");
    }

    else 
        if(strcmp(palavra_1, "invertebrado") == 0)
            if(strcmp(palavra_2, "inseto") == 0)
                if(strcmp(palavra_3, "hematofago") == 0)
                    printf("pulga\n");

    else if (strcmp(palavra_3, "herbivoro") == 0)
    {
       printf("lagarta\n");
    }

    else 
        if(strcmp(palavra_2, "anelideo") == 0)
            if(strcmp(palavra_3, "onivoro") == 0)
                printf("mihoca\n");

    else if (strcmp(palavra_3, "hematofago") == 0)
    {
        printf("sanguessuga");
    }

return 0;

}