#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[3], codigo1[5], nome1[50];
    int populacao1, pontos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Declaração das variáveis para a Carta 2
    char estado2[3], codigo2[5], nome2[50];
    int populacao2, pontos2;
    float area2, pib2, densidade2, pibPerCapita2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lê a string com espaços
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // --- CADASTRO DA CARTA 2 ---
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // --- CÁLCULOS DOS ATRIBUTOS DERIVADOS ---
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float)populacao1; // Convertendo PIB para valor real

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float)populacao2;

    // --- LÓGICA DE COMPARAÇÃO ---
    // Atributo escolhido: População
    printf("\n========================================\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("========================================\n");
    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);
    printf("----------------------------------------\n");

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    /* DICA: Para comparar Densidade Populacional (Menor valor vence):
       if (densidade1 < densidade2) {
           printf("Carta 1 venceu!");
       } else {
           printf("Carta 2 venceu!");
       }
    */

    return 0;
}