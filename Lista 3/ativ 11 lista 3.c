#include <stdio.h>

int main() {
    int N;
int i = 0;
   
    printf("Digite um valor inteiro positivo (N): ");
    scanf("%d", &N);

    
    while (N <= 0) {
        printf("Valor inv�lido! Por favor, digite um valor maior que 0: ");
        scanf("%d", &N);
    }

    
    printf("N�meros de 1 a %d:\n", N);
    for ( i = 1; i <= N; i++) {
        printf("%d\n", i); 
    }
    
    return 0;
}

