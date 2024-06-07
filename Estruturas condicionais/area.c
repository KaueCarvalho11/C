/* Programa que calcula a area de um circulo ou de um triangulo, a depender da escolha
do usuário, com o mesmo informando os dados necessários para o cálculo
*/

#include<stdio.h>

int main(){

    int escolha;

    printf("Qual figura bidimensional voce deseja saber a area?\n(1 - Circulo) ou (2 - Retangulo):\n ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:

        float raio;
    
        printf("Informe o raio do circulo: ");
        scanf("%f", &raio);

        float area_circulo = (raio * raio) * 3.1415;
        
        printf("Area do circulo: %2f", area_circulo);

        break;

    case 2:

        float base, altura;

        printf("Informe o base do retangulo: ");
        scanf("%f", &base);

        printf("Informe a altura do retangulo ");
        scanf("%f", &altura);

        float area_triangulo = base * altura;

        printf("Area do retangulo: %2f", area_triangulo);

        break;
    
    default:

        printf("Opcao indisponivel!");
        break;
    }

    return 0;
}