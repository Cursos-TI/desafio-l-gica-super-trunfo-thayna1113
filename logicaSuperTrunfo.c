#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    
  //variaveis a ser ultilizada
    char estado1[3] = "01", estado2[3] = "02";
    char codigo1[5] = "a", codigo2[5] = "b";
    char cidade1[50] = "saopaulo", cidade2[50] = "riodejaneiro";
    int populacao1 = 12325000, populacao2 = 6748000;
    float area1 = 1521.11, area2 = 1200.25;
    float pib1 = 699.28, pib2 = 300.50;
    int pontosturisticos1 = 50, pontosturisticos2 = 30;
    float pib_per_capital1 = 56724.32, pib_per_capital2 = 44532.91;
    float densidade_populacional1 = 8102.47, densidade_populacional2 = 5622.24;
    int opcao1, opcao2; 
    int resultado1, resultado2;
    

  printf("**Bem vindo oa jogo super trunfo**\n");

  //opçao de comparação da primeira carta
  printf("escolha a primeira opçao:\n");
  printf("1. populacao\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. pontosturisticos\n");
  printf("5. densidade\n");
  scanf("%d", &opcao1);

  printf("Escolha a comparaçao:\n");
 
  switch (opcao1)
  {
  case 1:
    printf("População\n");
    resultado1 = populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
    printf("Area\n");
    resultado1 = area1 > area2 ? 1 : 0;
    break;
    case 3:
    printf("Pib\n");
    resultado1 = pib1 > pib2 ? 1 : 0;
    break;
    case 4:
    printf("Pontos turisticos\n");
    resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;
    case 5:
    printf("Densidade\n");
    resultado1 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    break;
  default:
  printf("Opção invalida!");
    break;
  }
//opçao de comparação da segunda carta
  printf("escolha a segunda opçao:\n");
  printf("1. populacao\n");
  printf("2. area\n");
  printf("3. pib\n");
  printf("4. pontosturisticos\n");
  printf("5. densidade\n");
  scanf("%d", &opcao2);

  printf("Escolha a comparaçao:\n");

if(opcao1 == opcao2){
  printf("Voce escolheu a mesma opção!!"); //para evitar que rode com a mesma carta
} else {
  switch (opcao2)
  {
  case 1:
    printf("População\n");
    resultado2 = populacao1 > populacao2 ? 1 : 0;
    break;
    case 2:
    printf("Area\n");
    resultado2 = area1 > area2 ? 1 : 0;
    break;
    case 3:
    printf("Pib\n");
    resultado2 = pib1 > pib2 ? 1 : 0;
    break;
    case 4:
    printf("Pontos turisticos\n");
    resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
    break;
    case 5:
    printf("Densidade\n");
    resultado2 = densidade_populacional1 < densidade_populacional2 ? 1 : 0;
    break;
  default:
  printf("Opção invalida!");//apenas para que o jogador saiba porque o jogo nao rodou
    break;
  }

  if (resultado1 && resultado2){
    printf("Parabéns voce ganhou!!\n");
  } else if(resultado1 != resultado2){
    printf("Empatou!!\n");
  } else{
    printf("Infelizmente, voce perdeu!!\n");
  }
}

    return 0;
}