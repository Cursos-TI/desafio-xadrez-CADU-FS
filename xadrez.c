#include <stdio.h>

int main() {
  // Variáveis que armazenam o movimento das peças
  char cima[5] = "Cima";
  char esquerda[9] = "Esquerda";
  char baixo[6] = "Baixo";
  char direita[8] = "Direita";

  // Movimenta a Torre cinco casas para a direita
  printf("Movimento da Torre 5 casas para direita:\n");
  for(int i = 0; i < 5; i++) {
    printf("%s\n", direita);
  }

  printf("\n");

  // Movimenta o Bispo cinco casas na diagonal para cima e para direita
  // A variável j é usada como variável de controle para a estrutura de repetição while
  int j = 0;
  printf("Movimento do Bispo 5 casas na diagonal para cima e para direita:\n");
  while (j < 5) {
    printf("%s %s\n", cima, direita);

    j++;
  }

  printf("\n");

  // Movimenta a Rainha oito casas para a esquerda
  // A variável j é reinicializada e reutilizada como variável de controle da estrutura de repetição do-while
  j = 0;
  printf("Movimento da Rainha 8 casas para esquerda:\n");
  do {
    printf("%s\n", esquerda);

    j++;
  } while (j < 8);

  printf("\n");

  // Movimenta o Cavalo duas casas para baixo e uma casa para esquerda
  // A variável j é reinicializada e reutilizada como variável de controle da estrutura de repetição while
  // O while será executado apenas uma vez pois a variável de controle passa do limite da condição
  // O for imprime o movimento para baixo uma vez por iteração, totalizando 2 movimentos
  j = 0;
  printf("Movimento do Cavalo duas casas para baixo e uma casa para esquerda:\n");
  while(j == 0) {
    for(int i = 0; i <= 1; i++) {
      printf("%s\n", baixo);
    }
    printf("%s\n", esquerda);
    j++;
  }

  return 0;
}