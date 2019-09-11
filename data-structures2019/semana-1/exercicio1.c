/* Exercicio 1
Eloisa Silva de Morais - 
 */

#include <stdio.h>
#include <locale.h>

int main() {
  int valor;
  printf("Digite um valor: ");
  scanf("%d", valor);

  switch (valor) {
  case 1:
    printf("A");
    break;
  case 2:
    printf("B");
    break;
  case 3:
    printf("C");
    break;
  case 4:
    printf("D");
    break;
  default:
    printf("0");
    break;
  }

  return 0;
}