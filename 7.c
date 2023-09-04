#include <stdio.h>

 main() {
    float Avaliacao1, Avaliacao2, Avaliacao3, media;
    
    printf("Digite a nota da primeira Avaliacao: ");
    scanf("%f", &Avaliacao1);
    
    printf("Digite a nota da segunda Avaliacao: ");
    scanf("%f", &Avaliacao2);
    
    printf("Digite a nota da terceira Avaliacao: ");
    scanf("%f", &Avaliacao3);


    media = (Avaliacao1 + Avaliacao2 + (2 * Avaliacao3) )/ 4;
    
    printf("Media do aluno: %.2f\n", media);

    printf("\n ----------Resultado Da Media ----------\n");
    
    if (media >= 7.0) {
        printf("Aluno Passou!\n");
    } else {
        printf("Aluno reprovado.\n");
    }
    
   
}