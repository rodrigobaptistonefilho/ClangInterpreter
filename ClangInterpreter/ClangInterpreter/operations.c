#include <stdio.h>

int soma(int a, int b) {
  return a+b;
}

int subtracao(int a, int b) {
  return a-b;
}

int multiplicar(int a, int b) {
  return a*b;
}

int divisao(int a, int b) {
  return a/b;
}

int resto(int a, int b) {
  return a%b;
}

int main() {
  int a;
  int b;

  printf("Digite um numero: ");
  scanf("%d", &a);

  printf("Digite outro numero: ");
  scanf("%d", &b);

  int resultadosoma = soma(a, b);
  int resultadosubtracao = subtracao(a, b);
  int resultadomultiplicacao = multiplicar(a, b);
  int resultadodivisao = divisao(a, b);
  int resultadoresto = resto(a, b);

  printf("\nSoma dos numeros: %d\n", resultadosoma);
  printf("Subtracao dos numeros: %d\n", resultadosubtracao);
  printf("Multiplicação dos numeros: %d\n", resultadomultiplicacao);
  printf("Divisão dos numeros: %d\n", resultadodivisao);
  printf("Resto da divisso dos numeros: %d\n", resultadoresto);

  return 0;
}
