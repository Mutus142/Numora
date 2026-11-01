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

    scanf("%d", &opcao);

    if (opcao == 1) {
        soma();
    }
    else if (opcao == 2) {
        subtracao();
    }
    else if (opcao == 3) {
        divisao();
    }
    else if (opcao == 4) {
        multiplicacao();
    }
    else if (opcao == 5) {
        printf("Saindo...\n");
    }

    return 0;
}