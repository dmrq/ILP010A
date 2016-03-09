// Receba o preço atual e a média mensal de um produto.
// Calcule e mostre o novo preço sabendo que:
//     Venda mensal         Preço Atual         Preço Novo
//       < 500                 < 30               + 10%
//   >= 500 e < 1000       >= 30 e < 80           + 15%
//      >= 1000                >= 80              - 05%
// Obs.: para outras condições, preço novo será igual ao preço atual.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float pa, mm, pn;

  printf("Informe o preço atual do produto: ");
  scanf("%f", &pa);

  printf("Informe a média mensal de vendas: ");
  scanf("%f", &mm);

  if (mm<500 && pa<30) {
    pn=pa*1.1;
  } else if (mm>=500 && mm<1000 && pa>=30 && pa<80) {
    pn=pa*1.15;
  } else if (mm>=1000 & pa>=80) {
    pn=pa*0.95;
  } else {
    pn=pa;
  }

  printf("O preço novo é R$ %.2f.\n", pn);

  return 0;
}
