#include <stdio.h>

int isPar(int num) {
    return (num % 2 == 0) ? 1 : 0; 
}

int main() {
    int valor;

    
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

 
    if (isPar(valor)) {
        printf("%d é um número par.\n", valor);
    } else {
        printf("%d é um número ímpar.\n", valor);
    }

    return 0;
}

