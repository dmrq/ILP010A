// Receba 2 valores inteiros e diferentes.
// Mostre seus valores em ordem crescente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int x, y, aux;

  printf("Insira um valor inteiro: \n");
  scanf("%d", &x);

  do {
    printf("Insira um novo valor inteiro e diferente do anterior: \n");
    scanf("%d", &y);
  } while (x==y);

  printf("Os valores, em ordem crescente, são: ");
  if (x<y) {
    printf("%d %d\n", x, y);
  } else {
    printf("%d %d\n", y, x);
  }

  return 0;
}
