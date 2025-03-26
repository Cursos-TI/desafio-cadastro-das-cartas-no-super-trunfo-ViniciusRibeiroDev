#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração de váriaveis de ambiente para a primeira carta.

    char estado1[20], cidade1[20], codigo_carta1[3];
    int pontos_turisticos1;
    unsigned long int populacao1;
    float area1, pib1, superPoder1;

    // Pega as informações da primeira carta passadas pelo usuario e coloco nas variaveis.

    printf("Carta 1:\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o numero de habitantes: ");
    scanf("%lu", &populacao1);
    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produdo interno bruto(PIB) da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a a quantidade de pontos turisticos da cidade: ");
    scanf("%i", &pontos_turisticos1);

    // calcula da densidade populacional.

    float densidade_populacional1 = (float) populacao1 / area1;

    // calculo do PIB per capita.

    float pib_per_capita1 = (float) (pib1 * 1000000000) / populacao1;

    // calculo do super poder

    superPoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1 / densidade_populacional1) + pib1;

    // retorno a primeira carta para o usuário.

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.02f Km²\n", area1);
    printf("PIB: %.02f bi\n", pib1);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos1);
    printf("Densidade Populacional: %.02f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.02f reais\n", pib_per_capita1);
    printf("Super Poder: %.02f\n", superPoder1);


    // Declaração de váriaveis de ambiente para a segunda carta.

    char estado2[20], cidade2[20], codigo_carta2[3];
    int pontos_turisticos2;
    unsigned long int populacao2;
    float area2, pib2, superPoder2;

    // Pega as informações da segunda carta passadas pelo usuario e coloco nas variaveis.

    printf("Carta 2:\n");

    printf("Digite o nome do estado: ");
    scanf("%s", estado2);

    printf("Digite o código da carta: ");
    scanf("%s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produdo interno bruto(PIB) da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a a quantidade de pontos turisticos da cidade: ");
    scanf("%i", &pontos_turisticos2);

    // calcula da densidade populacional.

    float densidade_populacional2 = (float) populacao2 / area2;

    // calculo do PIB per capita.
    
    float pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2;

    // calculo do super poder

    superPoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1 / densidade_populacional2) + pib2;

    // retorno a segunda carta para o usuário.

    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.02f Km²\n", area2);
    printf("PIB: %.02f bi\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);
    printf("Densidade Populacional: %.02f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.02f reais\n", pib_per_capita2);
    printf("Super Poder: %.02f\n", superPoder2);


    // solicita ao usuário dois atributos para comparação das cartas 

    int atributo;

    printf("Digite um numero para a comparar algum atributo: \n");
    printf("1: Estado\n");
    printf("2: População\n");
    printf("3: Area\n");
    printf("4: PIB.\n");
    printf("5: Pontos Turísticos.\n");
    printf("6: Densidade Populacional.\n");

    scanf("%i", &atributo);

    switch (atributo)
    {
    case 1:
        printf("Estado da carta 1: %s, Estado da carta 2: %s\n", estado1, estado2);

        printf("Escolha o segundo atributo.\n");
        printf("2: População.\n");
        printf("3: Area\n");
        printf("4: PIB.\n");
        printf("5: Pontos Turísticos.\n");
        printf("6: Densidade Populacional.\n");

        switch (atributo)
        {
        case 2:
            printf("Estado da carta 1: %s, Estado da carta 2: %s\n", estado1, estado2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("População: Carta %i venceu\n", (populacao1 > populacao2) == 1 ? 1 : 2);
            
            break;
        case 3:
            printf("Área da carta 1: %f, Área da carta 2: %f\n", area1, area2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((populacao1 + area1) > (populacao2 + area2)) == 1 ? 1 : 2);

            break;
        case 4:
            printf("PIB da carta 1: %f, PIB da carta 2: %f\n", pib1, pib2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((populacao1 + pib1) > (populacao2 + pib2)) == 1 ? 1 : 2);

            break;
        case 5:
            printf("Pontos Turísticos da carta 1: %i, Pontos Turísticos da carta 2: %i\n", pontos_turisticos2, pontos_turisticos2);
            printf("Pontos Turísticos: Carta %i venceu\n", (pontos_turisticos2 > pontos_turisticos2) == 1 ? 1 : 2);

            printf("Carta %i venceu\n", ((populacao1 + pontos_turisticos1) > (populacao2 + pontos_turisticos2)) == 1 ? 1 : 2);

            break;
        case 6:
            printf("Densidade Populacional 1: %f, Densidade Populacional 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((populacao1 + densidade_populacional1) > (populacao2 + densidade_populacional2)) == 1 ? 1 : 2);

            break;
        
        default:
            printf("Opção invalidade!");

            break;
        }

        break;
    case 2:
        printf("Escolha o segundo atributo.\n");
        printf("1: Estado\n");
        printf("3: Area\n");
        printf("4: PIB.\n");
        printf("5: Pontos Turísticos.\n");
        printf("6: Densidade Populacional.\n");

        switch (atributo)
        {
        case 1:
            printf("Estado da carta 1: %s, Estado da carta 2: %s\n", estado1, estado2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("População: Carta %i venceu\n", (area1 > populacao2) == 1 ? 1 : 2);
            
            break;
        case 3:
            printf("Área da carta 1: %f, Área da carta 2: %f\n", area1, area2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((populacao1 + area1) > (populacao2 + area2)) == 1 ? 1 : 2);

            break;
        case 4:
            printf("PIB da carta 1: %f, PIB da carta 2: %f\n", pib1, pib2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((populacao1 + pib1) > (populacao2 + pib2)) == 1 ? 1 : 2);

            break;
        case 5:
            printf("Pontos Turísticos da carta 1: %i, Pontos Turísticos da carta 2: %i\n", pontos_turisticos2, pontos_turisticos2);
            printf("Pontos Turísticos: Carta %i venceu\n", (pontos_turisticos2 > pontos_turisticos2) == 1 ? 1 : 2);

            printf("Carta %i venceu\n", ((populacao1 + pontos_turisticos1) > (populacao2 + pontos_turisticos2)) == 1 ? 1 : 2);

            break;
        case 6:
            printf("Densidade Populacional 1: %f, Densidade Populacional 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((populacao1 + densidade_populacional1) > (populacao2 + densidade_populacional2)) == 1 ? 1 : 2);

            break;
        
        default:
            printf("Opção invalidade!");

            break;
        }

        break;
    case 3:
        printf("Escolha o segundo atributo.\n");
        printf("1: Estado\n");
        printf("2: Área.\n");
        printf("4: PIB.\n");
        printf("5: Pontos Turísticos.\n");
        printf("6: Densidade Populacional.\n");

        switch (atributo)
        {
        case 1:
            printf("Estado da carta 1: %s, Estado da carta 2: %s\n", estado1, estado2);

            printf("Área da carta 1: %lu, Área da carta 2: %lu\n", area1, area2);
            printf("Carta %i venceu\n", (area1 > area2) == 1 ? 1 : 2);
            
            break;
        case 2:
            printf("Área da carta 1: %f, Área da carta 2: %f\n", area1, area2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((area1 + populacao1) > (populacao2 + area2)) == 1 ? 1 : 2); 
            break;
        case 4:
            printf("PIB da carta 1: %f, PIB da carta 2: %f\n", pib1, pib2);

            printf("Área da carta 1: %lu, Área da carta 2: %lu\n", area1, area2);
            printf("Carta %i venceu\n", ((area1 + pib1) > (area2 + pib2)) == 1 ? 1 : 2);

            break;
        case 5:
            printf("Pontos Turísticos da carta 1: %i, Pontos Turísticos da carta 2: %i\n", pontos_turisticos2, pontos_turisticos2);

            printf("Área da carta 1: %lu, Área da carta 2: %lu\n", area1, area2);
            printf("Carta %i venceu\n", ((area1 + pontos_turisticos1) > (area2 + pontos_turisticos2)) == 1 ? 1 : 2);

            break;
        case 6:
            printf("Densidade Populacional 1: %f, Densidade Populacional 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("Área da carta 1: %lu, Área da carta 2: %lu\n", area1, area2);
            printf("Carta %i venceu\n", ((area1 + densidade_populacional1) > (area2 + densidade_populacional2)) == 1 ? 1 : 2);

            break;
        
        default:
            printf("Opção invalidade!");

            break;
        }

        break;
    case 4:
        printf("PIB da carta 1: %f, PIB da carta 2: %f\n", pib1, pib2);
        printf("PIB: Carta %i venceu\n", (pib1 > pib2) == 1 ? 1 : 2);

        printf("Escolha o segundo atributo.\n");
        printf("1: Estado\n");
        printf("2: Área.\n");
        printf("3: População.\n");
        printf("5: Pontos Turísticos.\n");
        printf("6: Densidade Populacional.\n");

        switch (atributo)
        {
        case 1:
            printf("Estado da carta 1: %s, Estado da carta 2: %s\n", estado1, estado2);

            printf("PIB da carta 1: %lu, PIB da carta 2: %lu\n", pib1, pib2);
            printf("Carta %i venceu\n", (pib1 > pib2) == 1 ? 1 : 2);
            
            break;
        case 2:
            printf("PIB da carta 1: %f, PIB da carta 2: %f\n", pib1, pib2);

            printf("Área da carta 1: %lu, Área da carta 2: %lu\n", area1, area2);
            printf("Carta %i venceu\n", ((pib1 + area1) > (area2 + pib2)) == 1 ? 1 : 2); 
            break;
        case 3:
            printf("PIB da carta 1: %f, PIB da carta 2: %f\n", pib1, pib2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((pib1 + populacao1) > (pib2 + populacao2)) == 1 ? 1 : 2);

            break;
        case 5:
            printf("Pontos Turísticos da carta 1: %i, Pontos Turísticos da carta 2: %i\n", pontos_turisticos2, pontos_turisticos2);

            printf("PIB da carta 1: %lu, PIB da carta 2: %lu\n", pib1, pib2);
            printf("Carta %i venceu\n", ((pib1 + pontos_turisticos1) > (pib2 + pontos_turisticos2)) == 1 ? 1 : 2);

            break;
        case 6:
            printf("Densidade Populacional 1: %f, Densidade Populacional 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("PIB da carta 1: %lu, PIB da carta 2: %lu\n", pib1, pib2);
            printf("Carta %i venceu\n", ((pib1 + densidade_populacional1) > (pib2 + densidade_populacional2)) == 1 ? 1 : 2);

            break;
        
        default:
            printf("Opção invalidade!");

            break;
        }

        break;
    case 5:
        printf("Escolha o segundo atributo.\n");
        printf("1: Estado\n");
        printf("2: Área.\n");
        printf("3: População.\n");
        printf("4: PIB.\n");
        printf("6: Densidade Populacional.\n");

        switch (atributo)
        {
        case 1:
            printf("Estado da carta 1: %s, Estado da carta 2: %s\n", estado1, estado2);

            printf("Pontos Turisticos da carta 1: %lu, Pontos Turisticos da carta 2: %lu\n", pontos_turisticos1, pontos_turisticos2);
            printf("Carta %i venceu\n", (pontos_turisticos1 > pontos_turisticos2) == 1 ? 1 : 2);
            
            break;
        case 2:
            printf("Pontos Turisticos da carta 1: %f, Pontos Turisticos da carta 2: %f\n", pontos_turisticos1, pontos_turisticos2);

            printf("Área da carta 1: %lu, Área da carta 2: %lu\n", area1, area2);
            printf("Carta %i venceu\n", ((pontos_turisticos1 + area1) > (area2 + pontos_turisticos2)) == 1 ? 1 : 2); 
            break;
        case 3:
            printf("Pontos Turisticos da carta 1: %f, Pontos Turisticos da carta 2: %f\n", pontos_turisticos1, pontos_turisticos2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((pontos_turisticos1 + populacao1) > (pontos_turisticos2 + populacao2)) == 1 ? 1 : 2);

            break;

        case 4:
            printf("Pontos Turisticos da carta 1: %f, Pontos Turisticos da carta 2: %f\n", pontos_turisticos1, pontos_turisticos2);

            printf("PIB da carta 1: %lu, PIB da carta 2: %lu\n", pib1, pib2);
            printf("Carta %i venceu\n", ((pontos_turisticos1 + pib1) > (pontos_turisticos2 + pib2)) == 1 ? 1 : 2);

        break;
        case 6:
            printf("Densidade Populacional 1: %f, Densidade Populacional 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("Pontos Turisticos da carta 1: %lu, Pontos Turisticos da carta 2: %lu\n", pontos_turisticos1, pontos_turisticos2);
            printf("Carta %i venceu\n", ((pontos_turisticos1 + densidade_populacional1) > (pontos_turisticos2 + densidade_populacional2)) == 1 ? 1 : 2);

            break;
        
        default:
            printf("Opção invalidade!");

            break;
        }
        break;
    case 6:
        printf("Densidade Populacional 1: %f, Densidade Populacional 2: %f\n", densidade_populacional1, densidade_populacional2);
        printf("Área: Carta %i venceu\n", (densidade_populacional1 < densidade_populacional2) == 1 ? 1 : 2);

        printf("Escolha o segundo atributo.\n");
        printf("1: Estado\n");
        printf("2: Área.\n");
        printf("3: População.\n");
        printf("4: PIB.\n");
        printf("5: Pontos Turisticos.\n");
        printf("6: Densidade Populacional.\n");

        switch (atributo)
        {
        case 1:
            printf("Estado da carta 1: %s, Estado da carta 2: %s\n", estado1, estado2);

            printf("Densidade Populacional da carta 1: %lu, Densidade Populacional da carta 2: %lu\n", densidade_populacional1, densidade_populacional2);
            printf("Carta %i venceu\n", (densidade_populacional1 > densidade_populacional2) == 1 ? 1 : 2);
            
            break;
        case 2:
            printf("Densidade Populacional da carta 1: %f, Densidade Populacional da carta 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("Área da carta 1: %lu, Área da carta 2: %lu\n", area1, area2);
            printf("Carta %i venceu\n", ((densidade_populacional1 + area1) > (area2 + densidade_populacional2)) == 1 ? 1 : 2); 
            break;
        case 3:
            printf("Densidade Populacional da carta 1: %f, Densidade Populacional da carta 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("População da carta 1: %lu, População da carta 2: %lu\n", populacao1, populacao2);
            printf("Carta %i venceu\n", ((densidade_populacional1 + populacao1) > (densidade_populacional2 + populacao2)) == 1 ? 1 : 2);

            break;

        case 4:
            printf("Densidade Populacional da carta 1: %f, Densidade Populacional da carta 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("PIB da carta 1: %lu, PIB da carta 2: %lu\n", pib1, pib2);
            printf("Carta %i venceu\n", ((densidade_populacional1 + pib1) > (densidade_populacional2 + pib2)) == 1 ? 1 : 2);

        break;
        case 5:
            printf("Densidade Populacional 1: %f, Densidade Populacional 2: %f\n", densidade_populacional1, densidade_populacional2);

            printf("Pontos Turisticos Populacional da carta 1: %lu, Pontos Turisticos da carta 2: %lu\n", pontos_turisticos1, pontos_turisticos2);
            printf("Carta %i venceu\n", ((pontos_turisticos1 + densidade_populacional1) > (pontos_turisticos2 + densidade_populacional2)) == 1 ? 1 : 2);

            break;
        
        default:
            printf("Opção invalidade!");

            break;
        }

        break;
    default:
        printf("Opção invalidade!");

        break;
    }

    return 0;
}
