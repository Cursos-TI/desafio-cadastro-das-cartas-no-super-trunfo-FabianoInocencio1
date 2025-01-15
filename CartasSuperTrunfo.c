#include <stdio.h>

int main() {

  printf("Desafio Super Trunfo - Países\n");

int codigoDaCarta, pontoTuristico, populacao;
char nome [50];
float area, pib, DensidadePopulacional, PibPercapita;

printf ("Adicione o código da carta: \n");
scanf ("%d", &codigoDaCarta);

printf("Informe o número de pontos turísitico:\n");
scanf ("%d", &pontoTuristico);

printf ("Adicione a cidade: \n");
 scanf ("%s", &nome);

printf ("Digite a área territorial por KM da cidade: \n");
scanf ("%f", &area);

printf ("Digite o pib:\n");
scanf ("%f", &pib);

printf ("Digite a populacao:\n");
scanf ("%d", &populacao);

DensidadePopulacional = populacao / area;
PibPercapita = pib / populacao * 100;


printf("Código da carta:  %d\n", codigoDaCarta);
printf("Número de ponto turístico: %d\n", pontoTuristico);
printf ("Cidade:  %s \n", nome);
printf ("Area Territorial: %.2f KM² \n", area);
printf ("Digite o PIB: %.2f  \n",pib);
printf ("População: %.d  \n ", populacao);
printf ("Desindade Populacional: %.2f\n", DensidadePopulacional);
printf ("Pib Percapita: %f %\n", PibPercapita);

return 0;

}


