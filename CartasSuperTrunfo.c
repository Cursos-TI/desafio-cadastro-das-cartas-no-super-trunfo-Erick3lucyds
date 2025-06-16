#include <stdio.h>
#include <string.h> 

void exibirMenu(int atributo_a_excluir) {
    printf("\nEscolha um atributo para comparar:\n");
    if (atributo_a_excluir != 1) printf("1. Populacao\n");
    if (atributo_a_excluir != 2) printf("2. Area\n");
    if (atributo_a_excluir != 3) printf("3. PIB\n");
    if (atributo_a_excluir != 4) printf("4. Pontos Turisticos\n");
    if (atributo_a_excluir != 5) printf("5. Densidade Demografica (menor vence)\n");
    if (atributo_a_excluir != 6) printf("6. PIB per capita\n");
    printf("Digite sua opcao: ");
}
float getValorAtributo(int opcao, unsigned long populacao, float area, float pib, int turistico, float densidade, float pibpercapita) {
    switch (opcao) {
        case 1: return (float)populacao;
        case 2: return area;
        case 3: return pib;
        case 4: return (float)turistico;
        case 5: return densidade;
        case 6: return pibpercapita;
        default: return 0.0; 
    }
}
void getNomeAtributo(int opcao, char *nome_buffer) {
    switch (opcao) {
        case 1: strcpy(nome_buffer, "Populacao"); break;
        case 2: strcpy(nome_buffer, "Area"); break;
        case 3: strcpy(nome_buffer, "PIB"); break;
        case 4: strcpy(nome_buffer, "Pontos Turisticos"); break;
        case 5: strcpy(nome_buffer, "Densidade Demografica"); break;
        case 6: strcpy(nome_buffer, "PIB per capita"); break;
        default: strcpy(nome_buffer, "Invalido"); break;
    }
}

int main() {
    //CARTA 1 
    char estado;
    char codigo[4];
    char cidade[20];
    float area;
    float pib;
    int turistico;
    unsigned long int populacao;
    float densidade, pibpercapita;

    //CARTA 2 
    char estado2;
    char codigo2[4];
    char cidade2[20];
    float area2;
    float pib2;
    int turistico2;
    unsigned long int populacao2;
    float densidade2, pibpercapita2;

    int opcao1, opcao2;

    printf("--- CADASTRO DA CARTA 01 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %19[^\n]", cidade);
    printf("Populacao: ");
    scanf("%lu", &populacao);
    printf("Area em km2: ");
    scanf("%f", &area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &turistico);

    while (getchar() != '\n'); 

    printf("\n--- CADASTRO DA CARTA 02 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %19[^\n]", cidade2); 
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area em km2: ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &turistico2);

    densidade = (area > 0) ? (float)populacao / area : 0;
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pibpercapita = (populacao > 0) ? (pib * 1000000000) / populacao : 0;
    pibpercapita2 = (populacao2 > 0) ? (pib2 * 1000000000) / populacao2 : 0;

    printf("\n\n--- SUPER TRUNFO: ESCOLHA DE ATRIBUTOS ---\n");

    do {
        printf("\nJOGADOR 1: Escolha o PRIMEIRO atributo.");
        exibirMenu(0); 
        scanf("%d", &opcao1);
        if (opcao1 < 1 || opcao1 > 6) {
            printf("Opcao invalida! Escolha um numero entre 1 e 6.\n");
        }
    } while (opcao1 < 1 || opcao1 > 6);

    do {
        printf("\nJOGADOR 1: Escolha o SEGUNDO atributo (deve ser diferente do primeiro).");
        exibirMenu(opcao1);
        scanf("%d", &opcao2);
        if (opcao2 < 1 || opcao2 > 6) {
            printf("Opcao invalida! Escolha um numero valido.\n");
        } else if (opcao1 == opcao2) {
            printf("Erro! Voce nao pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        }
    } while (opcao2 < 1 || opcao2 > 6 || opcao1 == opcao2);

    float valorAttr1_carta1, valorAttr1_carta2;
    float valorAttr2_carta1, valorAttr2_carta2;
    char nomeAttr1[30], nomeAttr2[30];

    valorAttr1_carta1 = getValorAtributo(opcao1, populacao, area, pib, turistico, densidade, pibpercapita);
    valorAttr1_carta2 = getValorAtributo(opcao1, populacao2, area2, pib2, turistico2, densidade2, pibpercapita2);
    getNomeAtributo(opcao1, nomeAttr1);

    valorAttr2_carta1 = getValorAtributo(opcao2, populacao, area, pib, turistico, densidade, pibpercapita);
    valorAttr2_carta2 = getValorAtributo(opcao2, populacao2, area2, pib2, turistico2, densidade2, pibpercapita2);
    getNomeAtributo(opcao2, nomeAttr2);

    float soma_carta1 = valorAttr1_carta1 + valorAttr2_carta1;
    float soma_carta2 = valorAttr1_carta2 + valorAttr2_carta2;

    printf("\n\n--- RESULTADO DA RODADA ---\n");
    printf("Cartas Comparadas: %s vs %s\n", cidade, cidade2);
    printf("--------------------------------------------------\n");

    printf("Atributo 1: %s\n", nomeAttr1);
    printf(" > %s: %.2f\n", cidade, valorAttr1_carta1);
    printf(" > %s: %.2f\n", cidade2, valorAttr1_carta2);
    printf(" > Vencedor no atributo: ");
    if (opcao1 == 5) { 
        printf("%s\n", (valorAttr1_carta1 < valorAttr1_carta2) ? cidade : (valorAttr1_carta2 < valorAttr1_carta1) ? cidade2 : "Empate");
    } else { 
        printf("%s\n", (valorAttr1_carta1 > valorAttr1_carta2) ? cidade : (valorAttr1_carta2 > valorAttr1_carta1) ? cidade2 : "Empate");
    }
    
    printf("--------------------------------------------------\n");
    
    printf("Atributo 2: %s\n", nomeAttr2);
    printf(" > %s: %.2f\n", cidade, valorAttr2_carta1);
    printf(" > %s: %.2f\n", cidade2, valorAttr2_carta2);
    printf(" > Vencedor no atributo: ");
    if (opcao2 == 5) { 
        printf("%s\n", (valorAttr2_carta1 < valorAttr2_carta2) ? cidade : (valorAttr2_carta2 < valorAttr2_carta1) ? cidade2 : "Empate");
    } else { 
        printf("%s\n", (valorAttr2_carta1 > valorAttr2_carta2) ? cidade : (valorAttr2_carta2 > valorAttr2_carta1) ? cidade2 : "Empate");
    }

    printf("==================================================\n");
    
    printf("SOMA DOS ATRIBUTOS:\n");
    printf(" > Soma para %s: %.2f\n", cidade, soma_carta1);
    printf(" > Soma para %s: %.2f\n", cidade2, soma_carta2);
    
    printf("\n VENCEDOR DA RODADA: ");
    if (soma_carta1 > soma_carta2) {
        printf("CARTA 1 (%s)!\n", cidade);
    } else if (soma_carta2 > soma_carta1) {
        printf("CARTA 2 (%s)!\n", cidade2);
    } else {
        printf("EMPATE!\n");
    }
    printf("==================================================\n");

    return 0;
}