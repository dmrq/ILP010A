// Calcule a quantidade de grãos contidos em um tabuleiro de xadrez onde:
// Casa: 1 2 3 4 ... 64
// Qdte: 1 2 4 8 ... N

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i;
  float total;

  for(i=0;i<64;i++){
    total = total + pow(2, i);
  }

  printf("O total de grãos é igual a %.0f.\n", total);

  return 0;
}
