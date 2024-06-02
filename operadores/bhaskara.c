/* Programa que lê três coeficientes reais a, b e c de uma equação do segundo grau e informa na tela suas raízes,
utilizando fórmula de Bhaskara. 
Obs: Considerando apenas valores que resultem em raízes reais
*/

#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;

    printf("Informe o valor de a: ");
    scanf("%d", &a);

    printf("Informe o valor de b: ");
    scanf("%d", &b);

    printf("Informe o valor de c: ");
    scanf("%d", &c);

    int delta = b * b - 4 * a * c;

    int raiz_positiva = (-b + sqrt(delta))/ (2 * a);

    int raiz_negativa = (-b - sqrt(delta)) / (2 * a);

    printf("Raizes: \nx1 = %d\nx2 = %d", raiz_positiva, raiz_negativa);
}
