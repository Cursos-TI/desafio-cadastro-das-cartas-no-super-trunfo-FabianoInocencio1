#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   
    // Exibe o título do jogo
    printf("Desafio Super Trunfo - Países\n");
    printf("\n**************************\n");
    
    int codigo, populacao, iniciar;
    float area, pib, DensidadePopulacional, PibPercapita, total;
    
    // Exibe opções para o jogador
    printf ("1-iniciar o jogo\n");
    printf ("2-Regras do jogo\n");
    printf ("3-sair\n");
    printf ("Escolha:");
    scanf ("%d",&iniciar);
    
    // Início das operações conforme a escolha do jogador
    switch (iniciar) {
    
    case 1:
    
     // Entrada para a primeira carta
    printf("Adicione o código da carta: \n");
    scanf("%d", &codigo);

    // Solicita e lê as informações da primeira carta
    printf("Digite a área territorial (em KM²) da cidade 1: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    // Cálculos de densidade populacional e PIB per capita
    DensidadePopulacional = populacao / area;
    PibPercapita = pib / populacao;
    
    // Geração de valores aleatórios para o segundo jogador (Player 2)
    srand (time(0));  // Semente para a geração de números aleatórios
    float populacao2 = rand() % 1000000 + 100000; // População aleatória
    float area2 = rand() % 100000 + 1000;  // Área aleatória
    float pib2 = rand() % 10;  // PIB aleatório
    // Cálculo da Densidade Populacional e PIB per capita para o Player 2
    float densidadePopulacional2 = populacao2 / area2;
    float pibPercapita2 = pib2 / populacao2;
    
    // Exibe as informações do Player 2
    printf("********************************\n");
    printf ("**Player 2**\n");
    printf ("Populacao: %d\n",populacao2);
    printf ("Area: %.5f\n ",area2);
    printf ("Pib: %.2f\n", pib2);
    printf ("*******************************\n");
    
    // Comparação entre os valores de Player 1 e Player 2 para determinar o vencedor
    if (DensidadePopulacional == densidadePopulacional2 && PibPercapita == pibPercapita2) {
        printf ("Empate\n");
    } else if  (DensidadePopulacional < densidadePopulacional2 && PibPercapita < pibPercapita2) {
        printf ("Jogador código %d ganhou\n", codigo);
    } else {
        printf ("Jogador código %d perdeu\n", codigo);
    }

    break;
    
   case 2:
   
    // Exibe as regras do jogo
    printf("\nRegras do Jogo:\n");
    printf("=========================================\n");
    printf("O Super Trunfo de Países é um jogo de cartas onde o objetivo é comparar os valores das\n");
    printf("informações de cada país e vencer as rodadas. Cada carta possui as seguintes informações:\n");
    printf("- PIB (Produto Interno Bruto)\n");
    printf("- População\n");
    printf("- Área total\n");
    printf("\nComo jogar:\n");
    printf("1. Cada jogador escolhe uma carta de seu baralho.\n");
    printf("2. O jogador que escolher a carta com o valor mais alto em uma das categorias (PIB, população ou área)\n");
    printf("   vence a rodada e pega a carta do adversário.\n");
    printf("3. O jogo continua até que todos as cartas sejam disputadas.\n");
    printf("4. O jogador com mais cartas ao final é o vencedor!\n");
    printf("\nBoa sorte e divirta-se!\n");

   break;
   
   case 3:
   // Exibe uma mensagem de saída
   printf ("sair do jogo\n");
   break;
   
   default:
   // Caso o jogador escolha uma opção inválida
   printf("Opcão indisponível\n");
    }
   
    return 0;
}