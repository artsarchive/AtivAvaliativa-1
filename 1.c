#include <stdio.h>

int desenhaQuadrado(int tamanho, int vazado) {

  if (tamanho <= 0 || tamanho > 20) {
    printf("Tamanho inválido");
    return 1;
  }

  if (vazado != 0 && vazado != 1) {
    printf("Opcao invalida");
    return 1;
  }

  if (vazado == 0) {

    for (int i = 0; i < tamanho; i++) {
      for (int j = 0; j < tamanho; j++) {

        printf("*");
      }
      printf("\n");
    }

    return 0;
  }

  else if (vazado == 1) {

    for (int i = 0; i < tamanho; i++) {
    for (int j = 0; j < tamanho; j++) {

     if (i == 0 || j == 0 || i == tamanho - 1 || j == tamanho - 1)

     printf("*");
        else
          printf(" ");
      }

      printf("\n");
    }
  }
  return 0;
}

int main(void) {

  int tamanho, vazado;

  printf("Digite o tamanho do quadrado: ");
  scanf("%d", &tamanho);

  printf("\nDigite se o quadrado será vazado ou não(0 para não e 1 para sim): ");
  scanf("%d", &vazado);

  desenhaQuadrado(tamanho, vazado);

  return 0;
}
