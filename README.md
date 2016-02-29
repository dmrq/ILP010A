ILP010A - Linguagem de Programação
==================================

Exercícios de programação em C
------------------------------

### ESTRUTURAS:

1. Sequenciais
  - variáveis / tipos
  - operadores aritméticos
  - entrada e saída: dados
  
2. Decisões
  - simples, composta, encadeada
  - operadores de comparação
  - operadores lógicos
  
3. Repetição
  - for (...)
  - while (condição) ...
  - do ... while (condicao)


##### Usando FOR
<pre lang="c">
  <code>
#include <stdio.h>
#include <conio.h>
// Imprime a tabuada da soma de um número.
// Programa principal

int main(void) {
  int numero, i, soma;

  printf("DIGITE O NUMERO DA TABUADA ");
  scanf("%i", &numero);
  printf("\nIMPRIMINDO TABUADA DE %i", numero);

  for(i=1;i<11;i++){
    soma = numero*i;
    printf("\n%d * %d = %d", numero, i, soma);
  }

  getch();
  
  return 0;
}
  </code>
</pre>


##### Usando WHILE
<pre lang="c">
  <code>
#include <stdio.h>
#include <conio.h>
// Imprime a tabuada da soma de um número.
// Programa principal

int main(void) {
  int numero, i, soma;

  printf("DIGITE O NUMERO DA TABUADA ");
  scanf("%i", &numero);
  printf("\nIMPRIMINDO TABUADA DE %i", numero);

  i=1;

  while(i<=10){
    soma = numero*i;
    printf("\n%d * %d = %d", numero, i, soma);
    i++;
  }

  getch();
  
  return 0;
}
  </code>
</pre>


##### Usando DO/WHILE
<pre lang="c">
  <code>
#include <stdio.h>
#include <conio.h>
// Imprime a tabuada da soma de um número.
// Programa principal

int main(void) {
  int numero, i, soma;

  printf("DIGITE O NUMERO DA TABUADA ");
  scanf("%i", &numero);
  printf("\nIMPRIMINDO TABUADA DE %i", numero);

  i=1;

  do{
    soma = numero*i;
    printf("\n%d * %d = %d", numero, i, soma);
    i++;
  } while(i<=10);

  getch();
  
  return 0;
}
  </code>
</pre>
