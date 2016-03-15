// Receba um número.
// Calcule e mostre os resultados
// da tabuada desse número.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i, n;
  printf("Digite um número: ");
  scanf("%i", &n);

  for(i=1; i<=10; i++){
    printf("%i * %i = %i\n", i, n, i*n);
  }

  return 0;
}
