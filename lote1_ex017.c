// Calcule a quantidade de litros gastos em uma viagem,
// sabendo que o automóvel faz 12 km/l.
// Receber o tempo de percurso e a velocidade média.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float vm, tempo, km, litros;

	printf("Digite o tempo de percurso em minutos: ");
	scanf("%f", &tempo);
  printf("Digite a velocidade média de viagem (Km/hora): ");
	scanf("%f", &vm);

  km = vm * (tempo/60);
  litros = km/12;

	printf("Nesta viagem foram gastos %2.2f litros\n", litros);

  return 0;
}
