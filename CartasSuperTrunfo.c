#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível Mestre você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis da carta 1
    char estado_1[10];
    char codigoCarta_1[10];
    char Cidade_1[50];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    int n_pontos_turisticos_1;
    float densidade_populacional_1;
    float pib_per_capita_1;
    float superpoder_1;

   // Área para definição das variáveis da carta 2

    char estado_2[10];
    char codigoCarta_2[10];
    char Cidade_2[50];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    int n_pontos_turisticos_2;
    float densidade_populacional_2;
    float pib_per_capita_2;
    float superpoder_2;

  // Área para entrada de dados da carta 1
    
    printf("Digite o codigo da carta 1: ");
    scanf("%s", codigoCarta_1);
    printf("Digite o nome do estado da carta 1: ");
    scanf("%s", estado_1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", Cidade_1);
    printf("Digite a populacao da cidade 1: ");
    scanf("%lu", &populacao_1);
    printf("Digite a área da cidade 1: ");
    scanf("%f", &area_1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib_1);
    printf("Digite o número de pontos turísticos da cidade 1: ");
    scanf("%d", &n_pontos_turisticos_1);

    // Área para entrada de dados da carta 2
    
    printf("\nDigite o codigo da carta 2: ");
    scanf("%s", codigoCarta_2);
    printf("Digite o nome do estado da carta 2: ");
    scanf("%s", estado_2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", Cidade_2);
    printf("Digite a populacao da cidade 2: ");
    scanf("%lu", &populacao_2);
    printf("Digite a área da cidade 2: ");
    scanf("%f", &area_2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib_2);
    printf("Digite o número de pontos turísticos da cidade 2: ");
    scanf("%d", &n_pontos_turisticos_2);

    // Área para exibição dos dados carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado_1);
    printf("Codigo: %s\n", codigoCarta_1);
    printf("Cidade: %s\n", Cidade_1);
    printf("População: %lu\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f Bilhões de reais\n", pib_1);
    printf("Número de pontos turísticos: %d\n", n_pontos_turisticos_1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_1 = (float) populacao_1 / area_1);
    printf("PIB per capita: %.2f mil reais\n", pib_per_capita_1 = pib_1 / populacao_1);
    printf("Superpoder: %.2f\n", superpoder_1= populacao_1 + area_1 + pib_1 + n_pontos_turisticos_1 + densidade_populacional_1 + pib_per_capita_1);

    // Área para exibição dos dados carta 2
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado_2);
    printf("Codigo: %s\n", codigoCarta_2);
    printf("Cidade: %s\n", Cidade_2);
    printf("População: %lu\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f Bilhões de reais\n", pib_2);
    printf("Número de pontos turísticos: %d\n", n_pontos_turisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional_2 = (float) populacao_2 / area_2);
    printf("PIB per capita: %.2f mil reais\n", pib_per_capita_2 = pib_2 / populacao_2);
    printf("Superpoder: %.2f\n", superpoder_2= populacao_2 + area_2 + pib_2 + n_pontos_turisticos_2 + densidade_populacional_2 + pib_per_capita_2);

    // Área para comparação dos atributos
    
    printf("\nComparação das cartas:\n");
    printf("\nPopulação: %lu\n", populacao_1 > populacao_2);
    printf("Área: %d\n", area_1 > area_2);
    printf("PIB: %d\n", pib_1 > pib_2);
    printf("Número de pontos turísticos: %d\n", n_pontos_turisticos_1 > n_pontos_turisticos_2);
    printf("Densidade populacional: %d\n", densidade_populacional_1 < densidade_populacional_2);
    printf("PIB per capita: %d\n", pib_per_capita_1 > pib_per_capita_2);
    printf("Superpoder: %d\n", superpoder_1 > superpoder_2);


return 0;
} 
