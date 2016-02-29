// Receba o raio de uma circunferência.
// Calcule e mostre o comprimento da circunferência.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float R, C;

  printf("Informe a medida R do raio da circunferência:\n");
  scanf("%f", &R);

  C = 2*M_PI*R;

  printf("A medida da circunferência é igual a %.2f\n", C);

  return 0;
}
