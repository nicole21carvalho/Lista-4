#include <stdio.h>

int LerNumeroPositivo() {
    int num;
    do {
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);
        if (num <= 0) {
            printf("O número deve ser positivo. Tente novamente.\n");
        }
    } while (num <= 0);
    return num;
}


int SomaDivisores(int num) {
    int soma = 0;
    int i = 0;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i; 
        }
    }
    return soma;
}

int main() {
    int numeros[5];
int i = 0;
    for (i = 0; i < 5; i++) {
        numeros[i] = LerNumeroPositivo();
    }

    printf("\nSoma dos divisores (exceto o próprio número):\n");
    for (i = 0; i < 5; i++) {
        int soma = SomaDivisores(numeros[i]);
        printf("Soma dos divisores de %d: %d\n", numeros[i], soma);
    }

    return 0;
}

