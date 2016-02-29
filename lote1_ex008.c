// Receba o valor de um depósito em poupança.
// Calcule e mostre o valor após 1 mês de
// aplicação sabendo que rende 1,3% a. m.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float deposito;
  float saldo;

  printf("Informe o valor do depósito:\n");
  scanf("%f", &deposito);

  saldo = deposito*1.013;

  printf("O saldo da aplicação após 30 dias é de R$%.2f\n", saldo);

  return 0;
}
