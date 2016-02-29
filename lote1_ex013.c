// Receba a quantidade de alimento em quilos.
// Calcule e mostre quantos dias durará esse
// alimento sabendo que a pessoa consome 50g ao dia.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int alimento;
  int duracao;

  printf("Informe a quatidade de alimento em quilos:\n");
  scanf("%d", &alimento);

  duracao = (alimento*1000)/50;

  printf("O alimento durará %d dias.\n", duracao);

  return 0;
}
