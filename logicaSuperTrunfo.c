#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    printf("**Desafio Super Trunfo - Países**\n");
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float pib_per_capital1, pib_per_capital2;
    float densidade_populacional1, densidade_populacional2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    //declaraçao de variaveis carta 1
    printf("digite o codigo da carta1:\n");
    scanf(" %s", codigo1);
    printf("digite o estado:\n");
    scanf(" %c", &estado1);
    printf("digite a cidade:\n");
    scanf(" %s", cidade1);
    printf("digite a populacao:\n");
    scanf("%d", &populacao1);
    printf("digite a area:\n");
    scanf("%f", &area1);
    printf("digite o pib:\n");
    scanf("%f", &pib1);
    printf("digite o numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

//Calcular Densidade Populacional e PIB per capita
densidade_populacional1 = populacao1 / area1;
pib_per_capital1 = pib1 / populacao1;

printf("a densidade populacional é:%2f \n", densidade_populacional1);
printf("o pib per capital é:%2f \n", pib_per_capital1);

  printf("segunda carta\n");

//declaraçao de variaveis carta 2
  printf("digite o codigo da carta2:\n");
  scanf(" %s", codigo2);
  printf("digite o estado:\n");
  scanf(" %c", &estado2);
  printf("digite a cidade:\n");
  scanf(" %s", cidade2);
  printf("digite a populacao:\n");
  scanf("%d", &populacao2);
  printf("digite a area:\n");
  scanf("%f", &area2);
  printf("digite o pib:\n");
  scanf("%f", &pib2);
  printf("digite o numero de pontos turisticos:\n");
  scanf("%d", &pontosturisticos2);

  //Calcular Densidade Populacional e PIB per capita
  densidade_populacional2 = populacao2 / area2;
  pib_per_capital2 = pib2 / populacao2;

  printf("a densidade populacional é:2%f \n", densidade_populacional2);
  printf("o pib per capital é:%2f \n", pib_per_capital2);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
 if(populacao1 > populacao2){
   printf("cidade 1 tem maior população.\n");
 } else {
    printf("cidade 2 tem maior populaçao.\n");
 }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
 printf("A cidade vencedora é: %s\n", cidade1);
    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
