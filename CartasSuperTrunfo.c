#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // === Declaração das variáveis para a PRIMEIRA CARTA ===
    char estado1;
    char codigoCarta1[50]; // Array de caracteres para a string
    char nomeCidade1[50]; // Array de caracteres para a string
    int populacao1;
    float area1;
    float pib1;
    int numeroPontosTuristicos1;

    // === Declaração das variáveis para a SEGUNDA CARTA ===
    char estado2;
    char codigoCarta2[50];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int numeroPontosTuristicos2;

    // --- CADASTRO DA PRIMEIRA CARTA ---
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); 

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", codigoCarta1); // %s lê uma string 

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade1); 

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicos1);

    printf("\n");


    // --- CADASTRO DA SEGUNDA CARTA ---
    printf("--- Cadastro da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (Ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);

    printf("\n"); 


    // --- EXIBIÇÃO DAS INFORMAÇÕES CADASTRADAS ---

    // Exibição da Carta 1
    printf("--- Carta 1: Informações Cadastradas ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f para formatar com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos1);
    printf("\n"); 

    // Exibição da Carta 2
    printf("--- Carta 2: Informações Cadastradas ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicos2);

    return 0; // Indica que o programa terminou com sucesso
}
