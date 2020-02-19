#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"

int main(int argc, char *argv[]) {
  float d;
  Ponto *p, *q;
  p = pto_cria(10, 21);
  q = pto_cria(7, 25);

  d = pto_distancia(p, q);
  printf("Distancia entre dois pontos: %.2f\n", d);
  pto_libera(p);
  pto_libera(q);

  return 0;
}