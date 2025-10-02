#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    
    char estadoC1[2];                 
    char codigoC1[4];
    char nomedacidadeC1[30];            // variáveis da carta 1
    int populacaoC1;
    float areaC1;
    float PIBC1;
    int NpontosturisticosC1;

    char estadoC2[2];                 
    char codigoC2[4];
    char nomedacidadeC2[30];            // variáveis da carta 2
    int populacaoC2;
    float areaC2;
    float PIBC2;
    int NpontosturisticosC2;

    // início do informe de dados da primeira carta
    
    printf("Insira os dados da primeira carta:\n\n"); // pede a inclusão dos dados da 1° carta e pula 2 linhas
    
    printf("Estado: "); 
    scanf("%s", estadoC1); // mostra na tela o texto "Estado:" e em seguida pede a letra correspondente
    printf("\n"); // pula uma linha

    printf("Código da Carta: "); 
    scanf("%s", codigoC1); // mostra na tela o texto "Código da Carta" e em seguida pede o código
    printf("\n"); // pula uma linha

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidadeC1); /*IMPORTANTE*: o professor ainda não ensinou
                                        como permitir que o usuário insira um nome que contém
                                        espaço no meio, porém eu pesquisei e consegui descobrir uma forma
                                        de fazer isso, pois no exemplo do resultado dessa atividade, estava
                                        escrito "São Paulo" então eu pensei em deixar o código
                                        de maneira que colocar o nome de cidades compostas como:
                                        "São Paulo" e "Belo Horizonte", seja possível*/
    printf("\n"); // pula uma linha
    
    printf("População: ");
    scanf("%d", &populacaoC1); // pede ao usuário que coloque o dado: população e armazena-o na variável indicada
    printf("\n"); // pula uma linha
    
    printf("Área: ");
    scanf("%f", &areaC1);      // pede ao usuário que coloque o dado: área e armazena-o na variável indicada
    printf("\n"); // pula uma linha

    printf("PIB: ");
    scanf("%f", &PIBC1);       // pede ao usuário que coloque o dado: PIB e armazena-o na variável indicada
    printf("\n"); // pula uma linha
    
    printf("Número de Pontos Turísticos: ");    // pede ao usuário que coloque o dado: N° de pontos turísticos e armazena-o na variável indicada
    scanf("%d", &NpontosturisticosC1);
    printf("\n"); // pula uma linha
    
    // início do informe de dados informados sobre as cartas
    
    printf("Insira os dados da segunda carta:\n\n"); // pede a inclusão dos dados da 2° carta
    
    printf("Estado: "); 
    scanf("%s", estadoC2); // mostra na tela o texto "Estado:" e em seguida pede a letra correspondente
    printf("\n"); // pula uma linha

    printf("Código da Carta: "); 
    scanf("%s", codigoC2); // mostra na tela o texto "Código da Carta" e em seguida pede o código
    printf("\n"); // pula uma linha

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomedacidadeC2);  // pede ao usuário que coloque o dado: nome da cidade e armazena-o na variável indicada
    printf("\n"); // pula uma linha

    printf("População: ");
    scanf("%d", &populacaoC2);        // pede ao usuário que coloque o dado: população e armazena-o na variável indicada
    printf("\n"); // pula uma linha

    printf("Área: ");
    scanf("%f", &areaC2);             // pede ao usuário que coloque o dado: área e armazena-o na variável indicada
    printf("\n"); // pula uma linha

    printf("PIB: ");
    scanf("%f", &PIBC2);              // pede ao usuário que coloque o dado: PIB e armazena-o na variável indicada
    printf("\n"); // pula uma linha

    printf("Número de Pontos Turísticos: ");    // pede ao usuário que coloque o dado: N° de pontos turísticos e armazena-o na variável indicada
    scanf("%d", &NpontosturisticosC2);
    printf("\n"); // pula uma linha

    // aparição dos dados informados da 1° carta
    
    printf("Carta 1:\n\n"); 

    printf("Estado: %s\n", estadoC1);
    printf("Código: %s\n", codigoC1);
    printf("Nome da Cidade: %s\n", nomedacidadeC1);  // indicação dos dados inseridos pelo usuário da carta 1
    printf("População: %d\n", populacaoC1);
    printf("Área: %.2f km²\n", areaC1);
    printf("PIB: %.2f bilhões de reais\n", PIBC1);
    printf("Número de Pontos Turísticos: %d\n\n", NpontosturisticosC1);

    // aparição dos dados informados sobre a 2° carta

    printf("Carta 2:\n\n");

    printf("Estado: %s\n", estadoC2);
    printf("Código: %s\n", codigoC2);
    printf("Nome da Cidade: %s\n", nomedacidadeC2);  // indicação dos dados inseridos pelo usuário da carta 2
    printf("População: %d\n", populacaoC2);
    printf("Área: %.2f km²\n", areaC2);
    printf("PIB: %.2f bilhões de reais\n", PIBC2);
    printf("Número de Pontos Turísticos: %d\n", NpontosturisticosC2);


    return(0);
} 
