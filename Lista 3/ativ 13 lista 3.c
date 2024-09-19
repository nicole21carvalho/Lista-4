#include <stdio.h>

int main() {
    int valor;
    int i = 0;
    printf("Digite um valor inteiro entre 1 e 10: ");
    scanf("%d", &valor);

    while (valor < 1 || valor > 10) {
        printf("Valor inválido! Por favor, digite um valor entre 1 e 10: ");
        scanf("%d", &valor);
    }


    printf("Tabuada de %d:\n", valor);
    for ( i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", valor, i, valor * i); 
    }

    return 0;
}

