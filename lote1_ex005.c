// Receba os coeficientes A, B e C
// de uma equação do 2º grau (AX²+BX+C=0).
// Calcule e mostre as raízes reais
// (considerar que a equação possui 2 raízes).

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int A, B, C, x1, x2;
  int delta;

  printf("Digite os valores dos coeficientes A, B e C\n");
  scanf("%d %d %d", &A, &B, &C);

  delta = (B*B) - (4*A*C);
  x1 = (-B + sqrt(delta)) / 2*A;
  x2 = (-B - sqrt(delta)) / 2*A;

  printf("As raízes reais da equação %dx²+%dx+%d=0 são x1=%d e x2=%d\n", A, B, C, x1, x2);

  return 0;
}
