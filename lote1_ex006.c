// Receba os valores em x e y.
// Efetua a troca de seus valores
// e mostre seus conteúdos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int x, y, aux;

  printf("Informe dois valores (x,y)\n");
  scanf("%d %d", &x, &y);

  aux = x;
  x = y;
  y = aux;

  printf("Os valores invertidos são %d %d\n", x, y);

  return 0;
}
