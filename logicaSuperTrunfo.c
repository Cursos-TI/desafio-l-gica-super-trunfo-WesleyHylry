#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

// cadastro e exibir duas cartas
int main() {
    //variáveis para a primeira carta
    char estado1;
    char codigo1[4]; 
    //maximo de caracteres
    char nomeCidade1[50];     
    // Nome da cidade com numeros de caracteres maximos
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    //variaveis para calculo carta 1
    // agora com o novo desafio parte dois irei comentar as partes desnecessárias
    /*float densidade1, pibPerCapita1; 
    float superPoder1; */

    // variáveis segunda
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    //acrescentando 
    /*float densidade2, pibPerCapita2; 
    float superPoder2; */

    // os dados da primeira carta serão:
    printf("Cadastro da Carta 1\n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", nomeCidade1);  
    printf("Digite a Populacao: \n");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km²): \n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib1);
    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos1);

     // Cálculos Carta 1
    /*densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; 
    //acrescentando 
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    */

    printf("\n");

    // carta 2
    printf("Cadastro da Carta 2\n");
    printf("Digite o Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta (ex: B02): \n");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: \n");
    scanf(" %s", nomeCidade2);
    printf("Digite a Populacao: \n");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km²): \n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais): \n");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    /*
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 
    //acrescentando 
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
    */

    printf("\n");

    
    // Exibição dados 
    /*
    printf("\n=== Dados das Cartas Cadastradas ===\n");
    printf("Carta 1: Estado: %c | Codigo: %s | Nome: %s | Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d | Densidade: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibPerCapita1, superPoder1);
    printf("Carta 2: Estado: %c | Codigo: %s | Nome: %s | Populacao: %d | Area: %.2f | PIB: %.2f | Pontos Turisticos: %d | Densidade: %.2f | PIB per Capita: %.2f | Super Poder: %.2f\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibPerCapita2, superPoder2);
    vai ficar agora mais enxuto
    */
    printf("\n=== Comparacao de cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);

    /* Comparações (1 = Carta 1 venceu, 0 = Carta 2 venceu)
    printf("\n=== Comparacao Entre as Cartas ===\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); 
    // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
    
    agora substituindo essa parte do teste logico por uma mais estruturada */
    // novas adições
    
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}