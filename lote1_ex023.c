// Receba 3 valores obrigatoriamente em ordem crescente e um 4º valor não
// necessariamente em ordem. Mostre os 4 números em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int w, x, y, z;

  printf("Insira um valor inteiro (1/4): \n");
  scanf("%d", &w);

  do {
    printf("Insira um novo valor inteiro (2/4) e maior que o anterior: \n");
    scanf("%d", &x);
  } while (w>=x);

  do {
    printf("Insira um novo valor inteiro (3/4) e maior que o anterior: \n");
    scanf("%d", &y);
  } while (x>=y);

  do {
    printf("Insira um novo valor inteiro (4/4) diferente dos anteriores: \n");
    scanf("%d", &z);
  } while (z==w && z==x && z==y);

  printf("Os valores, em ordem crescente, são: ");
  if (z<w) {
    printf("%d %d %d %d\n", z, w, x, y);
  } else if (z>y) {
    printf("%d %d %d %d\n", w, x, y, z);
  } else if (z>w && z<x) {
    printf("%d %d %d %d\n", w, z, x, y);
  } else if (z>x && z<y) {
    printf("%d %d %d %d\n", w, x, z, y);
  }

  return 0;
}
