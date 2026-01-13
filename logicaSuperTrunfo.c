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

    int opcao1, opcao2;
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;
    char nomeAttr1[30], nomeAttr2[30];

    // --- MENU INTERATIVO ---
    printf("\nEscolha o atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    printf("\n========================================\n");

    switch (opcao1) {
        case 1:
            valor1_attr1 = pop1;
            valor2_attr1 = pop2;
            sprintf(nomeAttr1, "Populacao");
            break;
        case 2:
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            sprintf(nomeAttr1, "Area");
            break;
        case 3:
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            sprintf(nomeAttr1, "PIB");
            break;
        case 4:
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            sprintf(nomeAttr1, "Densidade Demografica");
            break;
        case 5:
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            sprintf(nomeAttr1, "PIB per Capita");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    /* ===== MENU SEGUNDO ATRIBUTO (DINAMICO) ===== */
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Densidade Demografica\n");
    if (opcao1 != 5) printf("5 - PIB per Capita\n");

    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao2 == opcao1) {
        printf("Erro: atributo repetido!\n");
        return 1;
    }

    switch (opcao2) {
        case 1:
            valor1_attr2 = pop1;
            valor2_attr2 = pop2;
            sprintf(nomeAttr2, "Populacao");
            break;
        case 2:
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            sprintf(nomeAttr2, "Area");
            break;
        case 3:
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            sprintf(nomeAttr2, "PIB");
            break;
        case 4:
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            sprintf(nomeAttr2, "Densidade Demografica");
            break;
        case 5:
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            sprintf(nomeAttr2, "PIB per Capita");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    /* ===== SOMA DOS ATRIBUTOS ===== */
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    /* ===== RESULTADO FINAL ===== */
    printf("\n===== RESULTADO DA BATALHA =====\n\n");

    printf("%s vs %s\n\n", nome1, nome2);

    printf("Atributo 1: %s\n", nomeAttr1);
    printf("%s: %.2f | %s: %.2f\n\n",
           nome1, valor1_attr1, nome2, valor2_attr1);

    printf("Atributo 2: %s\n", nomeAttr2);
    printf("%s: %.2f | %s: %.2f\n\n",
           nome1, valor1_attr2, nome2, valor2_attr2);

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n\n", nome2, soma2);

    printf("Resultado Final: ");
    printf("%s\n",
           soma1 > soma2 ? nome1 :
           soma2 > soma1 ? nome2 :
           "Empate!");

    return 0;
}