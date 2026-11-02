
#include <stdio.h>
#include "calc.h"

int main(void) {

    int opcao;

    printf("\n");
    printf("====================================\n");
    printf("                                    \n");
    printf("             NUMORA                 \n");
    printf("       CALCULADORA EM C             \n");
    printf("                                    \n");
    printf("====================================\n");

    printf("\n           MENU PRINCIPAL\n");
    printf("------------------------------------\n");
    printf("  [1]  Soma\n");
    printf("  [2]  Subtracao\n");
    printf("  [3]  Divisao\n");
    printf("  [4]  Multiplicacao\n");
    printf("  [5]  Sair\n");
    printf("------------------------------------\n");

    printf("  Selecione uma operacao: ");
    scanf("%d", &opcao);

    printf("\n");

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
        printf("Encerrando o NUMORA...\n");
        printf("Obrigado por utilizar nosso sistema!\n\n");
    }
    else {
        printf("[ERRO] Opcao invalida! Tente novamente.\n");
    }

    return 0;
}
