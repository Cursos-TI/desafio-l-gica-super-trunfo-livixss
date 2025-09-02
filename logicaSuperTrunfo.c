#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo! \n");

    char estado1[20], estado2[20];
    char codigo1[20], codigo2[20];
    char NomeCidade1[100], NomeCidade2[100];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int nPontosTuristicos1, nPontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPerCapita1, pibPerCapita2;
    float superPoderC1, superPoderC2;

    // --- Entrada Carta 1 ---
    printf("Digite uma letra entre A a H: \n");
    scanf(" %s", estado1);

    printf("Digite a letra do seu estado seguida de um número entre 01 a 04: \n");
    scanf("%s", codigo1);

    printf("Digite o nome do seu estado: \n");
    scanf(" %[^\n]", NomeCidade1);

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao1);

    printf("Digite a área em metros quadrados: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB Bruto da sua cidade: \n");
    scanf(" %f", &PIB1);

    printf("Digite a quantidade de pontos turísticos da sua cidade: \n");
    scanf(" %d", &nPontosTuristicos1);

    // Cálculo dos indicadores da carta 1
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = PIB1 / populacao1;
    superPoderC1 = populacao1 + area1 + PIB1 + (float)nPontosTuristicos1 + pibPerCapita1 + (area1 / populacao1);

    printf("\n");

    // --- Entrada Carta 2 ---
    printf("Digite uma letra entre A a H: \n");
    scanf(" %s", estado2);

    printf("Digite a letra do seu estado seguida de um número entre 01 a 04: \n");
    scanf("%s", codigo2);

    printf("Digite o nome do seu estado: \n");
    scanf(" %[^\n]", NomeCidade2);

    printf("Digite a população da cidade: \n");
    scanf(" %lu", &populacao2);

    printf("Digite a área em metros quadrados: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB Bruto da sua cidade: \n");
    scanf(" %f", &PIB2);

    printf("Digite a quantidade de pontos turísticos da sua cidade: \n");
    scanf(" %d", &nPontosTuristicos2);

    // Cálculo dos indicadores da carta 2
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = PIB2 / populacao2;
    superPoderC2 = populacao2 + area2 + PIB2 + (float)nPontosTuristicos2 + pibPerCapita2 + (area2 / populacao2);

    printf("\n");

    // Saída Carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", NomeCidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2f \n", PIB1);
    printf("Número de pontos turísticos: %d \n", nPontosTuristicos1);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f \n", pibPerCapita1);
    printf("Super Poder: %f \n", superPoderC1);

    printf("\n");

    // Saída Carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de pontos turísticos: %d\n", nPontosTuristicos2);
    printf("Densidade Populacional: %.2f \n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f \n", pibPerCapita2);
    printf("Super Poder: %f \n", superPoderC2);

    printf("\n");

    // - Lógica de comparação - 
    int escolha1 = 0, escolha2 = 0;
    float valor1_1, valor1_2, valor2_1, valor2_2;
    float soma1, soma2;
    char atributoNome1[50], atributoNome2[50];

    // --- Comparação por atributo escolhido ---
    while(escolha1 < 1 || escolha1 > 7){
        printf("Escolha o primeiro atributo para comparar: \n");
        printf("1 - População:\n");
        printf("2 - Área:\n");
        printf("3 - PIB:\n");
        printf("4 - Número de pontos turísticos:\n");
        printf("5 - Densidade populacional:\n");
        printf("6 - PIB per capta:\n");
        printf("7 - Super Poder:\n");
        printf("Sua escolha: ");
        scanf("%d", &escolha1);
        
        if (escolha1 < 1 || escolha1 > 7){
            printf("Opção inválida! Tente novamente!\n");
        }
    }
    // Segundo atributo
    while(escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1){
        printf("Escolha o primeiro atributo para comparar: \n");
        for(int i = 1; i <= 7; i++){
            if( i != escolha1){
                switch(i){
                    case 1: printf("1 - Populacao\n"); 
                    break;
                    case 2: printf("2 - Area\n"); 
                    break;
                    case 3: printf("3 - PIB\n"); 
                    break;
                    case 4: printf("4 - Numero de pontos turisticos\n"); 
                    break;
                    case 5: printf("5 - Densidade Populacional\n"); 
                    break;
                    case 6: printf("6 - PIB per Capita\n"); 
                    break;
                    case 7: printf("7 - Super Poder\n"); 
                    break;
                }
            }
        }
        printf("Sua escolha: ");
        scanf("%d", &escolha2);

        if(escolha2 < 1 || escolha2 > 7 || escolha2 == escolha1){
            printf("Opção inválida! Tente novamente!\n");
        }
    }

    // Lógica para obter os valores e nomes dos atributos escolhidos
    switch (escolha1) {
        case 1: valor1_1 = populacao1; valor1_2 = populacao2; sprintf(atributoNome1, "Populacao"); 
        break;
        case 2: valor1_1 = area1; valor1_2 = area2; sprintf(atributoNome1, "Area"); 
        break;
        case 3: valor1_1 = PIB1; valor1_2 = PIB2; sprintf(atributoNome1, "PIB"); 
        break;
        case 4: valor1_1 = nPontosTuristicos1; valor1_2 = nPontosTuristicos2; sprintf(atributoNome1, "Pontos turisticos"); 
        break;
        case 5: valor1_1 = densidadePopulacional1; valor1_2 = densidadePopulacional2; sprintf(atributoNome1, "Densidade Populacional"); 
        break;
        case 6: valor1_1 = pibPerCapita1; valor1_2 = pibPerCapita2; sprintf(atributoNome1, "PIB per Capita"); 
        break;
        case 7: valor1_1 = superPoderC1; valor1_2 = superPoderC2; sprintf(atributoNome1, "Super Poder"); 
        break;
    }

    switch (escolha2) {
        case 1: valor2_1 = populacao1; valor2_2 = populacao2; sprintf(atributoNome2, "Populacao"); 
        break;
        case 2: valor2_1 = area1; valor2_2 = area2; sprintf(atributoNome2, "Area"); 
        break;
        case 3: valor2_1 = PIB1; valor2_2 = PIB2; sprintf(atributoNome2, "PIB"); 
        break;
        case 4: valor2_1 = nPontosTuristicos1; valor2_2 = nPontosTuristicos2; sprintf(atributoNome2, "Pontos turisticos"); 
        break;
        case 5: valor2_1 = densidadePopulacional1; valor2_2 = densidadePopulacional2; sprintf(atributoNome2, "Densidade Populacional"); 
        break;
        case 6: valor2_1 = pibPerCapita1; valor2_2 = pibPerCapita2; sprintf(atributoNome2, "PIB per Capita"); 
        break;
        case 7: valor2_1 = superPoderC1; valor2_2 = superPoderC2; sprintf(atributoNome2, "Super Poder"); 
        break;
    }
    
    // Calcula a soma dos atributos
    soma1 = valor1_1 + valor2_1;
    soma2 = valor1_2 + valor2_2;
    
    // --- Exibição do resultado final ---
    printf("\n--- RESULTADO DA BATALHA ---\n");
    printf("Atributos escolhidos: %s e %s\n", atributoNome1, atributoNome2);
    printf("%s: %.2f (%s) + %.2f (%s) = %.2f\n", NomeCidade1, valor1_1, atributoNome1, valor2_1, atributoNome2, soma1);
    printf("%s: %.2f (%s) + %.2f (%s) = %.2f\n", NomeCidade2, valor1_2, atributoNome1, valor2_2, atributoNome2, soma2);

    // Comparação final usando operador ternario
    printf("Vencedor: %s\n", (soma1 > soma2) ? NomeCidade1 : (soma2 > soma1) ? NomeCidade2 : "Empate");


    return 0;
}
