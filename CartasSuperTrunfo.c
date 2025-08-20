#include <stdio.h>

int main (){

    char estado_a;
    char codigo_a[5];
    char nome_cidade_a[20];
    int populacao_a;
    float area_em_km_a;
    float pib_a;
    int pontos_turisticos_a;

    char estado_b;
    char codigo_b[5];
    char nome_cidade_b[20];
    int populacao_b;
    float area_em_km_b;
    float pib_b;
    int pontos_turisticos_b; 

    printf("Digite a letra da primeira cidade: \n");
    scanf(" %c", &estado_a);

    printf("Digite o codigo da primeira cidade: \n");
    scanf(" %s", codigo_a);

    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nome_cidade_a);

    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao_a);
    
    printf("Digite a área em km² da primeira cidade: \n");
    scanf("%f", &area_em_km_a);

    printf("Digite o pib da primeira cidade: \n");
    scanf("%f", &pib_a);

    printf("Digite a quantidade de pontos turisticos da primeira cidade: \n");
    scanf("%d", &pontos_turisticos_a);

    printf("Digite a letra da segunda cidade: \n");
    scanf(" %c", &estado_b);

    printf("Digite o codigo da segunda cidade: \n");
    scanf(" %s", codigo_b);

    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nome_cidade_b);

    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao_b);
    
    printf("Digite a área em km² da segunda cidade: \n");
    scanf("%f", &area_em_km_b);

    printf("Digite o pib da segunda cidade: \n");
    scanf("%f", &pib_b);

    printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
    scanf("%d", &pontos_turisticos_b);
    
    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado_a);
    printf("Código: %s\n", codigo_a);
    printf("Nome da Cidade: %s\n", nome_cidade_a);
    printf("População: %d habitantes\n", populacao_a);
    printf("Área: %.2f km²\n", area_em_km_a);
    printf("PIB: %.2f bilhões de R$\n", pib_a);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_a);

    printf("\nCARTA 2:\n");
    printf("Estado: %c\n", estado_b);
    printf("Código: %s\n", codigo_b);
    printf("Nome da Cidade: %s\n", nome_cidade_b);
    printf("População: %d habitantes\n", populacao_b);
    printf("Área: %.2f km²\n", area_em_km_b);
    printf("PIB: %.2f bilhões de R$\n", pib_b);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos_b);
    
    return 0;

}
