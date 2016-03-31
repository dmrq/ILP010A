// Calcule e mostre quantos anos serão necessários
// para que Ana seja maior que Maria sabendo que
// Ana tem 1,10 m e cresce 3 cm ao ano e
// Maria tem 1,5m e cresce 2 cm ao ano.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i=0;
  int ana=110, maria=150;
  int razaoAna=3, razaoMaria=2;

  do {
    ana = ana + razaoAna;
    maria = maria + razaoMaria;
    i++;
  } while(ana <= maria);

  printf("Passarão %d anos até que Ana se torne mais alta que Maria.", i);

  return 0;
}
