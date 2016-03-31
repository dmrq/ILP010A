// Receba o número da base e do expoente.
// Calcule e mostre o valor da potência.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int n, base, expo, potencia = 1;

  printf("Informe o valor da base: ");
  scanf("%d", &base);
  printf("\nInforme o valor do expoente: ");
  scanf("%d", &expo);

  if (!expo) {
    potencia = 1;
  } else {
    for(n=0; n<expo; n++){
      potencia = potencia * base;
    }
  }

  printf("\nO número %d elevado a %d é igual a %d.", base, expo, potencia);

  return 0;
}
