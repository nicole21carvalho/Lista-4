#include <stdio.h>

// Fun��o que retorna o menor n�mero entre dois inteiros
int menor(int a, int b) {
    return (a < b) ? a : b; // Usando operador tern�rio
}

int main() {
    int num1, num2;

    // Solicita ao usu�rio para entrar com os n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    // Chama a fun��o e imprime o menor n�mero
    printf("O menor n�mero �: %d\n", menor(num1, num2));

    return 0;
}

