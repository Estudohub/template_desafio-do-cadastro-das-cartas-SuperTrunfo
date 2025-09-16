#include <stdio.h>
#include <string.h> // AQUI ESTÁ A BIBLIOTECA DA FUNÇÃO

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas

#include <stdio.h>
#include <string.h> // AQUI ESTÁ A BIBLIOTECA DA FUNÇÃO

int main() {
   // Carta1;
    char Estado1[50];
    strcpy(Estado1, "Pará");

    char Codigo_da_carta[50];
    strcpy(Codigo_da_carta, "A01");

    char Nome_da_cidade[50];
    strcpy(Nome_da_cidade, "Belém");

    int População = 321000;
    float Area = 215.0;
    float Pib = 321000.0;
    int Pontos_turisticos = 80;

    printf("Carta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo da carta: %s\n", Codigo_da_carta);
    printf("Nome da cidade: %s\n", Nome_da_cidade);
    printf("População: %d\n", População);
    printf("Area: %.1f\n", Area);
    printf("Pib: %.2f\n" , Pib);
    printf("Pontos turisticos: %d\n", Pontos_turisticos);


    //Carta2;
    char Estado2[50];
    strcpy(Estado2, "Alagoas");

    char Codigo_da_carta2[50];
    strcpy(Codigo_da_carta2, "A02");

    char Nome_da_cidade2[50];
    strcpy(Nome_da_cidade2, "Maceió");

    int População2 = 1020000;
    float Area2 = 511.0;
    float Pib2 = 1020000.0;
    int Pontos_turisticos2 = 90;

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo da carta: %s\n", Codigo_da_carta2);
    printf("Nome da cidade: %s\n", Nome_da_cidade2);
    printf("População: %d\n", População2);
    printf("Area: %.1f\n", Area2);
    printf("Pib: %.2f\n" , Pib2);
    printf("Pontos turisticos: %d\n", Pontos_turisticos2);



    return 0;
}
