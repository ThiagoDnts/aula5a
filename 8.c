#include <stdio.h>

 main() {
    int idade, tempoServico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de serviço  do trabalhador: ");
    scanf("%d", &tempoServico);

    if (idade >= 65 || tempoServico >= 30 || (idade >= 60 && tempoServico >= 25)) {
        printf("O trabalhador pode se aposentar.\n");
    } else {
        printf("O trabalhador não pode se aposentar.\n");
    }

   
}