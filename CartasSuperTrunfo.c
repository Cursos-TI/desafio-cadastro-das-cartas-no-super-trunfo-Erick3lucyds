#include <stdio.h>
int main() {
    
    char estado;
    char codigo[3];
    char cidade[20];
    float area; 
    float pib;
    int turistico;
    int populacao;

    printf("Digite uma letra de 'a' a 'h' representando o estado: \n");
    scanf("%c", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 \n");
    scanf("%s", &codigo);

    printf("Cidade: \n");
    scanf(" %s", &cidade);

    printf("Área em quilometros quadrados da cidade: \n");
    scanf("%f", &area);

    printf("Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf(" %d", &turistico);
    
    printf("População: \n");
    scanf(" %d", &populacao);

    printf("Estado: %c - Codigo da carta: - %s \n", estado, codigo);
    printf("Cidade: %s - Área: %f - PIB: %f - Pontos turísticos: %d - População: - %d", cidade, area, pib, turistico, populacao);

    return 0;
}
