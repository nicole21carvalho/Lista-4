#include <stdio.h>


int verificarNumero(int num) {
    if (num > 0) {
        return 1;  
    } else if (num < 0) {
        return -1; 
    } else {
        return 0; 
    }
}

int main() {
    int valor;

    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    int resultado = verificarNumero(valor);
    if (resultado == 1) {
        printf("%d é um número positivo.\n", valor);
    } else if (resultado == -1) {
        printf("%d é um número negativo.\n", valor);
    } else {
        printf("%d é zero.\n", valor);
    }

    return 0;
}

