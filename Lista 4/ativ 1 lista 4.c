#include <stdio.h>

// Função que retorna o menor número entre dois inteiros
int menor(int a, int b) {
    return (a < b) ? a : b; // Usando operador ternário
}

int main() {
    int num1, num2;

    // Solicita ao usuário para entrar com os números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Chama a função e imprime o menor número
    printf("O menor número é: %d\n", menor(num1, num2));

    return 0;
}

