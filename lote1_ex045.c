// Calcule e mostre a série
// 1 + 2/3 + 3/5 + ... + 50/99

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float i, soma=0;

  for(i=1;i<=50;i++){
  	soma = soma + (i / ((2 * i) -1));
  }

  printf("A soma da série 1 + 2/3 + 3/5 + ... + 50/99 é igual a %.5f.", soma);

  return 0;
}
