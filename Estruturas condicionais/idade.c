/*Programa que solicita ao usuário que informa sua idade
e com base no valor informado, imprime uma mensagem específica
*/
#include<stdio.h>

int main() 
{

    int idade;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    if (idade < 18)
    
        printf("Menor de idade!");

    else
        printf("Maior de idade!");

    return 0;
}