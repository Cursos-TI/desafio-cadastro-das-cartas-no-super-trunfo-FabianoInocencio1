#include <stdio.h>   // Biblioteca padrão para funções de entrada e saída (printf, scanf)


 // Função principal onde o programa começa sua execução

int main(){
    
    // Declaração das variáveis:
    char  cidade [50];
    int numeroDeponto;
    float populacao, area, pib, pibPercapita, DensidadePopulacional;
    
      // Entrada de dados:

    printf ("Digite os dados:\n");
    printf ("Digite a ciadade:\n");
    fgets(cidade, sizeof(cidade), stdin);
    printf ("Numero dos pontos de acesso:\n");
    scanf ("%d", &numeroDeponto);
    printf ("Digite a população:\n");
    scanf ("%f",&populacao);
    printf ("Digite a área:\n");
    scanf ("%f", &area);
    printf ("Digite o pib:\n");
    scanf ("%f", &pib);
    
    // Calculos do pib percapita e Desindiade populacional.
    pibPercapita = (pib / populacao);
    DensidadePopulacional = ( populacao / area);
    
    
    
    // printf usado para colocar espaço e deixar o programa organizado aos olhos do usuário.
    printf ("\n");
    
    // Saída de dados.
    printf ("Jogador 1:\n");
    printf ("A cidade escolhida: %s\n", cidade);
    printf ("O números de pontos de aceso: %d\n", numeroDeponto);
    printf ("A população é: %.2f\n", populacao);
    printf ("A área é: %.2f\n", area);
    printf ("O pib é: %.2f\n", pib);
    printf ("Pib percapita é: %2.f\n",  pibPercapita );
    printf ("Desindade Demográfica é: %2.f\n", DensidadePopulacional);
    

    // Finaliza a execução do programa e retorna 0, indicando sucesso
    return 0;
}