#include <stdio.h>
#include <stdlib.h>
#include "time.h"

void bubbleSort(int *vetor, int n);

int main() {
  int tamanho = 15;
  int vet[tamanho];

  time_t t;

  srand((unsigned) time(&t));

  for(int i = 0 ; i < 15 ; i++ ) {
    vet[i] = rand() % tamanho;
  }

  printf("Vetor desordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vet[i]);
  }

  printf("\n\nOrdenação oscilante: \n\n");
  bubbleSort(vet, tamanho);

  printf("Vetor já ordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vet[i]);
  }

  printf("\n");
  return 0;
}

void bubbleSort(int *vetor, int n) {
  int i, continua, aux, fim = n;

  do  {
    continua = 0;
    for (i = 0; i < fim - 1; i++) {
      if(vetor[i] > vetor[i + 1]) {
        aux = vetor[i];
        vetor[i] = vetor[i + 1];
        vetor[i + 1] = aux;

        continua = i;
      }
    }

    for (i = n - 1; i > 0; i--) {
      if (vetor[i - 1] > vetor[i]) {
        aux = vetor[i - 1];
        vetor[i - 1] = vetor[i];
        vetor[i] = aux;

        continua = i;
      }
    }

    fim--;
  } while (continua != 0);
}