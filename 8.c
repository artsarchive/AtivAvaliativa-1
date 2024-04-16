#include <stdio.h>

/*Implemente uma fun��o para calcular o valor m�dio de um conjunto de valores armazenados em um array de valores de tipo double. O cabe�alho da fun��o deve ser:
double valorMedioG(double x[ ]);
A quantidade de elementos no array � armazenada na vari�vel global, N, declarada como sendo de tipo int. Implemente uma aplica��o que demonstra a aplica��o da fun��o.*/

//vari�vel global
int N;

//funcao usada para calcular o valor medio de uma array com numeros tipo double
double valorMedioG(double x[]) {
  double soma = 0.0;

  //percorre todos os valores na array e os soma, armazenando na variavel soma
  for (int i = 0; i < N; i++)
    soma += x[i];

  //formula para obter a media
  double media = soma / N;

  //retorna o valor obtido na variavel media
  return media;
}

int main(void) {
  //determinada uma array chamada valores com numeros tipo double
  double valores[] = {1, 2, 3, 4, 5};
  //descobrir o tamanho da array valores
  N = sizeof(valores) / sizeof(valores[0]);

  //uso da fun�ao e atribui�ao do valor encontrado para a variavel media
  double media = valorMedioG(valores);

  printf("O valor m�dio �: %.2f\n", media);

  return 0;
}
