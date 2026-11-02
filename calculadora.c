
#include <stdio.h>
#include "calc.h"

int soma(void) {

    int numero1;
    int numero2;
    int resultado;

    printf("\n====================================\n");
    printf("          NUMORA | ADICAO\n");
    printf("====================================\n");

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;

    printf("\n------------------------------------\n");
    printf("  RESULTADO: %d + %d = %d\n", numero1, numero2, resultado);
    printf("------------------------------------\n\n");

    return 0;
}

int subtracao(void) {

    int numero1;
    int numero2;
    int resultado;

    printf("\n====================================\n");
    printf("         NUMORA | SUBTRACAO\n");
    printf("====================================\n");

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1 - numero2;

    printf("\n------------------------------------\n");
    printf("  RESULTADO: %d - %d = %d\n", numero1, numero2, resultado);
    printf("------------------------------------\n\n");

    return 0;
}

int divisao(void) {

    int numero1;
    int numero2;
    int resultado;

    printf("\n====================================\n");
    printf("          NUMORA | DIVISAO\n");
    printf("====================================\n");

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if (numero2 == 0) {
        printf("\n[ERRO] Divisao por zero nao permitida!\n\n");
        return 0;
    }

    else {
        resultado = numero1 / numero2;

        printf("\n------------------------------------\n");
        printf("  RESULTADO: %d / %d = %d\n", numero1, numero2, resultado);
        printf("------------------------------------\n\n");
    }

    return 0;
}

int multiplicacao(void) {

    int numero1;
    int numero2;
    int resultado;

    printf("\n====================================\n");
    printf("       NUMORA | MULTIPLICACAO\n");
    printf("====================================\n");

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1 * numero2;

    printf("\n------------------------------------\n");
    printf("  RESULTADO: %d x %d = %d\n", numero1, numero2, resultado);
    printf("------------------------------------\n\n");

    return 0;
}

int menu(void) {

    int opcao = 1;

    while (opcao != 1) {
        printf("\n====================================\n");
        printf("             NUMORA\n");
        printf("====================================\n");
        printf("  1 - Continuar\n");
        printf("  2 - Sair\n");
        printf("------------------------------------\n");
        printf("  Escolha uma opcao: ");

        scanf("%d", &opcao);
    }

    if (opcao == 1) {
        return 1;
    }

    else if (opcao == 2) {
        return 2;
    }

    else {
        printf("[ERRO] Opcao invalida!\n");
    }

    return 0;
}
