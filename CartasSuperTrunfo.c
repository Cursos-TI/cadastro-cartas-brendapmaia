// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
//Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>
#include <string.h> 

int main() {
  // Declarando Carta 1
  char estado1[30];
  char codigo1[10];
  char nomeCidade1[50];
  unsigned long int populacao1;
  int numPontos1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float superPoder1;

  // Declarando Carta 2
  char estado2[30];
  char codigo2[10];
  char nomeCidade2[50];
  unsigned long int populacao2;
  int numPontos2;
  float area2;
  float pib2;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float superPoder2;

  // Entrada de dados Carta 1
  printf("Cadastro da Carta 1\n");
  printf("--------------------\n");

  printf("Digite o estado da carta 1: ");
  scanf("%s", estado1);

  printf("Digite o codigo da carta 1 (ex: A01): ");
  scanf("%s", codigo1);

  getchar(); 
  printf("Digite o nome da cidade 1: ");
  fgets(nomeCidade1, sizeof(nomeCidade1), stdin); 
  nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0'; 

  printf("Digite a populacao 1: ");
  scanf("%lu", &populacao1);

  printf("Digite a area (em km²): ");
  scanf("%f", &area1);

  printf("Digite o PIB (em bilhoes de reais): ");
  scanf("%f", &pib1);
    
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos1);

  densidadePopulacional1 = populacao1 / area1;
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

  // Entrada de dados Carta 2
  printf("\nCadastro da Carta 2\n");
  printf("--------------------\n");

  printf("Digite o estado da carta 2: ");
  scanf("%s", estado2);

  printf("Digite o codigo da carta 2 (ex: A01): ");
  scanf("%s", codigo2);

  getchar(); 
  printf("Digite o nome da cidade 2: ");
  fgets(nomeCidade2, sizeof(nomeCidade2), stdin); 
  nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0'; 

  printf("Digite a populacao 2: ");
  scanf("%lu", &populacao2);

  printf("Digite a area (em km²): ");
  scanf("%f", &area2);

  printf("Digite o PIB (em bilhoes de reais): ");
  scanf("%f", &pib2);
    
  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &pontosTuristicos2);

  densidadePopulacional2 = populacao2 / area2;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;
  superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2); 

  // Exibir informações das cartas
  printf("\n----------------------\n");
  printf("         CARTA 1\n");
  printf("Estado: %s\n", estado1);
  printf("Codigo: %s\n", codigo1); 
  printf("Nome da Cidade: %s\n", nomeCidade1);
  printf("Populacao: %lu habitantes\n", populacao1);
  printf("Area: %.2f km²\n", area1);
  printf("PIB: %.2f bilhoes de reais\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\n----------------------\n");
  printf("         CARTA 2\n");
  printf("Estado: %s\n", estado2); 
  printf("Codigo: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", nomeCidade2);
  printf("Populacao: %lu habitantes\n", populacao2); 
  printf("Area: %.2f km²\n", area2);
  printf("PIB: %.2f bilhoes de reais\n", pib2); 
  printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

  // Comparação
  printf("\n----------------------\n");
  printf("Comparação de Cartas:\n");
  printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
  printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

  return 0;
}

