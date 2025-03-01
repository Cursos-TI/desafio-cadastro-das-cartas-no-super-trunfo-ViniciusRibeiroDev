#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de váriaveis de ambiente para a primeira carta.

    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Pega as informações da primeira carta passadas pelo usuario e coloco nas variaveis.

    printf("Carta 1:\n");

    printf("Digite o numero de habitantes: ");
    scanf("%i", &populacao1);
    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produdo interno bruto(PIB) da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a a quantidade de pontos turisticos da cidade: ");
    scanf("%i", &pontos_turisticos1);

    // retorno a primeira carta para o usuário.

    printf("Carta 1:\n");
    printf("População: %i\n", populacao1);
    printf("Área: %.02f Km²\n", area1);
    printf("PIB: %.02f\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos1);

    // Declaração de váriaveis de ambiente para a segunda carta.

    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Pega as informações da segunda carta passadas pelo usuario e coloco nas variaveis.

    printf("Carta 2:\n");

    printf("Digite o numero de habitantes: ");
    scanf("%i", &populacao2);

    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produdo interno bruto(PIB) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a a quantidade de pontos turisticos da cidade: ");
    scanf("%i", &pontos_turisticos2);

    // retorno a segunda carta para o usuário.

    printf("Carta 2:\n");
    printf("População: %i\n", populacao2);
    printf("Área: %.02f Km²\n", area2);
    printf("PIB: %.02f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);

    return 0;
}
