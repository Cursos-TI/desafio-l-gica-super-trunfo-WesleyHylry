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
    float densidade1;
    //float pibPerCapita1; 
    //float superPoder1;

    // variáveis segunda
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    //acrescentando 
    float densidade2; 
    // float pibPerCapita2; 
    // float superPoder2;

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
    // pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    // superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);
    
    densidade1 = (float)populacao1 / area1;

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
    // pibPerCapita2 = (pib2 * 1000000000) / populacao2; 
    // superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);
    
    densidade2 = (float) populacao2 / area2;

    printf("\n");

    
    // Exibição dados 

    printf("\n=== Comparacao de cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
    printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);

    /* Eliminando a poluição, eu ja estava ficando confuso*/
   
    // novas adições
    /*
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    } */

//comentando as partes substituidas
    // Novo menu interativo para escolha do atributo 
    /*int escolha;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Opcao: ");
    scanf("%d", &escolha);

    printf("\n=== Comparacao de cartas ===\n");*/

    /*switch (escolha) {
        case 1: 
        // Populacao
            printf("Atributo escolhido: Populacao\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2: 
        // Area
            printf("Atributo escolhido: Area\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: 
        // PIB
            printf("Atributo escolhido: PIB\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4: 
        // Pontos Turisticos
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("Carta 1 - %s: %d\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: 
        // Densidade Populacional
            printf("Atributo escolhido: Densidade Populacional (menor vence)\n");
            printf("Carta 1 - %s: %.2f\n", nomeCidade1, densidade1);
            printf("Carta 2 - %s: %.2f\n", nomeCidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }*/
    // agora em vez de um atributo, dois
    //mantendo os anteriores como comentario 
    int atributo1, atributo2;

    printf("\n=== COMPARACAO AVANCADA ===\n");
    printf("Escolha o primeiro atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\nOpcao: ");
    scanf("%d", &atributo1);

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    scanf("%d", &atributo2);

    while(atributo2 == atributo1){
        printf("Nao pode repetir! Escolha outro atributo: ");
        scanf("%d", &atributo2);
    }

    float valor1_atr1, valor2_atr1, valor1_atr2, valor2_atr2;

    switch(atributo1){
        case 1: valor1_atr1 = populacao1; valor2_atr1 = populacao2; break;
        case 2: valor1_atr1 = area1; valor2_atr1 = area2; break;
        case 3: valor1_atr1 = pib1; valor2_atr1 = pib2; break;
        case 4: valor1_atr1 = pontosTuristicos1; valor2_atr1 = pontosTuristicos2; break;
        case 5: valor1_atr1 = -densidade1; valor2_atr1 = -densidade2; break; // negativo pq menor vence
    }
    switch(atributo2){
        case 1: valor1_atr2 = populacao1; valor2_atr2 = populacao2; break;
        case 2: valor1_atr2 = area1; valor2_atr2 = area2; break;
        case 3: valor1_atr2 = pib1; valor2_atr2 = pib2; break;
        case 4: valor1_atr2 = pontosTuristicos1; valor2_atr2 = pontosTuristicos2; break;
        case 5: valor1_atr2 = -densidade1; valor2_atr2 = -densidade2; break;
    }

    float soma1 = valor1_atr1 + valor1_atr2;
    float soma2 = valor2_atr1 + valor2_atr2;

    printf("\nResultado avancado:\n");
    printf("Carta 1 (%s) soma = %.2f\n", nomeCidade1, soma1);
    printf("Carta 2 (%s) soma = %.2f\n", nomeCidade2, soma2);

    if(soma1 > soma2)
        printf("Resultado Final: Carta 1 venceu!\n");
    else if(soma2 > soma1)
        printf("Resultado Final: Carta 2 venceu!\n");
    else
        printf("Resultado Final: Empate!\n");

    return 0;
}