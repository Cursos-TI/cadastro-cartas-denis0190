#include <stdio.h>

int main() {
    char estadoC1[3];
    char codigoC1[4];
    char nomedacidadeC1[30];
    unsigned long int populacaoC1;
    float areaC1;
    float PIBC1;
    int NpontosturisticosC1;

    char estadoC2[3];
    char codigoC2[4];
    char nomedacidadeC2[30];
    unsigned long int populacaoC2;
    float areaC2;
    float PIBC2;
    int NpontosturisticosC2;

    printf("Insira os dados da primeira carta:\n\n");
    printf("Estado: ");
    scanf("%2s", estadoC1);
    printf("Código da Carta: ");
    scanf("%3s", codigoC1);
    printf("Nome da Cidade: ");
    scanf(" %29[^\n]", nomedacidadeC1);
    printf("População: ");
    scanf("%lu", &populacaoC1);
    printf("Área (km²): ");
    scanf("%f", &areaC1);
    printf("PIB (em bilhões de R$): ");
    scanf("%f", &PIBC1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &NpontosturisticosC1);

    printf("\nInsira os dados da segunda carta:\n\n");
    printf("Estado: ");
    scanf("%2s", estadoC2);
    printf("Código da Carta: ");
    scanf("%3s", codigoC2);
    printf("Nome da Cidade: ");
    scanf(" %29[^\n]", nomedacidadeC2);
    printf("População: ");
    scanf("%lu", &populacaoC2);
    printf("Área (km²): ");
    scanf("%f", &areaC2);
    printf("PIB (em bilhões de R$): ");
    scanf("%f", &PIBC2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &NpontosturisticosC2);

    float densidadeC1 = (float)populacaoC1 / areaC1;
    float densidadeC2 = (float)populacaoC2 / areaC2;
    float pibPerCapitaC1 = (PIBC1 * 1000000000.0f) / (float)populacaoC1;
    float pibPerCapitaC2 = (PIBC2 * 1000000000.0f) / (float)populacaoC2;
    float invDensC1 = areaC1 / (float)populacaoC1;
    float invDensC2 = areaC2 / (float)populacaoC2;
    float superPoderC1 = (float)populacaoC1 + areaC1 + PIBC1 + (float)NpontosturisticosC1 + pibPerCapitaC1 + invDensC1;
    float superPoderC2 = (float)populacaoC2 + areaC2 + PIBC2 + (float)NpontosturisticosC2 + pibPerCapitaC2 + invDensC2;

    printf("\nCarta 1:\n\n");
    printf("Estado: %s\n", estadoC1);
    printf("Código: %s\n", codigoC1);
    printf("Nome da Cidade: %s\n", nomedacidadeC1);
    printf("População: %lu\n", populacaoC1);
    printf("Área: %.2f km²\n", areaC1);
    printf("PIB: %.2f bilhões de reais\n", PIBC1);
    printf("Número de Pontos Turísticos: %d\n", NpontosturisticosC1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeC1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaC1);
    printf("Super Poder: %.2f\n\n", superPoderC1);

    printf("Carta 2:\n\n");
    printf("Estado: %s\n", estadoC2);
    printf("Código: %s\n", codigoC2);
    printf("Nome da Cidade: %s\n", nomedacidadeC2);
    printf("População: %lu\n", populacaoC2);
    printf("Área: %.2f km²\n", areaC2);
    printf("PIB: %.2f bilhões de reais\n", PIBC2);
    printf("Número de Pontos Turísticos: %d\n", NpontosturisticosC2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeC2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaC2);
    printf("Super Poder: %.2f\n\n", superPoderC2);

    int vPop   = (populacaoC1 > populacaoC2);
    int vArea  = (areaC1 > areaC2);
    int vPIB   = (PIBC1 > PIBC2);
    int vPts   = (NpontosturisticosC1 > NpontosturisticosC2);
    int vDens  = (densidadeC1 < densidadeC2);
    int vPCap  = (pibPerCapitaC1 > pibPerCapitaC2);
    int vSP    = (superPoderC1 > superPoderC2);

    printf("Comparacao de Cartas:\n\n");
    printf("Populacao: Carta %d venceu (%d)\n", vPop  ? 1 : 2, vPop);
    printf("Area: Carta %d venceu (%d)\n",       vArea ? 1 : 2, vArea);
    printf("PIB: Carta %d venceu (%d)\n",        vPIB  ? 1 : 2, vPIB);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", vPts ? 1 : 2, vPts);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vDens ? 1 : 2, vDens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vPCap ? 1 : 2, vPCap);
    printf("Super Poder: Carta %d venceu (%d)\n", vSP ? 1 : 2, vSP);

    return 0;
}
