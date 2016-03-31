// Calcule e mostre a série
// 1 – 2/4 + 3/9 – 4/16 + 5/25 + ... + 15/225

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i;
  float x=1, soma=0;

  for (i=1; i<=15; i++){
    if (i%2 != 0) {
      soma = soma + (x / (x*x));
    } else {
      soma = soma - (x / (x*x));
    }
    x++;
  }

  printf("O resultado da série 1 – 2/4 + 3/9 – 4/16 + 5/25 + ... + 15/225 é %.5f.", soma);

  return 0;
}
