#include <stdio.h>

int main() {
    // Variaveis da carta 1:
    char estado1;
    char cod_carta1[27];
    char nome_cidade1[10];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int ponto_turisticos1;
    
    // Adição das novas variaveis (nivel aventureiro)
    float densidade_populacional1;
    float Pib_capita1;

    // Adição das novas variaveis (niver mestre)
    float super_poder1;

    // Variaveis da carta 2:
    char estado2;
    char cod_carta2[10];
    char nome_cidade2[10];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int ponto_turisticos2;

    //Adição das novas variaveis (nivel aventureiro)
    float densidade_populacional2;
    float Pib_capita2;

    // Adição das novas variaveis (niver mestre)
    float super_poder2;


    //pedindo informações da carta 1:
    
    // Estado
    printf("Digite o estado da carta-(de A até H): ");
    scanf(" %c", &estado1);
    //cod_carta
    printf("Digite o Codigo da carta: ");
    scanf("%s" , cod_carta1);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);
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

    Pib_capita1 = pib1 / populacao1;

    // pedindo informações da carta 2:

    // Estado
    printf("Digite o estado da carta-(de A até H): ");
    scanf(" %c", &estado2);
    //cod_carta
    printf("Digite o codigo da carta: ");
    scanf("%s", cod_carta2);
    //nome da cidade
    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);
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

    Pib_capita2 = pib2 / populacao2;

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
    printf("A densidade populacional é: %.2f\n", densidade_populacional1);

    //Adição do PIB per Capita
    printf("O PIB per capita é:  %.2f\n", Pib_capita1);

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
    printf("A densidade populacional é: %.2f\n", densidade_populacional2);

    //Adição do PIB per Capita
    printf("O PIB per capita é:  %.2f\n", Pib_capita2);
    

    // Soma dos poderes:

    // carta 1
    super_poder1 = (float) (populacao1 + area1 + pib1 + ponto_turisticos1 + Pib_capita1 + (1 / densidade_populacional1));

    // carta 2
    super_poder2 = (float) (populacao2 + area2 + pib2 + ponto_turisticos2 + Pib_capita2 + (1 / densidade_populacional2));

    // Comparação entre os atributos:
    printf("População: %d", populacao1 > populacao2);
    printf("Area: %f", area1 > area2);
    printf("PIB: %f", pib1 > pib2);
    printf("Pontos Turisticos %d", ponto_turisticos1 > ponto_turisticos2);
    printf("PIB per Capita: %f", Pib_capita1 > Pib_capita2);
    printf("Densidade populacional: %f", densidade_populacional1 < densidade_populacional2);
    printf("Super Poder:  %f", super_poder1 > super_poder2);



    // Fim do programa
    return 0;
}



