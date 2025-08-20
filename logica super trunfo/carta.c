#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica; // população / área
} Carta;

// Função para comparar e mostrar o resultado
void compararCartas(Carta c1, Carta c2, int atributo) {
    printf("\n=== Comparação ===\n");
    printf("País 1: %s\n", c1.nome);
    printf("País 2: %s\n", c2.nome);

    switch (atributo) {
        case 1: // População
            printf("\nAtributo: População\n");
            printf("%s: %d habitantes\n", c1.nome, c1.populacao);
            printf("%s: %d habitantes\n", c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao) printf("Vencedor: %s\n", c1.nome);
            else if (c2.populacao > c1.populacao) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;

        case 2: // Área
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n", c1.nome, c1.area);
            printf("%s: %.2f km²\n", c2.nome, c2.area);
            if (c1.area > c2.area) printf("Vencedor: %s\n", c1.nome);
            else if (c2.area > c1.area) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;

        case 3: // PIB
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f bilhões\n", c1.nome, c1.pib);
            printf("%s: %.2f bilhões\n", c2.nome, c2.pib);
            if (c1.pib > c2.pib) printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", c1.nome, c1.pontosTuristicos);
            printf("%s: %d pontos\n", c2.nome, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos) printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontosTuristicos > c1.pontosTuristicos) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", c1.nome, c1.densidadeDemografica);
            printf("%s: %.2f hab/km²\n", c2.nome, c2.densidadeDemografica);
            if (c1.densidadeDemografica < c2.densidadeDemografica) printf("Vencedor: %s\n", c1.nome);
            else if (c2.densidadeDemografica < c1.densidadeDemografica) printf("Vencedor: %s\n", c2.nome);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    // Duas cartas de exemplo (você pode trocar pelos dados do desafio anterior)
    Carta carta1 = {"Brasil", 214000000, 8515767.0, 18470.0, 30, 214000000 / 8515767.0};
    Carta carta2 = {"Portugal", 10300000, 92212.0, 252.0, 15, 10300000 / 92212.0};

    int escolha;

    printf("=== Super Trunfo ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &escolha);

    compararCartas(carta1, carta2, escolha);

    return 0;
}

