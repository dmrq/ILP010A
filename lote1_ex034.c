// Calcule e mostre o quadrado
// dos números entre 10 e 150.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i;

  for(i=10;i<=50;i++){
    printf("%i\n", i*i);
  }

  return 0;
}
