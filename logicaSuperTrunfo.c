#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    printf("**Desafio Super Trunfo - Países**\n");
    
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float pib_per_capital1, pib_per_capital2;
    float densidade_populacional1, densidade_populacional2;
    int opcao;

  

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

  densidade_populacional2 = populacao2 / area2;
  pib_per_capital2 = pib2 / populacao2;

  printf("a densidade populacional é:2%f \n", densidade_populacional2);
  printf("o pib per capital é:%2f \n", pib_per_capital2);
    

  printf("escolha uma opçao:\n");
  printf("1. populacao\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. pontosturisticos\n");
  printf("5. densidade\n");
  scanf("%d", &opcao);


  switch (opcao)
  {
  case 1:
    printf("populacao\n");
    if(populacao1 > populacao2){
      printf("São paulo  x  Rio de Janeiro\n");
      printf("12325000 x 674800\n");
      printf("são paulo venceu!!\n");
    } else if(populacao1 < populacao2){
      printf("rio de janeiro venceu!!\n");
    } else{
      printf("Empatou!!\n");
    }
    break;

  case 2:
      printf("area\n");
      if(area1 > area2){
        printf("São paulo  x  Rio de Janeiro\n");
        printf("1521.11 x 1200.25\n");
        printf("são paulo venceu!!\n");
      } else if(area1 < area2){
        printf("rio de janeiro venceu!!\n");
      } else{
        printf("Empatou!!\n");
      }
  break;

  case 3:
      printf("pib\n");
      if(pib1 > pib2){
        printf("São paulo  x  Rio de Janeiro\n");
        printf("699.28 x 300.50\n");
        printf("são paulo venceu!!\n");
      } else if(pib1 < pib2){
        printf("rio de janeiro venceu!!\n");
      } else{
        printf("Empatou!!\n");
      }
  break;

  case 4:
      printf("pontosturisticos\n");
      if(pontosturisticos1 > pontosturisticos2){
        printf("São paulo  x  Rio de Janeiro\n");
        printf("50 x 30\n");
        printf("são paulo venceu!!\n");
      } else if(pontosturisticos1 < pontosturisticos2){
        printf("rio de janeiro venceu!!\n");
      } else{
        printf("Empatou!!\n");
      }
  break;

  case 5:
      printf("densidade\n");
      if(densidade_populacional1 < densidade_populacional2){
        printf("são paulo venceu!!\n");
      } else if(densidade_populacional1 > densidade_populacional2){
        printf("São paulo  x  Rio de Janeiro\n");
        printf("8102.635742 x 25622.162109\n");
        printf("rio de janeiro venceu!!\n");
      } else{
        printf("Empatou!!\n");
      }
  break;

  default:
  printf("opçao invalida");
    break;
  }


    return 0;
}