#include<stdio.h>

int main()
{
    char nome[30], cpf[12];
    int idade;

    printf("Informe seu nome completo: ");
    scanf(" %[^\n]", nome);

    printf("\nInforme seu cpf: ");
    scanf(" %[^\n]", cpf);

    printf("\nInforme sua idade: ");
    scanf("%d", &idade);

    printf("\nDados informados: ");

    printf("\nNome completo: %s\nCpf: %s\nIdade: %d", nome, cpf, idade);

    return 0;
}