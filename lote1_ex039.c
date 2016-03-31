// Receba um número N.
// Calcule e mostre a
// série 1 + 1/1! + 1/2! + ... + 1/N!

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "portuguese");

  float i, j, n;
  float soma=1, fatorial=1;

  printf("Digite um número inteiro: ");
  scanf("%f", &n);

  for(i=1; i<=n; i++){
    for(j=i; j>0; j--){
      fatorial = fatorial * j;
    }
    soma = soma + (1/fatorial);
    fatorial=1;
  }

  printf("\nA Soma da série 1 + 1/1! + 1/2! + ... + 1/%.0f! é igual a %.5f.", n, soma);



  return 0;
}
