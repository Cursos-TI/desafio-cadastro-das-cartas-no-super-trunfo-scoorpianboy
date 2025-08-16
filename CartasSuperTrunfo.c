#include <stdio.h>

int main () {
    /* -------- Carta 1 -------- */
    char estado1[50];
    char codigo1[4];         /* A01 -> 3 chars + '\0' */
    char cidade1[50];        /* até 49 chars + '\0' */
    int populacao1, pontos1;
    float area1, pib1;       /* PIB em bilhões de reais */

    /* -------- Carta 2 -------- */
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    int populacao2, pontos2;
    float area2, pib2;       /* PIB em bilhões de reais */

    /* -------- Novas variáveis calculadas -------- */
    float densidade1, pib_per_capita1;
    float densidade2, pib_per_capita2;

    printf("=== Cadastro de Cartas do Super Trunfo (2 cartas) ===\n");
    printf("Use ponto como separador decimal (ex.: 1521.11)\n\n");

    /* -------- Leitura da Carta 1 -------- */
    printf("Carta 1 - Estado (Nome completo): \n");
    scanf(" %49[^\n]", estado1);

    printf("Carta 1 - Codigo (ex.: A01): \n");
    scanf(" %3s", codigo1);

    printf("Carta 1 - Nome da Cidade: \n");
    scanf(" %49[^\n]", cidade1);

    printf("Carta 1 - Populacao (inteiro): \n");
    scanf(" %d", &populacao1);

    printf("Carta 1 - Area em km2 (ex.: 1521.11): \n");
    scanf(" %f", &area1);

    printf("Carta 1 - PIB em bilhoes de reais (ex.: 699.28): \n");
    scanf(" %f", &pib1);

    printf("Carta 1 - Numero de Pontos Turisticos (inteiro): \n");
    scanf(" %d", &pontos1);

    printf("\n");

    /* -------- Leitura da Carta 2 -------- */
    printf("Carta 2 - Estado (Nome completo): \n");
    scanf(" %49[^\n]", estado2);

    printf("Carta 2 - Codigo (ex.: B02): \n");
    scanf(" %3s", codigo2);

    printf("Carta 2 - Nome da Cidade: \n");
    scanf(" %49[^\n]", cidade2);

    printf("Carta 2 - Populacao (inteiro): \n");
    scanf(" %d", &populacao2);

    printf("Carta 2 - Area em km2 (ex.: 1200.25): \n");
    scanf(" %f", &area2);

    printf("Carta 2 - PIB em bilhoes de reais (ex.: 300.50): \n");
    scanf(" %f", &pib2);

    printf("Carta 2 - Numero de Pontos Turisticos (inteiro): \n");
    scanf(" %d", &pontos2);

    printf("\n");

    /* -------- Cálculos --------
       - Densidade: hab/km²
       - PIB per capita: reais por pessoa (converter bilhões -> reais)
    */
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;

    /* -------- Exibição -------- */
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}



