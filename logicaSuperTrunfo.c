#include <stdio.h>

int main() {
    // Variáveis para as cartas (Reaproveitadas do nível anterior)
    char nome1[50], nome2[50];
    int pop1, pop2, pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    int opcao;

    // --- CADASTRO SIMPLIFICADO ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);
    densidade1 = (float)pop1 / area1;

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);
    densidade2 = (float)pop2 / area2;

    // --- MENU INTERATIVO ---
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n========================================\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH E IF-ELSE ---
    switch (opcao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %d\n%s: %d\n", nome1, pop1, nome2, pop2);
            if (pop1 > pop2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pop2 > pop1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n%s: %.2f km²\n", nome1, area1, nome2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n%s: %.2f bilhões\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n%s: %d\n", nome1, pontos1, nome2, pontos2);
            if (pontos1 > pontos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (MENOR valor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n%s: %.2f hab/km²\n", nome1, densidade1, nome2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
    }

    printf("========================================\n");

    return 0;
}