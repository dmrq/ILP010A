// Receba o ano de nascimento e o ano atual.
// Calcule e mostre a sua idade atual e
// quantos anos terá daqui a 17 anos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int anonasc, anoatual;
  int idadeatual, idadeapos;

  printf("Informe o ano de nascimento e o ano atual [aaaa aaaa]:\n");
  scanf("%d %d", &anonasc, &anoatual);

  idadeatual = anoatual-anonasc;
  idadeapos = idadeatual + 17;

  printf("A idade atual é %d anos.\n", idadeatual);
  printf("Daqui 17 anos terá %d anos.\n", idadeapos);

  return 0;
}
