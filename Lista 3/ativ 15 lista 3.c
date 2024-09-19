#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 0;
    int i = 0;
   
    for (i = 15; i <= 100; i++) {
        soma += i; 
        contador++; 
    }

    
    float media = (float)soma / contador;

 
    printf("A média aritmética dos números inteiros entre 15 e 100 é: %.2f\n", media);

    return 0;
}

