#include <stdio.h>
#include <stdlib.h>
#include "time.h"

void insertionSort(int *vetor, int n);

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

  printf("\n\nOrdernando por metodo insertionSort: \n\n");
  insertionSort(vet, tamanho);

  printf("Vetor já ordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vet[i]);
  }

  printf("\n");
  return 0;
}

void insertionSort(int *vetor, int n) {
  int i, j, aux;

  for (i = 1; i < n; i++) {
    aux = vetor[i];
    
    for (j = i; (j > 0) && (aux < vetor[j - 1]); j--) {
      vetor[j] = vetor[j - 1];
    }
    vetor[j] = aux;
  }
}