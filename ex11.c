#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da em C, necess�ria para usar fun��es como printf e scanf.
#include "Biblioteca/lista_01.h"

int main() { // Define a fun��o principal main.
    int array_teste[] = {1, 2, 3, 4, 5}; // Declara e inicializa um array de teste com alguns valores.
    int tamanho = sizeof(array_teste) / sizeof(array_teste[0]); // Calcula o tamanho do array.

    printf("Array: {"); // Imprime uma mensagem indicando que o array ser� exibido.
    for (int i = 0; i < tamanho; ++i) { // Itera sobre os elementos do array.
        printf("%d", array_teste[i]); // Imprime o elemento atual do array.
        if (i < tamanho - 1) { // Verifica se n�o � o �ltimo elemento do array.
            printf(", "); // Se n�o for o �ltimo elemento, imprime uma v�rgula e um espa�o.
        }
    }
    printf("}\n"); // Imprime um fechamento de chaves para indicar o fim do array.

    printf("M�dia: %.2f\n", media_array_recursiva(array_teste, tamanho)); // Imprime a m�dia dos elementos do array de teste.

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
