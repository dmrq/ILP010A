// Receba 2 números inteiros.
// Calcule e mostre a soma dos quadrados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int a, b;
  int soma;

  printf("Digite dois números inteiros:\n");
  scanf("%d %d", &a, &b);

  soma = (a*a)+(b*b);

  printf("A soma dos quadrados é igual a %d\n", soma);

  return 0;
}
