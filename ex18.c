#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da
#include <string.h> // Inclui a biblioteca para manipula��o de strings
#include "Biblioteca/lista_01.h"

// Fun��o principal do programa
int main() {
    char string[100]; // Declara��o de um array de caracteres para armazenar a string

    printf("Digite uma string: "); // Solicita ao usu�rio que digite uma string
    fgets(string, sizeof(string), stdin); // L� uma linha de texto digitada pelo usu�rio

    // Remover o caractere de nova linha, se houver
    if (string[strlen(string) - 1] == '\n') {
        string[strlen(string) - 1] = '\0';
    }

    // Chamada da fun��o contarCaractereARecursivo com a string digitada e �ndice inicial 0
    int quantidade = contarCaractereARecursivo(string, 0);

    // Imprime a quantidade de caracteres 'a' ou 'A' na string
    printf("A quantidade de caracteres 'a' ou 'A' na string �: %d\n", quantidade);

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
