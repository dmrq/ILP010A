// Coletar o valor do lado de um quadrado,
// calcular sua área e apresentar o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float L, A;

  printf("Digite a medida correspondente ao lado L do quadrado ");
  scanf("%f", &L);

  A = L*L;
  printf("A área do quadrado de lado %.2f é igual a %.2f\n", L, A);

  fflush(stdin);
  getchar();

  return 0;
}
