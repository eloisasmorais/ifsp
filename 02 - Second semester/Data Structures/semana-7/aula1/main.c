#include <stdio.h>
#include <stdlib.h>
#include "./Headers/minhalib.h"

int main() {
  int n, j;
  int res_it, res_rec;

  printf("Entre com numero: ");
  scanf("%d", &n);

  printf("Versão iterativa\n");
  func_it(n);
  printf("\n\n");
  printf("Versão recursiva\n");
  printf("\n\n");

  j = func_rec(n);

  printf("\n\n\n\n");

  return 0;
}