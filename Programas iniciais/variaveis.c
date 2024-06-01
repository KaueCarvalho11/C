#include <stdio.h>

int main()
{
    int idade;
    float dinheiro;
    double particula;
    char tipo;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Informe o valor do pagamento: R$");
    scanf("%f", &dinheiro);

    printf("Informe a velocidade de particula: ");
    scanf("%lf", &particula);

    printf("Informe o tipo de habilitacao: ");
    scanf(" %c", &tipo);

    printf("Dados informados: \n%d\n %.2f\n %lf\n %c\n", idade, dinheiro, particula, tipo);

    return 0;
}