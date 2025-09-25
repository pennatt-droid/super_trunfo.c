#include <stdio.h>

int main() {

    int populacao1, pontos1;
    char estado1[4], nome1[50], codigo1[10];
    float area1, pib1, pibPerCapita1, densidade1;

 
    int populacao2, pontos2;
    char estado2[4], nome2[50], codigo2[10];
    float area2, pib2, pibPerCapita2, densidade2;

    printf("=== CADASTRO DA CARTA 1 ===\n");

    printf("Digite o nome da cidade: ");
    scanf(" %s", nome1); 
    printf("Digite o estado (sigla): ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos1);


    pibPerCapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;


    printf("\n=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite o estado (sigla): ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite os pontos turisticos: ");
    scanf("%d", &pontos2);

    pibPerCapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;


    printf("\n===== DADOS DA CARTA 1 =====\n");
    printf("Cidade: %s\n", nome1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Densidade populacional: %.2f\n", densidade1);

    printf("\n===== DADOS DA CARTA 2 =====\n");
    printf("Cidade: %s\n", nome2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Densidade populacional: %.2f\n", densidade2);


        printf("Comparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("População: Carta 2 venceu (%d)\n", populacao2 > populacao1);

    
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("Área: Carta 2 venceu (%d)\n", area2 > area1);

   
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("PIB: Carta 2 venceu (%d)\n", pib2 > pib1);

  
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Pontos Turísticos: Carta 2 venceu (%d)\n", pontos2 > pontos1);

 
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 > densidade2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade2 > densidade1);

   
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("PIB per Capita: Carta 2 venceu (%d)\n", pibPerCapita2 > pibPerCapita1);
   
   float superTrunfo1 = populacao1 + area1 + pib1 + pibPerCapita1 + (1 / densidade1) + pontos1;
   float superTrunfo2 = populacao2 + area2 + pib2 + pibPerCapita2 + (1 / densidade2) + pontos2;

   printf("Valor do Super Trunfo Carta 1: %.2f\n", superTrunfo1);
   printf("Valor do Super Trunfo Carta 2: %.2f\n", superTrunfo2);

   printf("Super Trunfo: Carta 1 venceu (%d)\n", superTrunfo1 > superTrunfo2);
   printf("Super Trunfo: Carta 2 venceu (%d)\n", superTrunfo2 > superTrunfo1);
   
   return 0;
}
