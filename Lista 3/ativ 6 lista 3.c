#include <stdio.h>

int main() {
    float nota1, nota2, media, s, n;

    do {
        printf("Digite a nota da avaliação 1, de 0 até 10: ");
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida. A nota deve estar entre 0 e 10. Tente novamente.\n");
        }
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf("Digite a nota da avaliação 2, de 0 até 10:: ");
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida. A nota deve estar entre 0 e 10. Tente novamente.\n");
        }
    } while (nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("A média das avaliações é: %.2f\n", media);
    printf(" NOVO CALCULO (S/N)?", s);
    scanf("%d", s);

  } float nota1, nota2, media, s, n;

    do {
        printf("Digite a nota da avaliação 1, de 0 até 10: ");
        scanf("%f", &nota1);

        if (nota1 < 0 || nota1 > 10) {
            printf("Nota inválida. A nota deve estar entre 0 e 10. Tente novamente.\n");
        }
    } while (nota1 < 0 || nota1 > 10);

    do {
        printf("Digite a nota da avaliação 2, de 0 até 10:: ");
        scanf("%f", &nota2);

        if (nota2 < 0 || nota2 > 10) {
            printf("Nota inválida. A nota deve estar entre 0 e 10. Tente novamente.\n");
        }
    } while (nota2 < 0 || nota2 > 10);

    media = (nota1 + nota2) / 2;

    printf("A média das avaliações é: %.2f\n", media);

  
}
