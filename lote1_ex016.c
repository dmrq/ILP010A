// Receba a quantidade de horas trabalhadas, o valor por hora,
// o percentual de desconto e o número de descendentes.
// Calcule o salário que serão as horas trabalhadas x o valor por hora.
// Calcule o salário líquido (= Salário Bruto – desconto).
// A cada dependente será acrescido R$ 100 no Salário Líquido.
// Exiba o salário a receber.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float ht, vh, sb, sl, pdesc, desc;
	int ndep;

	printf("Digite o total de horas trabalhadas: ");
	scanf("%f", &ht);
  printf("Digite o valor por hora: ");
	scanf("%f", &vh);
  printf("Digite o percentual de desconto: ");
  scanf("%f", &pdesc);
  printf("Digite o número de dependentes: ");
  scanf("%d", &ndep);

  sb = ht*vh;
	desc = sb*(pdesc/100);
	sl = ((sb + ndep*100) - desc);

	printf("SALÁRIO A RECEBER = R$%2.2f\n", sl);

  return 0;
}
