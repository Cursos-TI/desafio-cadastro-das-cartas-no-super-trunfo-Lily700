#include <stdio.h>

typedef struct {

    char estado [50], codigo [10], cidade [50];
    float tamanho;           // area em km²
    float pib;
    int moradores, turismo;
} Cidade;

int main(){
    Cidade c1, c2;
    
//Cadastro Primeira cidade
    printf ("Qual o Estado? \n");
    scanf ("%s", &c1.estado);
    printf ("Qual o codigo? \n");
    scanf ("%s", &c1.codigo);
    printf ("Qual o nome da cidade? \n");
    scanf("%s", &c1.cidade);
    printf ("Quantos Habitantes tem? \n");
    scanf ("%d", &c1.moradores);
    printf ("Qual a area em km²? \n");
    scanf ("%d", & c1.tamanho);
    printf ("Qual o PIB dessa Cidade? \n");
    scanf ("%f", &c1.pib);
    printf ("Quantos Pontos Turisticos tem? \n");
    scanf ("%d", &c1.turismo);
    getchar();      //limpar o buffer

// Cadastro Segunda Cidade
    printf ("Qual o Estado? \n");
    scanf ("%s", &c2.estado);
    printf ("Qual o codigo? \n");
    scanf ("%s", &c2.codigo);
    printf ("Qual o nome da cidade? \n");
    scanf("%s", &c2.cidade);
    printf ("Quantos Habitantes tem? \n");
    scanf ("%d", &c2.moradores);
    printf ("Qual a area em km²? \n");
    scanf ("%d", & c2.tamanho);
    printf ("Qual o PIB dessa Cidade? \n");
    scanf ("%f", &c2.pib);
    printf ("Quantos Pontos Turisticos tem? \n");
    scanf ("%d", &c2.turismo);
    
    //Exibição das cidades
    printf("\n--- Cartas Cadastradas ---\n");

    printf("\nCidade 1:\n");
    printf("Estado: %s\n", c1.estado);
    printf("Codigo: %s\n", c1.codigo);
    printf("Cidade: %s\n", c1.cidade);
    printf("Habitantes: %d\n", c1.moradores);
    printf("Area km²: %2f\n", &c1.tamanho);
    printf("PIB per capita: %2f\n", c1.pib);
    printf("Pontos Turisticos: %d/n", c1.turismo);

     printf("\nCidade 2:\n");
    printf("Estado: %s\n", c2.estado);
    printf("Codigo: %s\n", c2.codigo);
    printf("Cidade: %s\n", c2.cidade);
    printf("Habitantes: %d\n", c2.moradores);
    printf("Area km²: %2f\n", &c2.tamanho);
    printf("PIB per capita: %2f\n", c2.pib);
    printf("Pontos Turisticos: %d/n", c2.turismo);

return 0;

}