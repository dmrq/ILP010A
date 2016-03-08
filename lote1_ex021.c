// Receba 4 notas bimestrais de um aluno.
// Calcule e mostre a média aritmética.
// Mostre a mensagem de acordo com a média:
// a. Se a média for >= 6,0 exibir “APROVADO”;
// b. Se a média for >= 3,0 ou < 6,0 exibir “EXAME”;
// c. Se a média for < 3,0 exibir “RETIDO”.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float n1, n2, n3, n4, media;

  printf("Informe a seguir os valores das 4 notas bimestrais: \n");
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

  media = (n1+n2+n3+n4)/4;

  if (media>=6.0) {
    printf("APROVADO\n");
  } else if (media<3.0){
    printf("RETIDO\n");
  } else {
    printf("EXAME\n");
  }

  return 0;
}
