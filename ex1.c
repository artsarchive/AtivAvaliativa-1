#include <stdio.h>
#include "Biblioteca/lista_01.h"

int main(void) {

  int tamanho, vazado;

  printf("Digite o tamanho do quadrado: ");
  scanf("%d", &tamanho);

  printf("\nDigite se o quadrado ser� vazado ou n�o(0 para n�o e 1 para sim): ");
  scanf("%d", &vazado);

  desenhaQuadrado(tamanho, vazado);

  return 0;
}
