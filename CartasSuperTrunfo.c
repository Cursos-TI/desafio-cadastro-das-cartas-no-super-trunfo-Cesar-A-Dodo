#include <stdio.h>

int main (){
    char letra_a, letra_b;
    char codigo_a[5], codigo_b[5];
    char nome_cidade_a[20], nome_cidade_b[20];
    unsigned long int populacao_a, populacao_b;
    float area_em_km_a, area_em_km_b;
    float pib_a, pib_b;
    int pontos_turisticos_a, pontos_turisticos_b;
    float densidade_pop_a, densidade_pop_b, densidade_inv_a, densidade_inv_b;
    float pib_percap_a, pib_percap_b;
    float super_poder_a, super_poder_b;
    
    printf("Digite a letra da primeira cidade: \n");
    scanf(" %c", &letra_a);

    printf("Digite o codigo da primeira cidade: \n");
    scanf(" %s", codigo_a);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome_cidade_a);

    printf("Digite a população da primeira cidade: \n");
    scanf("%lu", &populacao_a);
    
    printf("Digite a área em km² da primeira cidade: \n");
    scanf("%f", &area_em_km_a);

    printf("Digite o pib da primeira cidade: \n");
    scanf("%f", &pib_a);

    printf("Digite a quantidade de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontos_turisticos_a);

    printf("Digite a letra da segunda cidade: \n");
    scanf(" %c", &letra_b);

    printf("Digite o codigo da segunda cidade: \n");
    scanf(" %s", codigo_b);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome_cidade_b);

    printf("Digite a população da segunda cidade: \n");
    scanf("%lu", &populacao_b);
    
    printf("Digite a área em km² da segunda cidade: \n");
    scanf("%f", &area_em_km_b);

    printf("Digite o pib da segunda cidade: \n");
    scanf("%f", &pib_b);

    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontos_turisticos_b);
    
    // Cálculos
    
    densidade_pop_a = (float)populacao_a / area_em_km_a;
    densidade_pop_b = (float)populacao_b / area_em_km_b;
    
    pib_percap_a = pib_a / populacao_a;
    pib_percap_b = pib_b / populacao_b;
    
    densidade_inv_a = 1 / densidade_pop_a;
    densidade_inv_b = 1 / densidade_pop_b;

    super_poder_a = (float)populacao_a + area_em_km_a + pib_a + (float)pontos_turisticos_a + densidade_inv_a;
    super_poder_b = (float)populacao_b + area_em_km_b + pib_b + (float)pontos_turisticos_b + densidade_inv_b;

    /* Parte do Nível 2

    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", letra_a);
    printf("Código: %s\n", codigo_a);
    printf("Nome da Cidade: %s\n", nome_cidade_a);
    printf("População: %lu habitantes\n", populacao_a);
    printf("Área: %.2f km²\n", area_em_km_a);
    printf("PIB: %.2f bilhões de reais\n", pib_a / 1000000000);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos_a);
    printf("Densidade Populacional; %.2f hab/km²\n", densidade_pop_a);
    printf("PIB per Capita: %.2f reais\n", pib_percap_a);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", letra_b);
    printf("Código: %s\n", codigo_b);
    printf("Nome da Cidade: %s\n", nome_cidade_b);
    printf("População: %lu habitantes\n", populacao_b);
    printf("Área: %.2f km²\n", area_em_km_b);
    printf("PIB: %.2f bilhões de reais\n", pib_b / 1000000000);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_b);
    printf("Densidade Populacional; %.2f hab/km²\n", densidade_pop_b);
    printf("PIB per Capita: %.2f reais\n", pib_percap_b);
    
    */
    
    printf("\nCarta 1 vence com resultado: 1\n");
    printf("\nCarta 2 vence com resultado: 0\n");
    printf("\n========== Comparação das Cartas! ==========\n");
    printf("\nPopulação: Carta %d Venceu!\n", populacao_a > populacao_b);
    printf("Área: Carta %d Venceu!\n", area_em_km_a > area_em_km_b);
    printf("PIB: Carta %d Venceu!\n", pib_a > pib_b);
    printf("Pontos Turísticos: Carta %d Venceu!\n", pontos_turisticos_a > pontos_turisticos_b);
    printf("Densidade Populacional: Carta %d Venceu!\n", densidade_pop_a < densidade_pop_b);
    printf("PIB per Capita: Carta %d Venceu!\n", pib_percap_a > pib_percap_b);
    printf("Super Poder: Carta %d Venceu!\n", super_poder_a > super_poder_b);

    return 0;

}