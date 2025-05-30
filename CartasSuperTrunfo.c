#include <stdio.h>
int main() {
    
    char estado;
    char codigo[4];
    char cidade[20];
    float area; 
    float pib; 
    int turistico;
    unsigned long int populacao;
    float densidade, pibpercapita, superpoder;

    char estado2;
    char codigo2[4];
    char cidade2[20];
    float area2; 
    float pib2;
    int turistico2;
    unsigned long int populacao2;
    float densidade2, pibpercapita2, superpoder2;

    printf("CARTA 01 \nDigite uma letra de 'a' a 'h' representando o estado: \n");
    scanf(" %c", &estado);

    printf("Digite a letra do estado seguida de um número de 01 a 04 \n");
    scanf(" %s", codigo);

    printf("Cidade: \n");
    scanf(" %19s", cidade);

    printf("Área em quilometros quadrados da cidade: \n");
    scanf("%f", &area);

    printf("Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico);
    
    printf("População: \n");
    scanf("%lu", &populacao);

    printf("CARTA 02 \nDigite uma letra de 'a' a 'h' representando o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite a letra do estado seguida de um número de 01 a 04 \n");
    scanf(" %s", codigo2);

    printf("Cidade: \n");
    scanf(" %19s", cidade2);

    printf("Área em quilometros quadrados da cidade: \n");
    scanf("%f", &area2);

    printf("Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &turistico2);
    
    printf("População: \n");
    scanf("%lu", &populacao2);

    

    printf("Estado: %c \nCodigo da carta: %s \n", estado, codigo);
    printf("Área: %f \nCidade: %s \nPIB: %f \nPontos turísticos: %lu \nPopulação: %d \n", area, cidade, pib, turistico, populacao );
    printf("Estado: %c \nCodigo da carta: %s \n", estado2, codigo2);
    printf("Área: %f \nCidade: %s \nPIB: %f \nPontos turísticos: %lu \nPopulação: %d \n", area2, cidade2, pib2, turistico2, populacao2);

    densidade = (float)(populacao/area);
    printf("Densidade populacional da carta 1: %.2f \n", densidade);
    
    densidade2 = (float)(populacao2/area2);
    printf("Densidade populacional da carta 2: %.2f \n", densidade2);

    pibpercapita = (float)(pib/populacao);
    printf("PIB per capita carta 1: %.2f \n", pibpercapita);

    pibpercapita2 = (float)(pib2/populacao2);
    printf("PIB per capita carta 2: %.2f \n", pibpercapita2);

    superpoder = (float)(populacao+area+pib+turistico+pibpercapita);
    printf("Super poder: %f \n", superpoder);
    
    superpoder2 = (float)(populacao2+area2+pib2+turistico2+pibpercapita2);
    printf("Super poder: %f \n", superpoder2);

    printf("Comparação das cartas (1 = SIM) (2 = NÃO) \n");


    printf("População: Carta 1 venceu:%d\n" ,
        (populacao) > (populacao2));

    printf("Área: Carta 2 venceu:%d\n",
        (area2) > (area));

    printf("PIB: Carta 1 venceu:%d\n",
        (pib) > (pib2));

    printf("Pontos turísticos: Carta 2 venceu:%d\n",
        (turistico2) > (turistico));

    printf("Densidade populacional: Carta 1 venceu:%d\n",
    (densidade) < (densidade2));

    printf("PIB per capita: Carta 2 venceu:%d\n",
    (pibpercapita2) > (pibpercapita));

    printf("Super poder: Carta 1 venceu:%d\n",
    (superpoder) > (superpoder2));

    return 0;
}
