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
    char comeCidade2[100];
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
sscanf("%s", codigo2);

printf("Digite o nome da cidade (sem espaço): ");
scanf("%s", &nomeCidade2);





return 0;


}
