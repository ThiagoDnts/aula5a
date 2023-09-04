#include <stdio.h>

main() {
    int numero;
    
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    printf("\n ----------Resultado----------\n");
    
    if (numero % 2 == 0) {
        printf("\nO numero digitado e par.\n");
    }
    
   
}