// Receba 2 números inteiros, verifique
// qual o maior entre eles. Calcule e mostre
// o resultado da somatória dos números ímpares
// entre esses valores.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int x, y, aux, i, soma;
  printf("Digite dois números inteiros número: ");
  scanf("%i %i", &x, &y);

  if(x<y){
    aux = y;
    y = x;
    x = aux;
  }
  aux = x - y;

  for(i=y+1;i<x;i++){
    if(i%2!=0){
      soma = soma + i;
    }
  }
  printf("A somatória dos números ímpares entre %i e %i é %i.\n", y, x, soma);

  return 0;
}
