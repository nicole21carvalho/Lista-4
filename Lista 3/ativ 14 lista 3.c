#include <stdio.h>

int main() {
    int n;
    int i = 0;
    int j = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for ( i = n; i >= 1; i--) {
       
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}

