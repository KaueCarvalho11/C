/* Programa que solicita que o usuario informe o valor de uma compra e o tipo do produto
Sendo com base neste o calculo da taxa cobrada. Ao fim, é exibido o total a ser pago
*/

#include <stdio.h>

int main()
{

    float valor;
    int tipo;

    printf("Informe o valor da compra: R$");
    scanf("%f", &valor);

    printf("Informe o tipo de produto: (0 - Nacional) ou (Qualquer outro valor - Internacional): ");
    scanf("%d", &tipo);

    switch (tipo)
    {
    case 0:
        float taxa_nacional = valor * 0.10;
        float total_nacional = valor + taxa_nacional;

        printf("Total a ser pago: R$%.2f", total_nacional);
        break;

    default:
        float taxa_internacial = valor * 0.20;
        float total_internacional = valor + taxa_internacial;

        printf("Total a ser pago: R$%.2f", total_internacional);
        break;
    }
}