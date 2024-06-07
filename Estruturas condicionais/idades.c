#include<stdio.h>

int main ()
{

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade <= 12)
    {
        printf("Crianca!");
    }

    else if (idade > 12 && idade < 18)
    {
        printf("Adolescente!");
    }

    else
    {
        printf("Adulto!");
    }
    
    return 0;
}
