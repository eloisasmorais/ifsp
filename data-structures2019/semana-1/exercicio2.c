/* Exercicio 1
Eloisa Silva de Morais - 
 */

#include <stdio.h>
#include <locale.h>

int main() {
  int valor;
  printf("Digite um valor: ");
  scanf("%d", valor);

  if (valor > 4 || valor <= 0) {
    printf("0");
  } else if (valor == 1) {
    printf("A");
  } else if (valor == 2) {
    printf("B");
  } else if (valor == 3) {
    printf("C");
  } else {
    printf("D");
  }
}