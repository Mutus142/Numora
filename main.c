#include <stdio.h>
#include "calc.h"

int main(void) {

    int opcao;

    printf("Bem vindo ao Numora!\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    printf("5 - Sair\n");

    scanf("%d", opcao);

    if (opcao == 1) {
        soma();
    }
}