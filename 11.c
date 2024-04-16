#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 

#define TAM 5


// Função para calcular o valor médio de um array de valores double de forma recursiva
double valorMedioG(double x[], int N){
     
    // Caso base: quando o tamanho do array é 0, retorna 1
    if (N == 0)
    return 1;  
    return (x[N - 1] + (N - 1)* valorMedioG(x, N - 1))/ N ;
}
int main() {
    int N = TAM;
    double x[N] ; 
  srand(time(NULL)); 

  for (int i = 0; i < N; i++) {
        x[i] = rand() % 5;
  }

    printf("Valores aleatórios:\n");
    for (int i = 0; i < N; i++) {
        printf("%.1f ", x[i]);
    }
    printf("\n");
    

    printf("Valor médio: %.2f\n", valorMedioG(x, N));

    return 0;
}