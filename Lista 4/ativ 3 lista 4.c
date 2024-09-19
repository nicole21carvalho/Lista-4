#include <stdio.h>


int potencia(int base, int expoente) {
    if (expoente == 0) {
        return 1;
    } else {
        return base * potencia(base, expoente - 1); 
    }
}

int main() {
    int base, expoente;


    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (>= 1): ");
    scanf("%d", &expoente);

    
    if (expoente >= 1) {
        int resultado = potencia(base, expoente);
        printf("%d elevado a %d é: %d\n", base, expoente, resultado);
    } else {
        printf("O expoente deve ser maior ou igual a 1.\n");
    }

    return 0;
}

