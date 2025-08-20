    // Menu interativo para escolher o atributo
    int opcao;
    printf("\n=== Escolha o atributo para comparar ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional (menor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    // Comparação com switch-case
    switch (opcao) {
        case 1:
            printf("\nComparando População:\n");
            printf("%s: %d hab | %s: %d hab\n", carta1.nomeCidade, carta1.populacao, carta2.nomeCidade, carta2.populacao);
            if (carta1.populacao > carta2.populacao)
                printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.populacao > carta1.populacao)
                printf("Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nComparando Área:\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", carta1.nomeCidade, carta1.area, carta2.nomeCidade, carta2.area);
            if (carta1.area > carta2.area)
                printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.area > carta1.area)
                printf("Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nComparando PIB:\n");
            printf("%s: %.2f bilhões | %s: %.2f bilhões\n", carta1.nomeCidade, carta1.pib, carta2.nomeCidade, carta2.pib);
            if (carta1.pib > carta2.pib)
                printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.pib > carta1.pib)
                printf("Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nComparando Pontos Turísticos:\n");
            printf("%s: %d | %s: %d\n", carta1.nomeCidade, carta1.pontosTuristicos, carta2.nomeCidade, carta2.pontosTuristicos);
            if (carta1.pontosTuristicos > carta2.pontosTuristicos)
                printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.pontosTuristicos > carta1.pontosTuristicos)
                printf("Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nComparando Densidade Populacional (menor vence):\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional, carta2.nomeCidade, carta2.densidadePopulacional);
            if (carta1.densidadePopulacional < carta2.densidadePopulacional)
                printf("Vencedor: %s\n", carta1.nomeCidade);
            else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
                printf("Vencedor: %s\n", carta2.nomeCidade);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }
