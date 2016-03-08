// Receba um valor inteiro.
// Verifique e mostre se é divisível por 2 e 3.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int x;

  do {
    printf("Insira um valor inteiro: \n");
    scanf("%d", &x);
  } while(x%1 != 0);

  if (x%2==0 && x%3==0) {
    printf("O número %d é divisível por 2 e por 3.\n", x);
  } else if (x%2==0 && x%3!=0) {
    printf("O número %d é divisível por 2 mas não é divisível por 3.\n", x);
  } else if (x%2!=0 && x%3==0) {
    printf("O número %d é divisível por 3 mas não é divisível por 2.\n", x);
  } else {
    printf("O número %d não é divisível por 2 nem por 3.\n", x);
  }

  return 0;
}
