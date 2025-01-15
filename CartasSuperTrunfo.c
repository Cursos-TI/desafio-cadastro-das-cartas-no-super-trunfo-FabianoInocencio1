#include <stdio.h>

int main() {

  printf("Desafio Super Trunfo - Países\n");

int codigoDaCidade, pontoTuristico;
char nome [50];
float area, pib, populacao, DensidadePopulacional, PibPercapita;

printf ("Adicione o código da cidade: \n");
scanf ("%d", &codigoDaCidade);

printf("Informe o número de pontos turísitico:\n");
scanf ("%d", &pontoTuristico);

printf ("Adicione a cidade: \n");
 scanf ("%s", &nome);

printf ("Digite a área territorial por KM da cidade: \n");
scanf ("%f", &area);

printf ("Digite o pib:\n");
scanf ("%f", &pib);

printf ("Digite a populacao:\n");
scanf ("%f", &populacao);

DensidadePopulacional = populacao / area;
PibPercapita = pib / populacao * 100;


printf("Código da cidade:  %d\n", codigoDaCidade);
printf("Número de ponto turístico: %d\n", pontoTuristico);
printf ("Cidade:  %s \n", nome);
printf ("Area Territorial: %.2f KM² \n", area);
printf ("Digite o PIB: %.2f  \n",pib);
printf ("População: %.3f  \n ", populacao);
printf ("Desindade Populacional: %.2f\n", DensidadePopulacional);
printf ("Pib Percapita: %f %\n", PibPercapita);

return 0;

}


