#include <stdio.h>

int main() {
    float pvalor, svalor, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%f", &pvalor);

    svalor = 0;

    while (svalor == 0) {
        printf("Digite o segundo valor, n�o pode ser zero: ");
        scanf("%f", &svalor);

        if (svalor == 0) {
            printf("VALOR INVALIDO.\n");
        }
    }

    resultado = pvalor / svalor;
    printf("O resultado da divis�o �: %.2f\n", resultado);

    return 0;
}

