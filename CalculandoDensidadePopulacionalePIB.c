#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char nomeCidade[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} CartaCidade;

void lerDadosCarta(CartaCidade *carta) {
    printf("Digite o estado (UF): ");
    scanf(" %2s", carta->estado);

    printf("Digite o código da carta: ");
    scanf(" %9s", carta->codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta->nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%d", &carta->populacao);

    printf("Digite a área da cidade (km²): ");
    scanf("%f", &carta->area);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &carta->pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    // Calculando densidade populacional e PIB per capita
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = (carta->pib * 1e9) / carta->populacao; // Convertendo bilhões para reais
}

void exibirDadosCarta(CartaCidade carta, int numero) {
    printf("\nCarta %d:\n", numero);
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Nome da Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Número de Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta.densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", carta.pibPerCapita);
}

int main() {
    CartaCidade carta1, carta2;

    printf("Digite os dados da Carta 1:\n");
    lerDadosCarta(&carta1);

    printf("\nDigite os dados da Carta 2:\n");
    getchar(); // Limpa o buffer de entrada antes de ler a próxima string
    lerDadosCarta(&carta2);

    exibirDadosCarta(carta1, 1);
    exibirDadosCarta(carta2, 2);

    return 0;
}

