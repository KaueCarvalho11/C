/* Programa que coleta informações sobre uma parcela de população, ao final do programa,
calculando e informando a maior idade informada, a média salarial, a quantidade de mulheres
e a quantidade de salários abaixo de R$500
*/

#include <stdio.h>

int main()
{
    int idade, maior_idade = 0;
    char sexo;
    float salario;
    int conta_salario = 0;
    float acumula_salario = 0;
    int conta_mulheres = 0;
    int abaixo = 0;

    printf("Coleta de informacoes sobre moradores de um bairro.");

    do
    {
        printf("\nInforme sua idade (0 para encerrar a execucao do programa): ");
        scanf("%d", &idade);

        if (idade == 0)
            break;

        if (idade > maior_idade)
        {
            maior_idade = idade;
        }

        printf("\nInforme seu sexo (m - Masculino) ou (f -  Feminino): ");
        scanf(" %c", &sexo);

        if (sexo == 'f')
        {
            conta_mulheres++;
        }

        printf("\nInforme seu salario: R$");
        scanf("%f", &salario);
        conta_salario++;
        acumula_salario += salario;

        if (salario < 500)
        {
            abaixo++;
        }

    } while (1);

    float media = acumula_salario / conta_salario;

    printf("\nMaior idade informada: %d", maior_idade);
    printf("\nMedia salarial: R$%.2f", media);
    printf("\nQuantidade de mulheres: %d", conta_mulheres);
    printf("\nQuantidade de salarios abaixo de R$500: %d", abaixo);

    return 0;
}