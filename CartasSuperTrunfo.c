#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das cartas
int main() {
    // Carta 1 (Belém)
    char Estado1[50];
    strcpy(Estado1, "Pará");

    char Codigo_da_carta[50];
    strcpy(Codigo_da_carta, "A01");

    char Nome_da_cidade[50];
    strcpy(Nome_da_cidade, "Belém");

    int Populacao = 321000;
    float Area = 215.0; // km²
    float Pib = 351000.0; // Valor
    int Pontos_turisticos = 80;

    // Variáveis para armazenar o resultado do cálculo
    float Densidade_populacional1;
    float Pib_per_capita1;

    // Cálculo da densidade populacional e PIB per capita para a Carta 1
    Densidade_populacional1 = (float)Populacao / Area; 
    Pib_per_capita1 = Pib / (float)Populacao;

    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", Codigo_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d\n", Populacao);
    printf("Area: %.1f km2\n", Area);
    printf("Pib: %.2f\n" , Pib);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km2\n", Densidade_populacional1);
    printf("PIB per capita: %.2f\n", Pib_per_capita1);

    // Carta 2 (Maceió)
    char Estado2[50];
    strcpy(Estado2, "Alagoas");

    char Codigo_da_carta2[50];
    strcpy(Codigo_da_carta2, "A02");

    char Nome_da_cidade2[50];
    strcpy(Nome_da_cidade2, "Maceió");

    int Populacao2 = 1020000;
    float Area2 = 511.0; // km²
    float Pib2 = 10920000.0; // Valor
    int Pontos_turisticos2 = 90;

    // Variáveis para armazenar o resultado do cálculo da Carta 2
    float Densidade_populacional2;
    float Pib_per_capita2;

    // Cálculo da densidade populacional e PIB per capita para a Carta 2
    Densidade_populacional2 = (float)Populacao2 / Area2;
    Pib_per_capita2 = Pib2 / (float)Populacao2;

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", Codigo_da_carta2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("População: %d\n", Populacao2);
    printf("Area: %.1f km2\n", Area2);
    printf("Pib: %.2f\n" , Pib2);
    printf("Pontos turisticos: %d\n", Pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km2\n", Densidade_populacional2);
    printf("PIB per capita: %.2f\n", Pib_per_capita2);

    // Comparação entre as cartas
    printf("\n--- Comparação das Cartas ---\n");

    // Comparação de População
    // Se População1 for maior, Belém vence. Caso contrário, Maceió vence (incluindo empate)
    if (Populacao > Populacao2) {
        printf("População: %s (%d) vence %s (%d)\n", Nome_da_cidade, Populacao, Nome_da_cidade2, Populacao2);
    } else {
        printf("População: %s (%d) vence %s (%d)\n", Nome_da_cidade2, Populacao2, Nome_da_cidade, Populacao);
    }

    // Comparação de Área
    if (Area > Area2) {
        printf("Area: %s (%.1f) vence %s (%.1f)\n", Nome_da_cidade, Area, Nome_da_cidade2, Area2);
    } else {
        printf("Area: %s (%.1f) vence %s (%.1f)\n", Nome_da_cidade2, Area2, Nome_da_cidade, Area);
    }

    // Comparação de PIB
    if (Pib > Pib2) {
        printf("PIB: %s (%.2f) vence %s (%.2f)\n", Nome_da_cidade, Pib, Nome_da_cidade2, Pib2);
    } else {
        printf("PIB: %s (%.2f) vence %s (%.2f)\n", Nome_da_cidade2, Pib2, Nome_da_cidade, Pib);
    }

    // Comparação de Pontos Turísticos
    if (Pontos_turisticos > Pontos_turisticos2) {
        printf("Pontos Turísticos: %s (%d) vence %s (%d)\n", Nome_da_cidade, Pontos_turisticos, Nome_da_cidade2, Pontos_turisticos2);
    } else {
        printf("Pontos Turísticos: %s (%d) vence %s (%d)\n", Nome_da_cidade2, Pontos_turisticos2, Nome_da_cidade, Pontos_turisticos);
    }

    // Comparação de Densidade Populacional
    if (Densidade_populacional1 > Densidade_populacional2) {
        printf("Densidade Populacional: %s (%.2f) vence %s (%.2f)\n", Nome_da_cidade, Densidade_populacional1, Nome_da_cidade2, Densidade_populacional2);
    } else {
        printf("Densidade Populacional: %s (%.2f) vence %s (%.2f)\n", Nome_da_cidade2, Densidade_populacional2, Nome_da_cidade, Densidade_populacional1);
    }
    
    // Comparação de PIB per capita
    if (Pib_per_capita1 > Pib_per_capita2) {
        printf("PIB per capita: %s (%.2f) vence %s (%.2f)\n", Nome_da_cidade, Pib_per_capita1, Nome_da_cidade2, Pib_per_capita2);
    } else {
        printf("PIB per capita: %s (%.2f) vence %s (%.2f)\n", Nome_da_cidade2, Pib_per_capita2, Nome_da_cidade, Pib_per_capita1);
    }

    return 0;
}