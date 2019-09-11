/*
  Eloisa Silva de Morais - GU3005291
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int a, b;
  int *ap_a, *ap_b;

  ap_a = &a;
  ap_b = &b;

  printf("Digite a variável 1: ");
  scanf("%d", &a);
  printf("Digite a variável 2: ");
  scanf("%d", &b);

  if (&a > &b) {
    printf("Endereço da variável a: %p\n", ap_a);  
    printf("Conteúdo da variável a: %d\n", *ap_a);
  } else {
    printf("Endereço da variável b: %p\n", ap_b);  
    printf("Conteúdo da variável b: %d\n", *ap_b);
  }

  return 0;
}