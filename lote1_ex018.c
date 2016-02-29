// Receba 2 valores inteiros.
// Calcule e mostre o resultado
// da diferença do maior pelo menor valor.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int x, y;
  int dif;

  printf("Digite um valor inteiro para x: ");
  scanf("%d", &x);
  printf("Digite um valor inteiro para y: ");
  scanf("%d", &y);

  if (x>=y) {
    dif = x - y;
  } else {
    dif = y - x;
  }

  printf("A diferença entre o maior valor e o menor valor é igual a %d\n", dif);

  return 0;
}
