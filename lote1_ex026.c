// Receba 2 números inteiros.
// Verifique e mostre se o maior número
// é múltiplo do menor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int x, y;

  printf("Informe dois valores inteiros: ");
  scanf("%i %i", &x, &y);

  if (x>=y) {
    if (x%y==0) {
      printf("O número %i é múltiplo de %i.\n", x, y);
    } else {
      printf("O número %i não é múltiplo de %i.\n", x, y);
    }
  } else {
    if (y%x==0) {
      printf("O número %i é múltiplo de %i.\n", y, x);
    } else {
      printf("O número %i não é múltiplo de %i.\n", y, x);
    }
  }

  return 0;
}
