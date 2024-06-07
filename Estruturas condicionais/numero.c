/* Programa que solicita que o usuário informe um número
e imprime uma mensagem específica na tela com base no valor informado
*/

#include<stdio.h>

int main()
{

    float numero;

    printf("Informe um numero: ");
    scanf("%f", &numero);

    if (numero > 0)
        printf("Numero positivo ");

    else if (numero < 0)
        printf("Numero negativo ");

    else
        printf("Numero nulo ");

    return 0;

}