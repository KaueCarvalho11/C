/* Programa que solicita que o usuário informe um número e imprime na tela uma mensagem
específica correspondente ao número informado.
*/

#include<stdio.h>

int main()
{

    int numero;

    printf("Informe um numero inteiro entre 1 e 4: ");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("Voce escolheu o numero 1!");
        break;

    case 2:
        printf("Voce escolheu o numero 2!");
        break;

    case 3:
        printf("Voce escolheu o numero 3!");
        break;

    case 4:
        printf("Voce escolheu o numero 4!");
        break;
    
    default:
        printf("Numero invalido!");
        break;
    }

    return 0;
}