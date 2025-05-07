#include <stdio.h>

int main() {
    // Variaveis da carta 1:
    char estado1;
    char cod_carta1[3];
    char nome_cidade1[10];
    int populacao1;
    int area1;
    float pib1;
    int ponto_turisticos1;

    // Adição das novas variaveis
    int densidade_populacional1;
    int Pib_capita1;

    // Variaveis da carta 2:
    char estado2;
    char cod_carta2[3];
    char nome_cidade2[10];
    int populacao2;
    float area2;
    float pib2;
    int ponto_turisticos2;

    //Adição das novas variaveis
    int densidade_populacional2;
    int Pib_capita2;


    //pedindo informações da carta 1:
    
    // Estado
    printf("Digite o estado da carta-(de A até H): ");
    scanf("%c", &estado1);
    //cod_carta
    printf("Digite o codigo da carta: ");
    scanf("%s", &cod_carta1);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);
    //população
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao1);
    //área
    printf("Digite o tamanho da cidade: ");
    scanf("%f", &area1);
    // PIB
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    //pontos turisticos
    printf("Digite a quantidade de pontos turisticos");
    scanf("%d", &ponto_turisticos1);

    densidade_populacional1 = populacao1 / area1;

    Pib_capita1 = pib1 / Pib_capita1;

    // pedindo informações da carta 2:

    // Estado
    printf("Digite o estado da carta-(de A até H): ");
    scanf("%c", &estado2);
    //cod_carta
    printf("Digite o codigo da carta: ");
    scanf("%s", &cod_carta2);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);
    //população
    printf("Digite o tamanho da população: ");
    scanf("%d", &populacao2);
    //área
    printf("Digite o tamanho da cidade: ");
    scanf("%f", &area2);
    // PIB
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    //pontos turisticos
    printf("Digite a quantidade de pontos turisticos");
    scanf("%d", &ponto_turisticos2);

    densidade_populacional2 = populacao2 / area2;

    Pib_capita2 = pib2 / Pib_capita2;

    // Mostrando a carta 1:

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", cod_carta1);
    printf("Nome da cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de pontos Turísticos: %d\n", ponto_turisticos1);
    
    //Adição da Densidade populacional
    printf("A densidade populacional é: %d\n", densidade_populacional1);

    //Adição do PIB per Capita
    printf("O PIB per capita é:  %d\n", Pib_capita1);

     // Mostrando a carta 2:

     printf("Carta 2: \n");
     printf("Estado: %c\n", estado2);
     printf("Codigo: %s\n", cod_carta2);
     printf("Nome da cidade: %s\n", nome_cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %f\n", area2);
     printf("PIB: %f\n", pib2);
     printf("Número de pontos Turísticos: %d\n", ponto_turisticos2);

    //Adição da Densidade populacional
    printf("A densidade populacional é: %d\n", densidade_populacional2);

    //Adição do PIB per Capita
    printf("O PIB per capita é:  %d\n", Pib_capita2);
    
    // Fim do programa
    return 0;
}
