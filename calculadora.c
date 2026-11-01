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
    printf("O resultado é: %d\n", resultado);

    return 0;
}

int subtracao(void) {

    int numero1;
    int numero2;
    int resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);

    resultado = numero1 - numero2;
    printf("O resultado é: \n", &resultado);

    return 0;
}


int divisao(void) {
    
    int numero1;
    int numero2;
    int resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &numero2);

    if (numero2 <= 0) {
        printf("Você nao pode dividir um numero por zero!\n");
        return;
    }

    else {
        resultado = numero1 / numero2;
        printf("O resultado é: \n", &resultado);
    }

    return 0;
}
int menu(void) {

    int opcao;

    printf("Escolha uma opção agora:\n");
    printf("1 - Voltar ao menu principal\n");
    printf("2 - Sair\n");

    scanf("%d", &opcao);

    if (opcao == 1) {
        return 0;
    }

    else if (opcao == 2) {
        return 0;
    }

    else {
        printf("Opção invalida!\n");
        return 0;
    }

    return 0;
}

int main(void) {

    soma();
    subtracao();
    divisao();

    return 0;
}