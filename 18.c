#include <stdio.h> // Inclui a biblioteca padr�o de entrada e sa�da
#include <string.h> // Inclui a biblioteca para manipula��o de strings

// Declara��o da fun��o contarCaractereARecursivo
int contarCaractereARecursivo(char str[], int index) {
    // Caso base: se chegarmos ao final da string, retorne 0
    if (str[index] == '\0' || str[index] == '\n') { // Verifica se o caractere atual � o nulo de termina��o ou nova linha
        return 0; // Retorna 0 se chegou ao final da string
    }

    // Verifica se o caractere atual � 'a' ou 'A' e incrementa o contador
    int contador = (str[index] == 'a' || str[index] == 'A') ? 1 : 0;

    // Chamada recursiva para verificar o restante da string
    return contador + contarCaractereARecursivo(str, index + 1);
}

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
