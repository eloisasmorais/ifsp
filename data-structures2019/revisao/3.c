#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int imprimeRecursivo(int n, int n2);

int main() {
  imprimeRecursivo(55, 0);
  return 0;
}

int imprimeRecursivo(int n, int n2) {
  printf("%d\n", n2);
  if (n2 == n) return 0;

  return imprimeRecursivo(n, n2 + 1);
}
