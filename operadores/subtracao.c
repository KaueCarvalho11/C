//Programa que calcula a subtração entre 2 números

#include<stdio.h>

int main()
{
    int a, b;

    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    int resultado = a - b;

    printf("Resultado: %d", resultado);

    return 0;   
}
