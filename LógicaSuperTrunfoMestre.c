#include <stdio.h>

int main() {
    char estadoC1[3], codigoC1[4], nomedacidadeC1[30];
    unsigned long int populacaoC1;
    float areaC1, PIBC1;
    int NpontosturisticosC1;

    char estadoC2[3], codigoC2[4], nomedacidadeC2[30];
    unsigned long int populacaoC2;
    float areaC2, PIBC2;
    int NpontosturisticosC2;

    printf("Insira os dados da primeira carta:\n\n");
    printf("Estado:\n"); scanf("%2s", estadoC1);
    printf("Código da Carta:\n"); scanf("%3s", codigoC1);
    printf("Nome da Cidade:\n"); scanf(" %29[^\n]", nomedacidadeC1);
    printf("População:\n"); scanf("%lu", &populacaoC1);
    printf("Área (km²):\n"); scanf("%f", &areaC1);
    printf("PIB (em bilhões de R$):\n"); scanf("%f", &PIBC1);
    printf("Número de Pontos Turísticos:\n"); scanf("%d", &NpontosturisticosC1);

    printf("\nInsira os dados da segunda carta:\n\n");
    printf("Estado:\n"); scanf("%2s", estadoC2);
    printf("Código da Carta:\n"); scanf("%3s", codigoC2);
    printf("Nome da Cidade:\n"); scanf(" %29[^\n]", nomedacidadeC2);
    printf("População:\n"); scanf("%lu", &populacaoC2);
    printf("Área (km²):\n"); scanf("%f", &areaC2);
    printf("PIB (em bilhões de R$):\n"); scanf("%f", &PIBC2);
    printf("Número de Pontos Turísticos:\n"); scanf("%d", &NpontosturisticosC2);

    float densidadeC1 = (areaC1>0.0f)? (float)populacaoC1/areaC1 : 0.0f;
    float densidadeC2 = (areaC2>0.0f)? (float)populacaoC2/areaC2 : 0.0f;
    float pibPerCapitaC1 = (populacaoC1>0UL)? (PIBC1*1000000000.0f)/(float)populacaoC1 : 0.0f;
    float pibPerCapitaC2 = (populacaoC2>0UL)? (PIBC2*1000000000.0f)/(float)populacaoC2 : 0.0f;
    float invDensC1 = (populacaoC1>0UL)? areaC1/(float)populacaoC1 : 0.0f;
    float invDensC2 = (populacaoC2>0UL)? areaC2/(float)populacaoC2 : 0.0f;
    float superPoderC1 = (float)populacaoC1 + areaC1 + PIBC1 + (float)NpontosturisticosC1 + pibPerCapitaC1 + invDensC1;
    float superPoderC2 = (float)populacaoC2 + areaC2 + PIBC2 + (float)NpontosturisticosC2 + pibPerCapitaC2 + invDensC2;

    int op1=0, op2=0, valido=0;
    do {
        printf("\nEscolha o PRIMEIRO atributo:\n");
        printf("1) População (maior vence)\n");
        printf("2) Área (maior vence)\n");
        printf("3) PIB (maior vence)\n");
        printf("4) Pontos Turísticos (maior vence)\n");
        printf("5) Densidade Demográfica (menor vence)\n");
        printf("6) PIB per Capita (maior vence)\n");
        printf("7) Super Poder (maior vence)\n");
        printf("Opção: ");
        if (scanf("%d",&op1)!=1){ while(getchar()!='\n'); op1=0; }
        valido = (op1>=1 && op1<=7);
        if(!valido) printf("Opção inválida.\n");
    } while(!valido);

    do {
        printf("\nEscolha o SEGUNDO atributo:\n");
        for (int i=1;i<=7;i++){
            if(i==op1) continue;
            switch(i){
                case 1: printf("1) População (maior vence)\n"); break;
                case 2: printf("2) Área (maior vence)\n"); break;
                case 3: printf("3) PIB (maior vence)\n"); break;
                case 4: printf("4) Pontos Turísticos (maior vence)\n"); break;
                case 5: printf("5) Densidade Demográfica (menor vence)\n"); break;
                case 6: printf("6) PIB per Capita (maior vence)\n"); break;
                case 7: printf("7) Super Poder (maior vence)\n"); break;
            }
        }
        printf("Opção: ");
        if (scanf("%d",&op2)!=1){ while(getchar()!='\n'); op2=0; }
        valido = (op2>=1 && op2<=7 && op2!=op1);
        if(!valido) printf("Opção inválida.\n");
    } while(!valido);

    float v1C1=0.0f, v1C2=0.0f, v2C1=0.0f, v2C2=0.0f;
    int menorV1=0, menorV2=0;

    switch(op1){
        case 1: v1C1=populacaoC1; v1C2=populacaoC2; break;
        case 2: v1C1=areaC1; v1C2=areaC2; break;
        case 3: v1C1=PIBC1; v1C2=PIBC2; break;
        case 4: v1C1=NpontosturisticosC1; v1C2=NpontosturisticosC2; break;
        case 5: v1C1=densidadeC1; v1C2=densidadeC2; menorV1=1; break;
        case 6: v1C1=pibPerCapitaC1; v1C2=pibPerCapitaC2; break;
        case 7: v1C1=superPoderC1; v1C2=superPoderC2; break;
    }
    switch(op2){
        case 1: v2C1=populacaoC1; v2C2=populacaoC2; break;
        case 2: v2C1=areaC1; v2C2=areaC2; break;
        case 3: v2C1=PIBC1; v2C2=PIBC2; break;
        case 4: v2C1=NpontosturisticosC1; v2C2=NpontosturisticosC2; break;
        case 5: v2C1=densidadeC1; v2C2=densidadeC2; menorV2=1; break;
        case 6: v2C1=pibPerCapitaC1; v2C2=pibPerCapitaC2; break;
        case 7: v2C1=superPoderC1; v2C2=superPoderC2; break;
    }

    int c1Vence1 = menorV1 ? (v1C1<v1C2) : (v1C1>v1C2);
    int c1Vence2 = menorV2 ? (v2C1<v2C2) : (v2C1>v2C2);

    float somaC1 = v1C1 + v2C1;
    float somaC2 = v1C2 + v2C2;

    printf("\nComparação de Cartas\n");
    const char* nomeAttr[8]={"","População","Área","PIB","Pontos Turísticos","Densidade Demográfica","PIB per Capita","Super Poder"};
    printf("Atributo 1: %s\n", nomeAttr[op1]);
    printf("%s: %.2f | %s: %.2f -> Vencedor: Carta %d\n",
           nomedacidadeC1, v1C1, nomedacidadeC2, v1C2, c1Vence1?1:2);
    printf("\nAtributo 2: %s\n", nomeAttr[op2]);
    printf("%s: %.2f | %s: %.2f -> Vencedor: Carta %d\n",
           nomedacidadeC1, v2C1, nomedacidadeC2, v2C2, c1Vence2?1:2);
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f | %s: %.2f\n", nomedacidadeC1, somaC1, nomedacidadeC2, somaC2);

    if (somaC1 == somaC2) {
        printf("\nEmpate!\n");
    } else if (somaC1 > somaC2) {
        printf("\nCarta 1 venceu a rodada.\n");
    } else {
        printf("\nCarta 2 venceu a rodada.\n");
    }

    return 0;
}
