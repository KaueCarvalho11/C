/* Programa que lê três caracteres informados via teclado e informa na tela a palavra formada
pelos três caracteres em ordem inversa de entrada separados pelo caractere "-"
*/

#include<stdio.h>

int main(){

    char a;
    char b;
    char c;

    printf("Informe um caractere: \n");
    scanf(" %c", &a);

    printf("Informe outro caractere: \n");
    scanf(" %c", &b);

    printf("Informe um ultimo caractere: \n");
    scanf(" %c", &c);

    printf("Palavra formada pelos caracteres na ordem inversa de entrada:\n");
    printf("%c-%c-%c", c, b, a);

    return 0;
}
