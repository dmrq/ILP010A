// Receba um número inteiro.
// Calcule e mostre o seu fatorial.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i;
  int n, fatorial = 1;
  printf("Digite um número inteiro: ");
  scanf("%i", &n);

  printf("%d! é igual a ", n);

  for(i=n; i>0; i--){
    fatorial = fatorial * i;

    if(i>1){
      printf("%d * ", i);
    } else {
      printf("%d = %d\n", i, fatorial);
    }
  }

  return 0;
}
