#include <stdio.h>

int main() {
    int N;
int i = 0;
    printf("Digite um valor inteiro positivo (N): ");
    scanf("%d", &N);

    for ( i = 1; i <= N; i++) {
        printf("%d\n", i); 
    }
    
    return 0;
}

