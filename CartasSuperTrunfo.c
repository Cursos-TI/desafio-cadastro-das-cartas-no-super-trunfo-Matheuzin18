#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado;
    printf("Digite uma letra para representar o estado: \n");
    scanf("%c" , &estado);
    // Estado que a carta representa

    char codigo[4];
    printf("Digite o codigo da carta (letra do estado seguida de um número entre 01 e 04): \n");
    scanf("%s", &codigo);
    // Código que a carta possui

    char cidade[50];
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);
    // Cidade que a carta representa

    int populacao;
    printf("Digite o número aproximado de habitantes da cidade: \n");
    scanf("%i", &populacao);
    // Número de habitantes que a cidade possui

    float area;
    printf("Digite a área da cidade em km²: \n");
    scanf("%f", &area);
    // Área da cidade em km²

    float pib;
    printf("Digite o PIB (Produto Interno Bruto) da cidade: \n");
    scanf("%f", &pib);
    // Produto Interno Bruto (PIB) da cidade
    
    int turistico;
    printf("Digite a quantidade de pontos turísticos que a cidade possui: \n");
    scanf("%i", &turistico);
    // Número de pontos turísticos que a cidade possui
    
    printf("A letra que repesenta o estado é: %c. \n", estado);
    printf("O código da carta é: %s. \n", codigo);
    printf("O nome da cidade é: %s. \n", cidade);
    printf("A população da cidade é de aproximadamente %i habitantes. \n", populacao);
    printf("A área da cidade é de: %fkm². \n", area);
    printf("O PIB da cidade é de: R$%f. \n", pib);
    printf("A cidade tem um total de %i pontos turísticos. \n", turistico);
    //Exibir todas as informações referentes a carta representada

    
    return 0;

}
