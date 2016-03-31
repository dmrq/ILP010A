// Receba 100 números inteiros reais.
// Verifique e mostre o maior e o menor valor.
// Obs.: somente valores positivos.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i, n, menor, maior;

  printf("Informe a seguir 100 números inteiros positivos:\n");
  for(i=0;i<100;i++){
    do{
      scanf("%i", &n);
    } while(n<0);

    if(i==0){
      menor = n;
      maior = n;
    } else {
      if(n<=menor){
        menor = n;
      } else if(n>=maior) {
        maior = n;
      }
    }
  }

  printf("O menor número digitado foi %i.\n", menor);
  printf("O maior número digitado foi %i.\n", maior);

  return 0;
}
