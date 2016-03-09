// COLETAR O TEMPO DE UM JOGO EM HORAS E MINUTOS (HH:MM).
// HORA E MINUTO INICIAL, HORA E MINUTO FINAL.
// SABENDO QUE A PARTIDA NÃO PODE ULTRAPASSAR
// 24 HORAS E O JOGO PODE COMEÇAR EM UM DIA E
// TERMINAR NO OUTRO.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int hi, mi, hf, mf, dh, dm;

  do {
    printf("Informe a HORA INICIAL da partida (00-23): \n");
    scanf("%i", &hi);
  } while (hi<0 || hi>23);

  do {
    printf("Informe o MINUTO INICIAL da partida (00-59): \n");
    scanf("%i", &mi);
  } while (mi<0 || mi>59);

  do {
    printf("Informe a HORA FINAL da partida (00-23): \n");
    scanf("%i", &hf);
  } while (hf<0 || hf>23);

  do {
    printf("Informe o MINUTO FINAL da partida (00-59): \n");
    scanf("%i", &mf);
  } while (mf<0 || mf>59);

  if (hf<hi) {
    dh = hf-hi+24;
  } else {
    dh = hf-hi;
  }

  if(mf<mi) {
    dm = mf-mi+60;
  } else {
    dm = mf-mi;
  }

  printf("A partida demorou %i horas e %i minutos.\n", dh, dm);

  return 0;
}
