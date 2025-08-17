#include <stdio.h>


int main() {
    
//carta numero 1//

    char estado1;
    char codigo1[4];
    char nomeCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPorCapita1;

//carta numero 2//

    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPorCapita2;

printf("Cadrasto carta 1\n");

printf("Digite o estado(letra A a H: ");
scanf(" %c", &estado1);

printf("Digite o código da carta (Ex: A01): ");
scanf(" %s", codigo1);

printf("Digite o nome da cidade (sem espaços): ");
scanf(" %s", nomeCidade1);

printf("Digite a população: ");
scanf("%d", &populacao1);

printf("Digite a área em km²: ");
scanf("%f", &area1);

printf("Digite o PIB (em bilhões de reais): ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &pontosTuristicos1);

// Cálculos carta 1

densidade1 = populacao1 / area1;
pibPorCapita1 = pib1 / populacao1; 

// Carta 2 //

printf("\nCadrasto da Carta 2:\n");

printf("Digite o estado (letra de A a H): ");
scanf(" %c", &estado2);

printf("Digite o código da carta (Ex: B02): ");
scanf(" %s", codigo2);

printf("Digite o nome da cidade (sem espaço): ");
scanf(" %s", nomeCidade2);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área em km²: ");
scanf("%f", &area2);

printf("Digite o PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Digite o númerode pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

// Cálculos carta 2

densidade2 = populacao2 / area2;
pibPorCapita2 = pib2 / populacao2;

//Dados//

printf("\nCarta 1:\n");
printf("Estado %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Túristicos: %d\n", pontosTuristicos1);
printf("Densidade População: %2.f habs/km²\n", densidade1);
printf("PIB per Capita: %2.f reais\n", pibPorCapita1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f km²\n", pib2);
printf("Número de Pontos Túristicos: %d\n", pontosTuristicos2);
printf("Densidade População: %2.f habs/km²\n", densidade2);
printf("PIB per Capta: %2.f reais\n", pibPorCapita2);


return 0;






return 0;


}
