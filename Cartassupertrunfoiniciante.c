#include <stdio.h>

int main() {
    // Declaração das variáveis:
    char cidade[100], cidadeB[100];
    int numeroDeponto, numeroDepontoB;
    float populacao, area, pib, populacaoB, areaB, pibB;

    // Entrada de dados para o jogador A:
    printf("Digite os dados para o jogador A:\n");
    printf("Digite a cidade:\n");
    fgets(cidade, sizeof(cidade), stdin);
    printf("Numero dos pontos de acesso:\n");
    scanf("%d", &numeroDeponto);
    printf("Digite a população:\n");
    scanf("%f", &populacao);
    printf("Digite a área:\n");
    scanf("%f", &area);
    printf("Digite o pib:\n");
    scanf("%f", &pib);

    // Limpa o buffer do teclado (caso necessário)
    getchar();

    // Entrada de dados para o jogador B:
    printf("\nDigite os dados para o jogador B:\n");
    printf("Digite a cidade:\n");
    fgets(cidadeB, sizeof(cidadeB), stdin);
    printf("Numero dos pontos de acesso:\n");
    scanf("%d", &numeroDepontoB);
    printf("Digite a população:\n");
    scanf("%f", &populacaoB);
    printf("Digite a área:\n");
    scanf("%f", &areaB);
    printf("Digite o pib:\n");
    scanf("%f", &pibB);

    // Limpa o buffer do teclado (caso necessário)
    getchar();

    // Saída de dados para o jogador A:
    printf("\nDados do jogador A:\n");
    printf("A cidade escolhida: %s\n", cidade);
    printf("O número de pontos de acesso: %d\n", numeroDeponto);
    printf("A população é: %.2f\n", populacao);
    printf("A área é: %.2f\n", area);
    printf("O PIB é: %.2f\n", pib);

    // Saída de dados para o jogador B:
    printf("\nDados do jogador B:\n");
    printf("A cidade escolhida: %s\n", cidadeB);
    printf("O número de pontos de acesso: %d\n", numeroDepontoB);
    printf("A população é: %.2f\n", populacaoB);
    printf("A área é: %.2f\n", areaB);
    printf("O PIB é: %.2f\n", pibB);

    // Finaliza a execução do programa e retorna 0, indicando sucesso
    return 0;
}