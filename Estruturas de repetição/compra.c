/* Programa que calcula o total de uma compra de acordo com os valores informados 
pelo usuário
*/

#include<stdio.h>

int main()
{
    float valor = 0;
    float somatorio = 0;

    do
    {
        printf("Informe o valor do produto:(0 para encerrar a execucao do programa)\nR$");
        scanf("%f", &valor);
        somatorio +=valor;
    } while (valor != 0);
    
    printf("Valor total da compra: R$%.2f", somatorio);

    return 0;
}