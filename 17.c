#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da

// Fun��o recursiva para encontrar o maior valor em um array
int encontrarMaiorRecursivo(int array[], int tamanho) {
    // Caso base: Se o tamanho do array for 1, retorne o �nico elemento
    if (tamanho == 1) {
        return array[0]; // Retorna o �nico elemento do array
    }

    // Chamada recursiva: Encontra o maior valor entre o primeiro elemento e o restante do array
    int max_resto = encontrarMaiorRecursivo(array + 1, tamanho - 1);

    // Comparar o maior valor do restante do array com o primeiro elemento
    if (array[0] > max_resto) {
        return array[0]; // Retorna o primeiro elemento se for maior que o m�ximo do restante
    } else {
        return max_resto; // Retorna o m�ximo do restante se for maior ou igual ao primeiro elemento
    }
}

// Fun��o principal do programa
int main() {
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho); // L� o tamanho do array fornecido pelo usu�rio

    int array[tamanho]; // Declara��o de um array de inteiros com o tamanho fornecido

    printf("Digite os valores do array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &array[i]); // Preenche o array com valores fornecidos pelo usu�rio
    }

    int maior_valor = encontrarMaiorRecursivo(array, tamanho); // Encontra o maior valor do array

    printf("O maior valor do array �: %d\n", maior_valor); // Imprime o maior valor encontrado

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
