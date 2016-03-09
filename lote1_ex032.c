// Receba o tipo de investimento (1=poupança, 2=renda fixa)
// e o valor do investimento. Calcule e mostre o valor corrigido
// em 30 dias sabendo que a poupança rende 3% e a renda fixa, 5%.
// Demais tipos não serão considerados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int tipo;
  float investimento, valorCorrigido;

  do{
    printf("Informe o tipo de investimento:\n");
    printf("[1] Poupança     [2] Renda fixa\n");
    scanf("%i", &tipo);
  } while (tipo!=1 && tipo!=2);

  printf("Informe o valor do investimento:\n");
  scanf("%f", &investimento);


  switch (tipo) {
    case 1:
      valorCorrigido=investimento*1.03;
      break;
    case 2:
      valorCorrigido=investimento*1.05;
      break;
  }

  printf("O valor corrigido após 30 dias é igual a R$ %.2f.\n", valorCorrigido);

  return 0;
}
