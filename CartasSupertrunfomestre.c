#include <stdio.h>   // Biblioteca padrão para funções de entrada e saída (printf, scanf)
#include <stdlib.h>  // Biblioteca para funções padrão, mas não estamos usando diretamente aqui
#include <time.h>    // Biblioteca para manipulação de tempo, mas também não usada aqui

 // Função principal onde o programa começa sua execução

int main(){
    
    // Declaração das variáveis:
    char  cidade[100];
    int numeroDeponto;
    float populacao, area, pib, pibPercapita, DensidadePopulacional;
    
      // Entrada de dados:
    printf ("**Super trunfo Cidades**\n");  
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
    
    
    
    float jogador = pibPercapita + DensidadePopulacional + numeroDeponto;
    

    srand (time(0));
    // Geração de valores aleatórios para a população, área e PIB
    float populacao2 = rand() % 1000000 + 100000; 
    float area2 = rand() % 100000 + 1000;  
    float pib2 = rand() % 10; 
    int numeroDeponto2 = rand() % 10 + 1;
    // calulos do jogador 2
 float   pibPercapita2 = (pib / populacao);
float    DensidadePopulacional2 = (populacao2 / area2);



    
    float computador = DensidadePopulacional2 + pibPercapita2 + numeroDeponto2;

    
    // printf usado para colocar espaço e deixar o programa organizado aos olhos do usuário.
    printf ("\n");
    
    // Saída de dados do jogador 1
   // Exibindo as informações do Jogador
printf("Jogador 1:\n");
printf("A cidade escolhida: %s\n", cidade);
printf("Número de pontos de acesso: %d\n", numeroDeponto);  
printf("População: %.0f\n", populacao);  
printf("Área: %.0f km²\n", area);  
printf("PIB: %.2f\n", pib);  
printf("PIB per capita: %.2f\n", pibPercapita);  
printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional);  
    printf ("\n");
     // Exibindo informações do jogador 2 (computador)
    printf("Computador (Jogador 2):\n");
    printf("População: %.0f\n", populacao2);
    printf("Área: %.0f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos de acesso: %d\n", numeroDeponto2);
    printf("PIB per capita: %.2f\n", pibPercapita2);
    printf("Densidade populacional: %.2f habitantes/km²\n", DensidadePopulacional2);    

printf ("\n");
  
  if (jogador == computador) {
    printf("Empate\n");  // Caso o jogador e o computador tenham o mesmo valor (empate)
} else if (jogador > computador) {  // Condição para verificar se o jogador ganhou
    printf("Jogador ganhou\n");
} else {  // Caso contrário, o computador ganhou
    printf("Computador ganhou\n");
}
    

    
    // Finaliza a execução do programa e retorna 0, indicando sucesso
    return 0;
}