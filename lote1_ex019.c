// Receba 2 valores reais.
// Calcule e mostre o maior deles.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float x, y;

  printf("Digite um valor real para x: ");
  scanf("%f", &x);
  printf("Digite um valor real para y: ");
  scanf("%f", &y);

  if (x>y) {
    printf("x foi o maior valor digitado.\n");
  } else if (y>x) {
    printf("y foi o maior valor digitado.\n");
  }

  return 0;
}
