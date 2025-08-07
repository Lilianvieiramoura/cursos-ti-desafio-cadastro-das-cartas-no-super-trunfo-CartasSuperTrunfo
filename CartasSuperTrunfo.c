#include <stdio.h>
#include <string.h>
// initial commit
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char estado1[3];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int quantidadePontosTuristicos1;

    char estado2[3];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int quantidadePontosTuristicos2;

    printf("Carta 1\n");
    printf("Digite o Estado: \n");
    scanf("%2s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%4s", codigo1);

    getchar(); // consome o \n deixado pelo scanf, sem usar while.

    printf("Digite o nome da cidade: \n");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove o '\n' do final

    printf("Digite a população: \n");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a área(em km2): \n");
    scanf("%f", &area1);
    getchar();

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    getchar();

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos1);

    float densidade1 = (float)populacao1 / area1;                  // populacao / area
    float pibPerCapita1 = (float)(pib1 * 1000000000) / populacao1; // PIB em reais / populacao

    printf("\n");
    printf("\nCarta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade:  %s \n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", quantidadePontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

    printf("\nCarta 2\n");
    printf("Digite o Estado: \n");
    scanf("%2s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%4s", codigo2);

    getchar(); // consome o \n deixado pelo scanf, sem usar while.

    printf("Digite o nome da cidade: \n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // remove o '\n' do final

    printf("Digite a população: \n");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a área(em km2): \n");
    scanf("%f", &area2);
    getchar();

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    getchar();

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &quantidadePontosTuristicos2);

    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (float)(pib2 * 1000000000) / populacao2;

    printf("\n");
    printf("\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade:  %s \n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", quantidadePontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

    return 0;
}
