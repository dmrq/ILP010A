// Receba os valores de 2 catetos de um triângulo retângulo.
// Calcule e mostre a hipotenusa.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float a, b, c;

  printf("Informe a medidas dos catetos:\n");
  scanf("%f %f", &a, &b);

  c = sqrt(a*a + b*b);

  printf("A hipotenusa mede %.2f.\n", c);

  return 0;
}
