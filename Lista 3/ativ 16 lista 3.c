#include <stdio.h>

int main() {
    int numMercadorias;
    float valor, soma = 0.0;
    int i = 0;

    printf("Digite o n�mero total de mercadorias no estoque: ");
    scanf("%d", &numMercadorias);

   
    if (numMercadorias <= 0) {
        printf("O n�mero de mercadorias deve ser maior que 0.\n");
        return 1; 
    }

  
    for (i = 1; i <= numMercadorias; i++) {
        printf("Digite o valor da mercadoria %d: ", i);
        scanf("%f", &valor);
        soma += valor; 
    }

    
    float valorTotal = soma;
    float mediaValor = valorTotal / numMercadorias;

   
    printf("Valor total em estoque: %.2f\n", valorTotal);
    printf("M�dia de valor das mercadorias: %.2f\n", mediaValor);

    return 0;
}

