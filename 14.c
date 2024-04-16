#include <stdio.h>
#include <math.h>

void normaliza(double x_inout[], int n);

// Fun��o para calcular o valor m�dio de um array
double valorMedioG(double x[], int n) {
    double soma = 0.0;

    // Percorre todos os valores na array e os soma
    for (int i = 0; i < n; i++)
        soma += x[i];

    // Calcula a m�dia
    double media = soma / n;

    return media;
}

// Fun��o para normalizar os valores de um array para que tenham m�dia zero
void normaliza(double x_inout[], int n) {
    double media = valorMedioG(x_inout, n); // Calcula a m�dia dos valores do array
    for (int i = 0; i < n; i++) {
        x_inout[i] -= media; // Subtrai a m�dia de cada elemento do array
    }
}

int main() {
    double array[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Valores originais:\n");
    for (int i = 0; i < n; i++) {
        printf("%.1f ", array[i]);
    }
    printf("\n");

    // Normaliza o array para ter m�dia zero
    normaliza(array, n);

    printf("Valores normalizados (m�dia zero):\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", array[i]);
    }
    printf("\n");

    return 0;
}

