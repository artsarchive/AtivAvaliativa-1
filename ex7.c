#include <stdio.h>
#include "Biblioteca/lista_01.h"

int main() {
    int tamanho, tipo;
    printf("Digite a altura do tri�ngulo: ");
    scanf("%d", &tamanho);
    printf("Escolha o tipo de tri�ngulo (1-4):\n");
    printf("1 - Tri�ngulo ret�ngulo\n");
    printf("2 - Tri�ngulo ret�ngulo invertido\n");
    printf("3 - Tri�ngulo ret�ngulo invertido espelhado\n");
    printf("4 - Tri�ngulo ret�ngulo alinhado � direita\n");
    scanf("%d", &tipo);

    if (desenhaTriangulo(tamanho, tipo) != 0) {
        printf("Erro ao desenhar o tri�ngulo.\n");
    }

    return 0;
}
