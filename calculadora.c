#include <stdio.h>

int soma(void) {

    int numero1;
    int numero2;
    int resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;
    printf("O resultado é: \n", resultado);

    int menu(void) {
        
        int opcao;

        printf("Escolha uma opção agora:\n");
        printf("1 - Voltar ao menu principal\n");
        printf("2 - Fazer uma nova soma");
        printf("3 - Sair");

        scanf("%d", opcao);

        if (opcao == 1) {
            return
        }

        else if (opcao == 2) {
            soma();
        }

        else if (opcao == 3) {
            break;
        }

        else {
            printf("Opção invalida!");
            return 0;
        }
    }
}