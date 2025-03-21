#include <stdio.h>
int main() {
    
    char estado;
    char codigo[4];
    char cidade[20];
    float area; 
    float pib;
    int turistico;
    int populacao;

    char estado2;
    char codigo2[4];
    char cidade2[20];
    float area2; 
    float pib2;
    int turistico2;
    int populacao2;

    printf("CARTA 01 \nDigite uma letra de 'a' a 'h' representando o estado: \n");
    scanf(" %c", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 \n");
    scanf(" %s", codigo);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("Área em quilometros quadrados da cidade: \n");
    scanf("%f", &area);

    printf("Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico);
    
    printf("População: \n");
    scanf("%d", &populacao);

    printf("CARTA 02 \nDigite uma letra de 'a' a 'h' representando o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 \n");
    scanf(" %s", codigo2);

    printf("Cidade: \n");
    scanf("%s", &cidade2);

    printf("Área em quilometros quadrados da cidade: \n");
    scanf("%f", &area2);

    printf("Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico2);
    
    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Estado: %c \nCodigo da carta: %s \n", estado, codigo);
    printf("Área: %f \nCidade: %s \nPIB: %f \nPontos turísticos: %d \nPopulação: %d \n", area, cidade, pib, turistico, populacao );

    printf("Estado: %c \nCodigo da carta: %s \n", estado2, codigo2);
    printf("Área: %f \nCidade: %s \nPIB: %f \nPontos turísticos: %d \nPopulação: %d \n", area2, cidade2, pib2, turistico2, populacao2);

    return 0;
}
