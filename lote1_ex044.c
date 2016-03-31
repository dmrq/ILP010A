// Mostre todas as possibilidades de
// 2 dados de forma que a soma tenha
// como resultado 7.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int d1, d2;

  for(d1=1;d1<7;d1++){
    for(d2=6;d2>0;d2--){
      if(d1+d2==7){
        printf("%i + %i = 7\n", d1, d2);
      }
    }
  }

  return 0;
}
