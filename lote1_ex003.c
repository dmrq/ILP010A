// Receba a base e a altura de um triângulo.
// Calcule e mostre a sua área.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float b, h, a;

  printf("Informe as medidas da base e altura do triângulo ");
  scanf("%f %f,", &b, &h);

  a = (b*h)/2;
  printf("A área deste triângulo é %.2f\n", a);

  return 0;
}
