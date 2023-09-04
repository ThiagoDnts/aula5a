#include <stdio.h>


 main() {
    float A, B, C;
    float Delta, X1, X2;

    printf("Digite o coeficiente 'a': ");
    scanf("%f", &A);

    printf("Digite o coeficiente 'b': ");
    scanf("%f", &B);

    printf("Digite o coeficiente 'c': ");
    scanf("%f", &C);

    Delta = B * B - 4 * A * C;

    if (A == 0) {
        printf("Não é uma equação de segundo grau.\n");
        return 0;
    }
    if (Delta < 0) {
        printf("Não existe raiz.\n");
    } else if (Delta == 0) {
        X1 = -B / (2 * A);
        printf("Raiz única: %.2f\n", X1);
    } else {
        X1 = (-B + sqrt(Delta)) / (2 * A);
        X2 = (-B - sqrt(Delta)) / (2 * A);
        printf("Raízes reais: %.2f e %.2f\n", X1, X2);
    }

    
}