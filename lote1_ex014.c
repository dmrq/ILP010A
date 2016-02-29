// Receba 2 ângulos de um triângulo.
// Calcule e mostre o valor do 3º ângulo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int a, b, c;

  printf("Informe o valor para dois ângulos internos de um triângulo:\n");
  scanf("%d %d", &a, &b);

  c = 180 - a - b;

  printf("O terceiro ângulo vale %d.\n", c);

  return 0;
}
