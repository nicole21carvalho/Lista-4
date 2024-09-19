#include <stdio.h>

int Absoluto(int num) {
    if (num < 0) {
        return -num; 
    }
    return num; 
}

int main() {
    int valor;
int i= 0;
   
    printf("Digite 5 valores inteiros:\n");
    for(i= 0; i< 5; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valor);
        printf("Valor absoluto de %d é: %d\n", valor, Absoluto(valor));
    }

    return 0;
}

