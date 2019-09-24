#include <stdio.h>
#include <stdlib.h>

int power(int x, int y) {
  if (y == 0) return 1; //elementro neutro da potenciação

  return x * (power(x, y - 1));
}

int main() {
  int x = 2, y = 7;
  int res = power(x, y);
  printf("%d\n", res);

  return 0;
}