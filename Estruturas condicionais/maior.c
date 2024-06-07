/* Programa que solicita que o usuário informe três valores
e informa qual o maior valor digitado
*/

#include<stdio.h>

int main()
{

    float numero1, numero2, numero3;

    printf("Informe um valor: ");
    scanf("%f", &numero1);

    printf("Informe outro valor: ");
    scanf("%f", &numero2);

    printf("Informe mais um valor: ");
    scanf("%f", &numero3);

    if(numero1 > numero2 && numero1 > numero3)

        printf("Maior valor digitado: %.2f", numero1);

    else if(numero2 > numero1 && numero2 > numero3)

        printf("Maior valor digitado: %.2f", numero2);

    else if(numero3 > numero1 && numero3 > numero2)

        printf("Maior valor digitado: %.2f", numero3);

    else if (numero1 == numero2 && numero1 == numero3 && numero2 == numero3)

        printf("Todos os valores sao iguais! ");

    else if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3)

        printf("Os dois maiores valores sao iguais! ");

    return 0;
    
}