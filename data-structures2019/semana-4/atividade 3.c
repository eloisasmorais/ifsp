/*
  Eloisa Silva de Morais - GU3005291
*/

#include <stdio.h>

int main() {
  float vet[10];
  float *ap_vet;

  ap_vet = vet;
  for (int i = 0; i < 10; i++) {
    printf("%p\n", ap_vet);
    ap_vet++;
  }

  return 0;
}
