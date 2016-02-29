// Receba o salário de um funcionário e
// mostre o novo salário com reajuste de 15%.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float sal, nsal;

  printf("Digite o valor do salário atual ");
  scanf("%f", &sal);

  nsal = sal*1.15;
  printf("O novo salário com reajuste é igual a R$%.2f\n", nsal);

  return 0;
}
