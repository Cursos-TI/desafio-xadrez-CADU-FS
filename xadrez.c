#include <stdio.h>

// Imprime os movimentos da torre recursivamente
void torre(char *movimento, int quantidade) {
  if(quantidade > 0) {
    printf("%s\n", movimento);
    
    torre(movimento, quantidade - 1);
  }
}

// Imprime os movimentos do bispo recursivamente
// cada loop é reponsável por imprimir uma direção específica
void bispo(char *movimento_v, char *movimento_h, int quantidade) {
  if(quantidade > 0) {
    for(int i = 0; i < 1; i++) {
      printf("%s ", movimento_v);
      for(int j = 0; j < 1; j++) {
        printf("%s\n", movimento_h);
      }
    }
    
    bispo(movimento_v, movimento_h, quantidade - 1);
  }
}

// Imprime os movimentos da rainha recursivamente
void rainha(char *movimento, int quantidade) {
  if(quantidade > 0) {
    printf("%s\n", movimento);
    
    rainha(movimento, quantidade - 1);
  }
}


int main() {
  // Variáveis que armazenam o movimento das peças
  char cima[5] = "Cima";
  char esquerda[9] = "Esquerda";
  char baixo[6] = "Baixo";
  char direita[8] = "Direita";

  // Movimenta a Torre cinco casas para a direita
  printf("Movimento da Torre 5 casas para direita:\n");
  torre(direita, 5);

  printf("\n");

  // Movimenta o Bispo cinco casas na diagonal para cima e para direita
  printf("Movimento do Bispo 5 casas na diagonal para cima e para direita:\n");
  bispo(cima, direita, 5);

  printf("\n");

  // Movimenta a Rainha oito casas para a esquerda
  printf("Movimento da Rainha 8 casas para esquerda:\n");
  rainha(esquerda, 8);

  printf("\n");

  // Movimenta o Cavalo duas casas para baixo e uma casa para esquerda
  // O for externo imprime o movimento horizontal e será executado apenas uma vez pois a variável de controle passa do limite da condição
  // O for interno imprime o movimento vertical duas vezes
  printf("Movimento do Cavalo duas casas para cima e uma casa para direita:\n");
  for(int i = 0; i < 1; i++) {
    for(int j = 0; j < 2 && i == 0; j++) {
      printf("%s\n", cima);
    }

    printf("%s\n", direita);
  }

  return 0;
}