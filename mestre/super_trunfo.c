#include <stdio.h>

int main() {
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    unsigned long int populacao1;
    float area1;
    double pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    unsigned long int populacao2;
    float area2;
    double pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (A-Z): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhoes de reais (ex: 699.28): ");
    scanf("%lf", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (A-Z): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhoes de reais (ex: 300.50): ");
    scanf("%lf", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);

    printf("\n\n--- Cartas Cadastradas ---\n\n");
    printf("Carta 1: %s (%s)\n", nome_cidade1, codigo1);
    printf("Super Poder: %.2f\n\n", super_poder1);
    printf("Carta 2: %s (%s)\n", nome_cidade2, codigo2);
    printf("Super Poder: %.2f\n\n", super_poder2);

    printf("--- Comparacao de Cartas ---\n");

    int vitoria_pop = populacao1 > populacao2;
    int vitoria_area = area1 > area2;
    int vitoria_pib = pib1 > pib2;
    int vitoria_pontos = pontos_turisticos1 > pontos_turisticos2;
    int vitoria_densidade = densidade_populacional1 < densidade_populacional2;
    int vitoria_pib_capita = pib_per_capita1 > pib_per_capita2;
    int vitoria_super_poder = super_poder1 > super_poder2;

    printf("Populacao: %s (%d)\n", vitoria_pop ? "Carta 1 venceu" : "Carta 2 venceu", vitoria_pop);
    printf("Area: %s (%d)\n", vitoria_area ? "Carta 1 venceu" : "Carta 2 venceu", vitoria_area);
    printf("PIB: %s (%d)\n", vitoria_pib ? "Carta 1 venceu" : "Carta 2 venceu", vitoria_pib);
    printf("Pontos Turisticos: %s (%d)\n", vitoria_pontos ? "Carta 1 venceu" : "Carta 2 venceu", vitoria_pontos);
    printf("Densidade Populacional: %s (%d)\n", vitoria_densidade ? "Carta 1 venceu" : "Carta 2 venceu", vitoria_densidade);
    printf("PIB per Capita: %s (%d)\n", vitoria_pib_capita ? "Carta 1 venceu" : "Carta 2 venceu", vitoria_pib_capita);
    printf("Super Poder: %s (%d)\n", vitoria_super_poder ? "Carta 1 venceu" : "Carta 2 venceu", vitoria_super_poder);

    return 0;
}
