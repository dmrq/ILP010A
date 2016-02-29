// Receba 2 números reais.
// Calcule e mostre a diferença desses valores.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float a, b;
  float dif;

  printf("Digite dois números reais:\n");
  scanf("%f %f", &a, &b);

  dif = a-b;

  printf("A diferença dos dois números é igual a %.2f\n", dif);

  return 0;
}
