#include <stdio.h>
#include <string.h>
#include "Biblioteca/lista_01.h"

int main() {
    char str[100];

    // Solicita a entrada da string ao usu�rio
    printf("Digite uma string: ");
    scanf("%s", str);

    // Verifica se a string � um pal�ndromo
    if (ehPalindromo(str))
        printf("%s � um pal�ndromo.\n", str);
    else
        printf("%s n�o � um pal�ndromo.\n", str);

    return 0;
}
