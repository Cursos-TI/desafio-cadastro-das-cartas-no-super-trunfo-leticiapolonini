#include <stdio.h>


int main() {
    char estado1;
    char codcarta1[10];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int pontosturisticos1;

    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codcarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos1);

 
    char estado2;
    char codcarta2[10];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int pontosturisticos2;

    printf("\nDigite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codcarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("\n--- Dados da Primeira Cidade ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codcarta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\n--- Dados da Segunda Cidade ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codcarta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
