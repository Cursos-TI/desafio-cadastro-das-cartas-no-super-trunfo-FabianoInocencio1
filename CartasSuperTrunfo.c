#include <stdio.h>

int main() {

  printf("Desafio Super Trunfo - Países\n");

int codigoDaCidade;
char nome [50];
float area, pib, populacao;

printf ("Adicione o código da cidade: \n");
scanf ("%d", &codigoDaCidade);

printf ("Adicione o nome de um ponto turístico: \n");
 scanf ("%s", &nome);

printf ("Digite a área territorial por KM da cidade: \n");
scanf ("%f", &area);

printf ("Digite o pib:\n");
scanf ("%f", &pib);

printf ("Digite a populacao:\n");
scanf ("%f", &populacao);

printf("Código da cidade:  %d\n", codigoDaCidade);
printf ("Nome dos pontos turísiticos:  %s \n", nome);
printf ("Area Territorial: %.3f KM² \n", area);
printf ("Digite o PIB: %.2f  \n",pib);
printf ("População: %.3f  \n ", populacao);


return 0;

}


