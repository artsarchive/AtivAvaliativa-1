#include <stdio.h>

/* Modifique a fun��o do Exerc�cio 8 para que, agora, receba o tamanho do array como um par�metro passado por valor. A nova fun��o deve ter o seguinte cabe�alho:
    double valorMedio(double x[ ], int n);
A quantidade de elementos no array � passada no par�metro n. Implemente uma aplica��o que demonstra a aplica��o da fun��o. */

//funcao com uma array de numeros tipo double e um inteiro n como parametros
//retorna um valor double, servindo pra representar a media ja calculada
double valorMedio(double x[], int n) {
  //� bom identificar o valor para evitar erros
  double soma = 0.0;

  //atraves disso, podemos percorrer a array e somar todos os elementos dentro dele, atribuindo o resultado a variavel soma
  for (int i = 0; i < n; i++)
    soma += x[i];

  //divide a soma pelo numero total de elementos
  //formula da media
  double media = soma / n;

  //retorna o valor armazenado em media
  return media;
}

int main(void) {
  //serve para inicializar uma array chamada valores com os numeros definidos
  double valores[] = {1, 2, 3, 4, 5};

  //divide o total da array por um unico elemento, resultando no numero total de elementos da array
  int tamanho = sizeof(valores) / sizeof(valores[0]);

  //a funcao e chamada, tendo como parametros a array valores e o tamanho dele
  double media = valorMedio(valores, tamanho);

  //imprime o resultado na tela
  printf("Resultado: %.2f", media);

  return 0;
}
