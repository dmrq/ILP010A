// Receba 2 números inteiros.
// Verifique e mostre todos os números primos
// existentes entre eles.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int x, y, aux, primo;

  printf("Digite a seguir dois números inteiros: ");
  scanf("%i %i", &x, &y);

  if(x>y){
    aux = x;
    x = y;
    y = aux;
  }

  for(aux=x;aux<y;aux++){
    for(i=2;i<=aux/2;++i){
      if(aux%i==0){
        print("%d ", aux);
      }
    }
  }

  return 0;
}
