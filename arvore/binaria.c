#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *direita, *esquerda;

} NoArvore;

NoArvore *inserir(NoArvore *raiz, int numero)
{
    if (raiz == NULL)
    {
        NoArvore *auxiliar = malloc(sizeof(NoArvore));
        auxiliar->valor = numero;
        auxiliar->esquerda = NULL;
        auxiliar->direita = NULL;
    }
    else
    {
        if (numero < raiz->valor)
            raiz->esquerda = inserir(raiz->esquerda, numero);

        else
            raiz->direita = inserir(raiz->direita, numero);

        return raiz;
    }
}

void imprimir_pre_ordem(NoArvore * raiz){
    if (raiz){
        printf("%d\t", raiz->valor);
        imprimir_pre_ordem(raiz->esquerda);
        imprimir_pre_ordem(raiz->direita);
    }
}

void imprimir_em_ordem(NoArvore * raiz){
    if (raiz){ 
    imprimir_em_ordem(raiz->esquerda);
    printf("%d\t", raiz->valor);
    imprimir_em_ordem(raiz->direita);
    }
}

int main(){
    NoArvore *raiz = NULL;
    int opcao;
    int valor;

   do{
    printf("\nEscolha uma opcao!\n0 - Sair do programa\n1 - Inserir valor na arvore\n2 - Imprimir arvore em pre-ordem e em ordem\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
        case 1:
        printf("\nInsira um valor na arvore: ");
        scanf("%d", &valor);
        raiz = inserir(raiz, valor);
        break;
    
        case 2:
        printf("\nArvore na pre ordem:\n ");
        imprimir_pre_ordem(raiz);
        printf("\n");

        printf("\nArvore em ordem: \n");
        imprimir_em_ordem(raiz);
        printf("\n");
        break;
    
        default:
        if(opcao != 0)
            printf("Opcao invalida");
    }
   }while(opcao != 0);

   printf("\nFim da execucao do programa.");
   return 0;
}