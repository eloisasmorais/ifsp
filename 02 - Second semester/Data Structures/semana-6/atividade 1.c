/* 
  Eloisa Silva de Morais - 1960881 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int n, i, j;
  printf("Digite um valor maior que 0: ");
  scanf("%d", &n);

  int *ptr, impar = 1;
  ptr = (int *) malloc ((n) * sizeof(int));

  printf("Ímpares: ");
  for (i = 0, j = 0; i < n; i++) {
    ptr[i] = impar;
    printf("%d ", ptr[i]);
    impar += 2;
  }
  printf("\n");

  free(ptr);

  return 0;
}