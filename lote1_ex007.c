// Receba os valores do comprimento,
// largura e altura de um paralelepípedo.
// Calcule e mostre seu volume.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int a, b, c;
  int vol;

  printf("Informe a largura, altura e comprimento do paralelepípedo [a b c]\n");
  scanf("%d %d %d", &a, &b, &c);

  vol = a*b*c;

  printf("O volume do paralelepípedo é igual a %d\n", vol);

  return 0;
}
