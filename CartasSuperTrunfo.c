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

//carta numero 2//

    char estado2;
    char codigo2[4];
    char nomeCidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;



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

// Carta 2 //

printf("\nCadrasto da Carta 2:\n");

printf("Digite o estado (letra de A a H): ");
scanf(" %c", &estado2);

printf("Digite o código da carta (Ex: B02): ");
scanf("%s", codigo2);

printf("Digite o nome da cidade (sem espaço): ");
scanf("%s", &nomeCidade2);

printf("Digite a população: ");
scanf("%d", &populacao2);

printf("Digite a área em km²: ");
scanf("%f", &area2);

printf("Digite o PIB (em bilhões de reais): ");
scanf("%f", &pib2);

printf("Digite o númerode pontos turísticos: ");
scanf("%d", &pontosTuristicos2);

//Dados//

printf("\nCarta 1:\n");
printf("Estado %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", area1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Túristicos: %d\n", pontosTuristicos1);

printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: \n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", pontosTuristicos2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f km²\n", area2);
printf("Número de Pontos Túristicos: %d\n", pontosTuristicos2);

return 0;






return 0;


}
