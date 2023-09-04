#include <stdio.h>

 main() {
    float salarioAtual, Reajustado, bonus = 0;
    int tempoServico;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    printf("Digite em anos o tempo de serviço do funcionário: ");
    scanf("%d", &tempoServico);

     printf("\n ----------Resultado Dos Salarios ----------\n");

    if (salarioAtual <= 500) {
        Reajustado = salarioAtual * 1.25; 
        if (tempoServico < 1) {
            bonus = 0; 
        }
    } else if (salarioAtual <= 1000) {
        Reajustado = salarioAtual * 1.2;
        if (tempoServico >= 1 && tempoServico <= 3) {
            bonus = 100; 
        }
    } else if (salarioAtual <= 1500) {
        Reajustado = salarioAtual * 1.15; 
        if (tempoServico >= 4 && tempoServico <= 6) {
            bonus = 200; 
        }
    } else if (salarioAtual <= 2000) {
        Reajustado = salarioAtual * 1.1; 
        if (tempoServico >= 7 && tempoServico <= 10) {
            bonus = 300; 
        }
    } else {
        Reajustado = salarioAtual; 
        if (tempoServico > 10) {
            bonus = 500; 
        }
    }

    Reajustado += bonus;

    if (Reajustado == salarioAtual) {
        printf("O funcionário não pode ter um aumento.\n");
    } else {
        printf("Salário reajustado: %.2f\n", Reajustado);
    }

    
}