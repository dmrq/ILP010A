// Receba um número.
// Calcule e mostre a série 1 + 1/2 + 1/3 + ... + 1/N.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float i, n, soma;
  printf("Digite um número: ");
  scanf("%f", &n);

  printf("1 + ");
  for(i=2; i<=n; i++){
    soma = soma + i;

    if(i<n){
      printf("1/%.0f + ", i);
    } else {
      printf("1/%.0f = %.1f\n", i, soma);
    }
  }

  return 0;
}
