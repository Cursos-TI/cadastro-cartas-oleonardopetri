#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
 // Declara as variáveis da Carta 1:
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    int pontos_turisticos1;
    float area1;
    float PIB1;

    // Declara as variáveis da Carta 2:
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float PIB2;

      // Área para entrada de dados
    // Solicita os dados da carta 1 para o usuário
    printf("Insira os dados da Carta 1\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1); 
    printf("\n");

    printf("Digite o codigo: ");
    scanf("%s", codigo1);  
    printf("\n");

    printf("Cidade: ");
    scanf("%s", cidade1);  
    printf("\n");

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("\n");

    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("\n");

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);
    printf("\n");
    
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    printf("\n");

    // Solicita os dados da carta 2 para o usuário:
    printf("Insira os dados da Carta 2\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);  
    printf("\n");

    printf("Digite o codigo: ");
    scanf("%s", codigo2);  
    printf("\n");

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);  
    printf("\n");

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("\n");

    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("\n");

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);
    printf("\n");

    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    printf("\n");

    // Área para exibição dos dados da cidade
    // Imprime na tela os dados da carta 1 fornecidos pelo usuário
    printf("Dados da carta nº1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1); 
    printf("Nome da cidade: %s\n", cidade1);  
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);  
    printf("PIB: %.2f\n", PIB1);  
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Imprime na tela os dados da carta 2 fornecidos pelo usuário
    printf("Dados da carta nº2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);  
    printf("Nome da cidade: %s\n", cidade2);  
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);  
    printf("PIB: %.2f\n", PIB2); 
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
} 
