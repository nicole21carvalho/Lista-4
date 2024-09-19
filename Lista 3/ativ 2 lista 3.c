#include <stdio.h>

int main() {
    float pvalor, svalor, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%f", &pvalor);

    do {
        printf("Digite o segundo valor (não pode ser zero): ");
        scanf("%f", &svalor);

        if (svalor == 0) {
            printf("Erro: O segundo valor não pode ser zero. Tente novamente.\n");
        }
    } while (svalor == 0);

    resultado = pvalor / svalor;
    printf("O resultado da divisão é: %.2f\n", resultado);

    return 0;
}

