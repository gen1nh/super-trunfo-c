#include <stdio.h>

int main() {
    char estado_carta1;
    char codigo_carta1[5];
    char nome_cidade_carta1[50];
    int populacao_carta1;
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    char estado_carta2;
    char codigo_carta2[5];
    char nome_cidade_carta2[50];
    int populacao_carta2;
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

    printf("Bem-vindo ao cadastro de cartas do Super Trunfo de Cidades!\n");
    printf("============================================================\n\n");

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado_carta1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_carta1);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_carta1);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area_carta1);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib_carta1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta1);
    
    printf("\nCarta 1 cadastrada com sucesso!\n\n");

    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (uma letra de A a H): ");
    scanf(" %c", &estado_carta2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade_carta2);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao_carta2);

    printf("Digite a area da cidade (em km2): ");
    scanf("%f", &area_carta2);

    printf("Digite o PIB da cidade (em bilhoes): ");
    scanf("%f", &pib_carta2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_carta2);
    
    printf("\nCarta 2 cadastrada com sucesso!\n\n");

    printf("============================================================\n");
    printf("          EXIBINDO CARTAS CADASTRADAS\n");
    printf("============================================================\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_carta1);
    printf("Codigo: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade_carta1);
    printf("Populacao: %d\n", populacao_carta1);
    printf("Area: %.2f km2\n", area_carta1);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta1);
    
    printf("\n------------------------------------------------------------\n\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_carta2);
    printf("Codigo: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade_carta2);
    printf("Populacao: %d\n", populacao_carta2);
    printf("Area: %.2f km2\n", area_carta2);
    printf("PIB: %.2f bilhoes de reais\n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_carta2);
    printf("\n");

    return 0;
}
