// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
//Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {
  //Declarando Carta 1

  char estado1;
  char codigo1[4];
  char nomeCidade[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosTuristicos1;
  float densidadePopulacional1;
  float pibPerCapita1;

  //Declarando Carta 2
  char estado2;
  char codigo2[4];
  char nomeCidade2[50];
  int populacao2;
  float area2;
  float pib1;
  int pontosTuristicos2;
  float densidadePopulacional2;
  float pibPerCapita2;

  //Entrada de dados Carta 1 
    printf("Cadastro da Carta 1\n");
    printf("--------------------\n");

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade1);

    print ("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1= (pib * 1000000000) / populacao1;

    densidadePopulacional1 = populacao2 / area2;
    pibPerCapita2= (pib * 1000000000) / populacao2;

  //Entrada de dados Carta 2 
    printf("Cadastro da Carta 2\n");
    printf("--------------------\n");

    printf("Digite o estado (A-H): ");
    scanf("%c", &estado2);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%[^\n]", nomeCidade2);

    print ("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

  //Exibir informações das cartas ---

    printf("\n----------------------\n");
    printf("         CARTA 1\n");
    printf("Estado: %c\n, estado1");
    printf("Codigo: %s\n, codigo1");
    printf("Nome da Cidade: %s\n, nomeCidade1");
    printf("Populalao: %d habitantes \n, populacao1");
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %f.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

     printf("\n----------------------\n");
    printf("         CARTA 2\n");
    printf("Estado: %c\n, estado2");
    printf("Codigo: %s\n, codigo2");
    printf("Nome da Cidade: %s\n, nomeCidade2");
    printf("Populalao: %d habitantes \n, populacao2");
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %f.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
  
  
  

  
return 0;
} 
