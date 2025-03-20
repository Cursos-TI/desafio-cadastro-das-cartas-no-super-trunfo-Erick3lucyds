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
    scanf("%c", &codigo);

    printf("Cidade: \n");
    scanf("%c", &cidade);

    printf("Área em quilometros quadrados da cidade:");
    scanf("%f", &area);

    return 0;
}
