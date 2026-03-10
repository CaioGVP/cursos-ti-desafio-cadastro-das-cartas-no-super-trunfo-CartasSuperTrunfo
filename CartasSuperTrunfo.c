#include <stdio.h>
 
int main() {
    
    char estado_01, estado_02;
    char codigo_01[4], codigo_02[4];
    char cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float pib_01, pib_02;
    int pontos_turisticos_01, pontos_turisticos_02;
    float densidade_populacional_01, densidade_populacional_02;
    float pib_per_capita_01, pib_per_capita_02;
    float super_poder_01, super_poder_02;

// Entradas

    printf("*** A SEGUIR INFORME OS DADOS DA CARTA '1' ***\n\n");

    printf("Informe o estado: \n");
    scanf(" %c", &estado_01);

    printf("Informe o codigo da carta: \n");
    scanf("%s", codigo_01);

    printf("informe o nome da cidade: \n");
    scanf(" %[^\n]", cidade_01);

    printf("informe o numero de habitantes da cidade: \n");
    scanf("%d", &populacao_01);

    printf("informe area da cidade em quilometros quadrados: \n");
    scanf("%f", &area_01);

    printf("Informe o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib_01);

    printf("Informe a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pontos_turisticos_01);

// Cálculos 
    
    densidade_populacional_01 = populacao_01 / area_01;
    pib_per_capita_01 = pib_01 / populacao_01;

    super_poder_01 = (populacao_01 + area_01 + pib_01 + pontos_turisticos_01 + pib_per_capita_01) + (1.0 / densidade_populacional_01);

    printf("\n\n\n");

// Entradas

    printf("*** AGORA INFORME OS DADOS DA CARTA '2' ***\n\n");

    printf("Informe o estado: \n");
    scanf(" %c", &estado_02);

    printf("Informe o codigo da carta: \n");
    scanf("%s", codigo_02);

    printf("informe o nome da cidade: \n");
    scanf(" %[^\n]", cidade_02);

    printf("informe o numero de habitantes da cidade: \n");
    scanf("%d", &populacao_02);

    printf("informe area da cidade em quilometros quadrados: \n");
    scanf("%f", &area_02);

    printf("Informe o Produto Interno Bruto da cidade (PIB): \n");
    scanf("%f", &pib_02);

    printf("Informe a quantidade de pontos turisticos na cidade: \n");
    scanf("%d", &pontos_turisticos_02);

// Cálculos 

    densidade_populacional_02 = populacao_02 / area_02;
    pib_per_capita_02 = pib_02 / populacao_02;

    super_poder_02 = (populacao_02 + area_02 + pib_02 + pontos_turisticos_02 + pib_per_capita_02) + (1.0 / densidade_populacional_02); 

    printf("\n\n\n");

// Resultados

    printf("Os dados da carta '1' sao: \n\n");
    printf("Estado: %c\n", estado_01);
    printf("Codigo: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("Populacao: %d\n", populacao_01);
    printf("Area: %.2f km\n", area_01);
    printf("PIB: %.2f bilhoes de reais\n", pib_01);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_01);
    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional_01);
    printf("PIB per Capita: %.2f reais\n\n\n", pib_per_capita_01);
    printf("Super Poder: %f\n\n\n", super_poder_01);

    printf("Os dados da carta '2' sao: \n\n");
    printf("Estado: %c\n", estado_02);
    printf("Codigo: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("Populacao: %d\n", populacao_02);
    printf("Area: %.2f km\n", area_02);
    printf("PIB: %.2f bilhoes de reais\n", pib_02);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_02);
    printf("Densidade Populacional: %.2f hab/km\n", densidade_populacional_02);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_02);
    printf("Super Poder: %f\n\n\n", super_poder_02);

// Comparações

    printf("*** Quais atributos entre as cartas são os melhores ***\n\n");

    printf("O numero de habitantes da cidade %s e maior que a da cidade %s?: %d\n", cidade_01, cidade_02, populacao_01 > populacao_02);
    printf("A area da cidade %s e maior que a da cidade %s?: %d\n", cidade_01, cidade_02, area_01 > area_02);
    printf("O Produto Interno Bruto(PIB) da cidade %s e maior que a da cidade %s?: %d\n", cidade_01, cidade_02, pib_01 > pib_02);  
    printf("A quantidade de pontos turisticos na cidade %s e maior que a da cidade %s?: %d\n", cidade_01, cidade_02, pontos_turisticos_01 > pontos_turisticos_02);
    printf("A densidade populacional cidade %s e maior que a da cidade %s?: %d\n", cidade_01, cidade_02, densidade_populacional_01 > densidade_populacional_02);    
    printf("O PIB per Capita da cidade %s e maior que a da cidade %s?: %d\n", cidade_01, cidade_02, pib_per_capita_01 > pib_per_capita_02);   
    printf("O Super Poder da cidade %s e maior que a da cidade %s?: %d\n", cidade_01, cidade_02, super_poder_01 > super_poder_02);     


    return 0;
    
}