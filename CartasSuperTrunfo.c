#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

int main() {
    // Carta 1
    char Estado1[50];
    strcpy(Estado1, "Pará");

    char Codigo_da_carta[50];
    strcpy(Codigo_da_carta, "A01");

    char Nome_da_cidade[50];
    strcpy(Nome_da_cidade, "Belém");

    int População = 321000;
    float Area = 215.0;
    float Pib = 351000.0;
    int Pontos_turisticos = 80;

    // Variáveis para armazenar o resultado do cálculo
    float Densidade_populacional;
    float Pib_per_capita;

    // Cálculo da densidade populacional e PIB per capita para a Carta 1
    Densidade_populacional = População / Area;
    Pib_per_capita = Pib / População;

    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", Codigo_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d\n", População);
    printf("Area: %.1f\n", Area);
    printf("Pib: %.2f\n" , Pib);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km2\n", Densidade_populacional);
    printf("PIB per capita: %.2f\n", Pib_per_capita);

    // Carta 2
    char Estado2[50];
    strcpy(Estado2, "Alagoas");

    char Codigo_da_carta2[50];
    strcpy(Codigo_da_carta2, "A02");

    char Nome_da_cidade2[50];
    strcpy(Nome_da_cidade2, "Maceió");

    int População2 = 1020000;
    float Area2 = 511.0;
    float Pib2 = 10920000.0;
    int Pontos_turisticos2 = 90;

    // Cálculo da densidade populacional e PIB per capita para a Carta 2
    Densidade_populacional = População2 / Area2;
    Pib_per_capita = Pib2 / População2;

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", Codigo_da_carta2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("População: %d\n", População2);
    printf("Area: %.1f\n", Area2);
    printf("Pib: %.2f\n" , Pib2);
    printf("Pontos turisticos: %d\n", Pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km2\n", Densidade_populacional);
    printf("PIB per capita: %.2f\n", Pib_per_capita);

    return 0;
}