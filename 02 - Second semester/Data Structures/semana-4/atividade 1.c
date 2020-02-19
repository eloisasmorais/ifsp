/*
Eloisa Silva de Morais - GU3005291
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void alteraValor(int *a, int *b, int *c);

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int a, b, c;
  int *x, *y, *z;

  printf("Digite a variável 1: ");
  scanf("%d", &a);
  printf("Digite a variável 2: ");
  scanf("%d", &b);
  printf("Digite a variável 3: ");
  scanf("%d", &c);

  x = &a;
  y = &b;
  z = &c;

  alteraValor(x, y, z);

  printf("Valores alterados:\n");
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);

  return 0;
}

void alteraValor(int *a, int *b, int *c) {
  *a += 100;
  *b += 100;
  *c += 100;
}
