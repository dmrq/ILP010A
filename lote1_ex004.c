// Receba a temperatura em graus Celsius.
// Calcule e mostre a sua temperatura
// convertida em fahrenheit F = (9*C+160) / 5.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float C, F;

  printf("Informe a temperatura em graus Celsius ");
  scanf("%f", &C);

  F = (9*C+160) / 5;
  printf("A temperatura em Fahrenheit é %.2f\n", F);

  return 0;
}
