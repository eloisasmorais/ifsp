#include <stdio.h>
#include <stdlib.h>
#include "operacao.h"

struct operacao {
  float x;
  float y;
  float res;
};

Operacao *criaOperacao (float val, float val2) {
  Operacao *p = (Operacao *) malloc (sizeof(Operacao));
  if (p != NULL) {
    p->x = val;
    p->y = val2;
    p->res = -1;
  }

  return p;
}

void liberaOperacao (Operacao *p) {
  free(p);
}

void atribuiVal (Operacao *p, float val, float val2) {
  p->x = val;
  p->y = val2;
}

void realizaOperacao (Operacao *p, int cod) {
  float res;
  switch (cod) {
  case 1: 
    p->res = p->x + p->y;
    break;
  case 2:
    p->res = p->x - p->y;
    break;
  case 3: 
    p->res = p->x * p->y;
    break;
  case 4: 
    if (p->y == 0) //Verifica se o segundo valor digitado é 0
      printf("\n\nNão é possível dividir por 0!\n\n");
    else
      p->res = p->x / p->y;
    break;
  default:
    printf("Operação inválida");
    break;
  }
}

float recuperaRes (Operacao *p) {
  return p->res;
}