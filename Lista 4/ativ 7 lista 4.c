#include <stdio.h>

int isPar(int num) {
    return (num % 2 == 0) ? 1 : 0; 
}

int main() {
    int valor;

    
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &valor);

 
    if (isPar(valor)) {
        printf("%d � um n�mero par.\n", valor);
    } else {
        printf("%d � um n�mero �mpar.\n", valor);
    }

    return 0;
}

