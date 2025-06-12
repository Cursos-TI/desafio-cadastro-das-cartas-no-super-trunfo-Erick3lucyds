#include <stdio.h>
int main() {

    // carta 1 
    char estado;
    char codigo[4];
    char cidade[20];
    float area; 
    float pib; 
    int turistico;
    unsigned long int populacao;
    float densidade, pibpercapita, superpoder;
    
    // carta 2 

    char estado2;
    char codigo2[4];
    char cidade2[20];
    float area2; 
    float pib2;
    int turistico2;
    unsigned long int populacao2;
    float densidade2, pibpercapita2, superpoder2;

    int opcao;

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

    
 // resultados 1 
    printf("Estado: %c \nCodigo da carta: %s \n", estado, codigo);
    printf("Área: %f \nCidade: %s \nPIB: %f \nPontos turísticos: %lu \nPopulação: %d \n", area, cidade, pib, turistico, populacao );

 // resultados 2
    printf("Estado: %c \nCodigo da carta: %s \n", estado2, codigo2);
    printf("Área: %f \nCidade: %s \nPIB: %f \nPontos turísticos: %lu \nPopulação: %d \n", area2, cidade2, pib2, turistico2, populacao2);


// calculos 
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

    printf("Comparação das cartas ");

     // --- MENU INTERATIVO ---
    printf("\n\n--- SUPER TRUNFO ---\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica (menor vence)\n");
    printf("6. PIB per capita\n");
    printf("7. Superpoder\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);

    printf("\n--- RESULTADO DA COMPARACAO ---\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH ---
    switch (opcao) {
        case 1: // POPULAÇÃO
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", cidade, populacao);
            printf("%s: %lu\n", cidade2, populacao2);
            if (populacao > populacao2) printf("Vencedor: Carta 1 (%s)!\n", cidade);
            else if (populacao2 > populacao) printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 2: // ÁREA
            printf("Atributo: Area\n");
            printf("%s: %.2f\n", cidade, area);
            printf("%s: %.2f\n", cidade2, area2);
            if (area > area2) printf("Vencedor: Carta 1 (%s)!\n", cidade);
            else if (area2 > area) printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade, pib);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib > pib2) printf("Vencedor: Carta 1 (%s)!\n", cidade);
            else if (pib2 > pib) printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", cidade, turistico);
            printf("%s: %d\n", cidade2, turistico2);
            if (turistico > turistico2) printf("Vencedor: Carta 1 (%s)!\n", cidade);
            else if (turistico2 > turistico) printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 5: // DENSIDADE DEMOGRÁFICA (menor vence)
            printf("Atributo: Densidade Demografica (MENOR vence)\n");
            printf("%s: %.2f\n", cidade, densidade);
            printf("%s: %.2f\n", cidade2, densidade2);
            if (densidade < densidade2) printf("Vencedor: Carta 1 (%s)!\n", cidade);
            else if (densidade2 < densidade) printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;
            
        case 6: // PIB PER CAPITA
            printf("Atributo: PIB per capita\n");
            printf("%s: %.2f\n", cidade, pibpercapita);
            printf("%s: %.2f\n", cidade2, pibpercapita2);
            if (pibpercapita > pibpercapita2) printf("Vencedor: Carta 1 (%s)!\n", cidade);
            else if (pibpercapita2 > pibpercapita) printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        case 7: // SUPERPODER
            printf("Atributo: Superpoder\n");
            printf("%s: %.2f\n", cidade, superpoder);
            printf("%s: %.2f\n", cidade2, superpoder2);
            if (superpoder > superpoder2) printf("Vencedor: Carta 1 (%s)!\n", cidade);
            else if (superpoder2 > superpoder) printf("Vencedor: Carta 2 (%s)!\n", cidade2);
            else printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opcao invalida! Por favor, escolha um numero entre 1 e 7.\n");
            break;
    }

    return 0;
}