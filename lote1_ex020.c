// Receba 3 coeficientes A, B e C
// de uma equação do 2º grau (AX²+BX+C=0).
// Verifique e mostre a existência de raízes reais
// e, caso existam, calcule e mostre seus valores.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float A, B, C, x1, x2;
  float delta;

  printf("Digite os valores dos coeficientes A, B e C\n");
  scanf("%.0f %.0f %.0f", &A, &B, &C);

  delta = (B*B) - (4*A*C);

  if (delta>=0) {
    printf("Existem raízes reais.\n");

    x1 = (-B + sqrt(delta)) / 2*A;
    x2 = (-B - sqrt(delta)) / 2*A;
    printf("As raízes reais da equação %2.2fx²+%2.2fx+%2.2f=0 são x1=%2.2f e x2=%2.2f\n", A, B, C, x1, x2);
  } else {
    printf("Não existem raízes reais para a equação %2.2fx²+%2.2fx+%2.2f=0.");
  }

  return 0;
}
