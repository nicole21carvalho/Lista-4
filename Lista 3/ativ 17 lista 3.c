#include <stdio.h>

int main() {
    float valor, soma = 0.0;
    int contador = 0;
    char continuar;

   
    do {
        printf("Digite o valor da mercadoria: ");
        scanf("%f", &valor);
        
        soma += valor; 
        contador++;    

        
        printf("MAIS MERCADORIAS (S/N)? ");
        scanf(" %c", &continuar); 

    } while (continuar == 'S' || continuar == 's');

    if (contador > 0) {
     
        float valorTotal = soma;
        float mediaValor = valorTotal / contador;

       
        printf("Valor total em estoque: %.2f\n", valorTotal);
        printf("Média de valor das mercadorias: %.2f\n", mediaValor);
    } else {
        printf("Nenhuma mercadoria registrada.\n");
    }

    return 0;
}

