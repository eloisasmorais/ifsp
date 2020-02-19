#include <stdio.h>

int func (int n) {
  if (n == 0) return 0;

  return (n + func(n - 1));
} 

int main() { 
  int n = 5;
  int res = func (3);
  printf("%d\n", res);
  return 0;
}