// Receba um número inteiro.
// Calcule e mostre a série de Fibonacci
// até o seu N’nésimo termo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  int i, aux;
  int n, fib;

  printf("Digite um número inteiro: ");
  scanf("%i", &n);

  fib = 1;
  aux = 0;
  for(i=1;i<=n;i++){
  	printf("%d ", fib);

  	fib = fib + aux;
  	aux = fib - aux;
  }
  printf("\n");

  return 0;
}
