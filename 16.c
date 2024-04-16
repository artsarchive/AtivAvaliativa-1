#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    // Verifica se a string tem tamanho 0 ou 1, nesse caso n�o h� nada para inverter
    if (strlen(str) <= 1)
        return;

    // Troca o primeiro e o �ltimo caractere
    char temp = str[0];
    str[0] = str[strlen(str) - 1];
    str[strlen(str) - 1] = temp;

    // Chama a fun��o recursivamente com a string sem o primeiro e o �ltimo caractere
    inverterString(&str[1]);
}

int ehPalindromo(char str[]) {
    // String auxiliar para armazenar a c�pia da string original
    char strInvertida[strlen(str) + 1];

    // Copia a string original para a string auxiliar
    strcpy(strInvertida, str);

    // Inverte a string auxiliar
    inverterString(strInvertida);

    // Compara a string original com a string invertida
    if (strcmp(str, strInvertida) == 0)
        return 1; // � um pal�ndromo
    else
        return 0; // N�o � um pal�ndromo
}

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
