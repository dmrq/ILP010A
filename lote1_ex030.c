// Receba o número de voltas,
// a extensão do circuito (em metros)
// e o tempo de duração (em minutos).
// Calcule e mostre a velocidade média em km/h.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float n, d, t, vm;

  printf("Informe o número de voltas percorridas: ");
  scanf("%f", &n);

  printf("Informe a extensão do circuito (em metros): ");
  scanf("%f", &d);

  printf("Informe a duração do percurso (em minutos): ");
  scanf("%f", &t);

  vm = ((n*d)/t)*0.06;

  printf("A velocidade média é igual a %.2f km/h.\n", vm);

  return 0;
}
