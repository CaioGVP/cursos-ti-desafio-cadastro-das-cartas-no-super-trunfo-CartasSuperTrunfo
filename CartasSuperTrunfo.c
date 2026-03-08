#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado_01, estado_02;
    char codigo_01[4], codigo_02[4];
    char cidade_01[50], cidade_02[50];
    int populacao_01, populacao_02;
    float area_01, area_02;
    float pib_01, pib_02;
    int pontos_turisticos_01, pontos_turisticos_02;

    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("***A SEGUIR INFORME OS DADOS DA CARTA '1'***\n");

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

    printf("\n\n\n");


    printf("***AGORA INFORME OS DADOS DA CARTA '2'***\n\n");

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

    printf("\n\n\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Os dados da carta '1' sao: \n\n");
    printf("Estado: %c\n", estado_01);
    printf("Codigo: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("Populacao: %d\n", populacao_01);
    printf("Area: %.2f\n", area_01);
    printf("PIB: %.2f\n", pib_01);
    printf("Numero de Pontos Turisticos: %d\n\n\n", pontos_turisticos_01);

    printf("Os dados da carta '2' sao: \n\n");
    printf("Estado: %c\n", estado_02);
    printf("Codigo: %s\n", codigo_02);
    printf("Nome da Cidade: %s\n", cidade_02);
    printf("Populacao: %d\n", populacao_02);
    printf("Area: %.2f\n", area_02);
    printf("PIB: %.2f\n", pib_02);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos_02);

    return 0;
}
