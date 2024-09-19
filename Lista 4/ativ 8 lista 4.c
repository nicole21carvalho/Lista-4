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

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &valor);

    int resultado = verificarNumero(valor);
    if (resultado == 1) {
        printf("%d � um n�mero positivo.\n", valor);
    } else if (resultado == -1) {
        printf("%d � um n�mero negativo.\n", valor);
    } else {
        printf("%d � zero.\n", valor);
    }

    return 0;
}

