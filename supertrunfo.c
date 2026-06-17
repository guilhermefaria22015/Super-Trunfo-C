#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[8];
  char estado2[8];
  char codigocarta[8];
  char codigocarta2[8];
  char nomecidade[50];
  char nomecidade2[50];
  int populacao;
  int populacao2;
  int pontos;
  int pontos2;
  float area;
  float area2;
  float pib;
  float pib2;
  float denpop;
  float pibpercap;
  float denpop2;
  float pibpercap2;
  float cartaganhadora;
  int atributoescolhido;
  

  // Área para entrada de dados
  // carta 1
  printf("Digite o estado: \n");
  scanf("%s", &estado);

  printf("Digite o código da carta(preferível DDD): \n");
  scanf("%s", &codigocarta);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nomecidade);

  printf("Digite o número de habitantes na cidade: \n");
  scanf("%d", &populacao);

  printf("Digite a área da cidade em km2: \n");
  scanf("%f", &area);

  printf("Digite o pib da cidade: \n");
  scanf("%f", &pib);

  printf("Digite o a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &pontos);

  //carta2 
  printf("Por favor, após essa etapa digite os dados da segunda cidade! \n");
  printf("Digite o estado: \n");
  scanf("%s", &estado2);

  printf("Digite o código da carta(preferível DDD): \n");
  scanf("%s", &codigocarta2);

  printf("Digite o nome da cidade: \n");
  scanf("%s", &nomecidade2);

  printf("Digite o número de habitantes na cidade: \n");
  scanf("%d", &populacao2);

  printf("Digite a área da cidade em km2: \n");
  scanf("%f", &area2);

  printf("Digite o pib da cidade: \n");
  scanf("%f", &pib2);

  printf("Digite o a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &pontos2);


  // Área para exibição dos dados da cidade
  //carta1
  printf("Carta 1: \n");
  printf("Estado: %s \n", estado);
  printf("Código: %s \n", codigocarta);
  printf("Nome da cidade: %s \n", nomecidade);
  printf("Número de habitantes: %d \n", populacao);
  printf("Quantidade de pontos turísticos: %d \n", pontos);
  printf("Área da cidade em km2: %f \n", area);
  printf("PIB da cidade: %f \n", pib); 
  denpop = populacao / area;
  printf("Densidade Populacional: %.2f \n", denpop); 
  pibpercap = pib / populacao;
  printf("PIB per Capita: %.2f \n", pibpercap);

  //carta2
  printf("Carta 2: \n");
  printf("Estado: %s \n", estado2);
  printf("Código: %s \n", codigocarta2);
  printf("Nome da cidade: %s \n", nomecidade2);
  printf("Número de habitantes: %d \n", populacao2);
  printf("Quantidade de pontos turísticos: %d \n", pontos2);
  printf("Área da cidade em km2: %f \n", area2);
  printf("PIB da cidade: %f \n", pib2);
  denpop2 = populacao2 / area2;
  printf("Densidade Populacional: %.2f \n", denpop2); 
  pibpercap2 = pib2 / populacao2;
  printf("PIB per Capita: %.2f \n", pibpercap2);

   // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    //cartaganhadora = populacao > populacao2;
    printf("Escolha um atributo para comparação das cartas:\n");
    printf("1. Nome da cidade\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade populacional\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &atributoescolhido);

    switch (atributoescolhido)
{
case 1:
    printf("Comparação por nome da cidade:\n");
    printf("Carta 1: %s\n", nomecidade);
    printf("Carta 2: %s\n", nomecidade2);
    printf("Nomes não podem ser comparados no jogo.\n");
    break;

case 2:
    printf("Comparação por população:\n");
    printf("%s: %d habitantes\n", nomecidade, populacao);
    printf("%s: %d habitantes\n", nomecidade2, populacao2);
    if (populacao > populacao2)
    {
        printf("Carta vencedora: %s\n", nomecidade);
    }
    else if (populacao2 > populacao)
    {
        printf("Carta vencedora: %s\n", nomecidade2);
    }
    else
    {
        printf("Empate!\n");
    }
    break;

case 3:
    printf("Comparação por área:\n");
    printf("%s: %.2f km²\n", nomecidade, area);
    printf("%s: %.2f km²\n", nomecidade2, area2);
    if (area > area2)
    {
        printf("Carta vencedora: %s\n", nomecidade);
    }
    else if (area2 > area)
    {
        printf("Carta vencedora: %s\n", nomecidade2);
    }
    else
    {
        printf("Empate!\n");
    }
    break;

case 4:
    printf("Comparação por PIB:\n");
    printf("%s: %.2f\n", nomecidade, pib);
    printf("%s: %.2f\n", nomecidade2, pib2);
    if (pib > pib2)
    {
        printf("Carta vencedora: %s\n", nomecidade);
    }
    else if (pib2 > pib)
    {
        printf("Carta vencedora: %s\n", nomecidade2);
    }
    else
    {
        printf("Empate!\n");
    }
    break;

case 5:
    printf("Comparação por pontos turísticos:\n");
    printf("%s: %d pontos turísticos\n", nomecidade, pontos);
    printf("%s: %d pontos turísticos\n", nomecidade2, pontos2);
    if (pontos > pontos2)
    {
        printf("Carta vencedora: %s\n", nomecidade);
    }
    else if (pontos2 > pontos)
    {
        printf("Carta vencedora: %s\n", nomecidade2);
    }
    else
    {
        printf("Empate!\n");
    }
    break;

case 6:
    printf("Comparação por densidade populacional:\n");
    printf("%s: %.2f hab/km²\n", nomecidade, denpop);
    printf("%s: %.2f hab/km²\n", nomecidade2, denpop2);

    // Regra invertida:
    if (denpop < denpop2)
    {
        printf("Carta vencedora: %s\n", nomecidade);
    }
    else if (denpop2 < denpop)
    {
        printf("Carta vencedora: %s\n", nomecidade2);
    }
    else
    {
        printf("Empate!\n");
    }
    break;

default:
    printf("Opção inválida!\n");
    break;
}

    return 0;
    
} 









 /*if(atributoescolhido == populacao || atributoescolhido == populacao2){
        printf("O atributo escolhido foi população:\n");
    } else if(atributoescolhido == area || atributoescolhido == area2){
        printf("O atributo escolhido foi área\n");
    } else if(atributoescolhido == pib || atributoescolhido == pib2){
        printf("O atributo escolhido foi PIB\n");
    } else if(atributoescolhido == pontos || atributoescolhido == pontos2){
        printf("O atributo escolhido foi número de pontos turísticos\n");
    } else {
        printf("O atributo escolhido foi densidade populacional\n");
    }*/


    //printf("O atributo escolhido foi: %d \n", atributoescolhido);
    //(populacao > populacao2) {
    //    printf("Cidade 1 tem maior população.\n", &cartaganhadora);
    //} else if (populacao2 > populacao){
    //    printf("Cidade 2 tem maior população.\n", &cartaganhadora);
    //} else {
    //   printf("Temos um empate!\n");
    //}
//if 