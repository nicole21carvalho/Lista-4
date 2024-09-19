#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char tipo) {
    if (tipo == 'A' || tipo == 'a') {
        
        return (nota1 + nota2 + nota3) / 3;
    } else if (tipo == 'P' || tipo == 'p') {
       
        return (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
    } else if (tipo == 'H' || tipo == 'h') {
     
        return 3 / ((1.0 / nota1) + (1.0 / nota2) + (1.0 / nota3));
    } else {
       
        printf("Tipo inválido. Use 'A', 'P' ou 'H'.\n");
        return -1;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipo;

   
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o tipo de média (A para aritmética, P para ponderada, H para harmônica): ");
    scanf(" %c", &tipo); 

    
    float media = calcularMedia(nota1, nota2, nota3, tipo);
    if (media != -1) {
        printf("A média é: %.2f\n", media);
    }

    return 0;
}

