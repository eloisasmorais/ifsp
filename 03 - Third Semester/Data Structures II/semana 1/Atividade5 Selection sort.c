#include <stdio.h>
#include <stdlib.h>
#include "time.h"

void selectionSort(int *vetor, int n);

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

  printf("\n\nOrdernando por metodo selectionSort: \n\n");
  selectionSort(vet, tamanho);

  printf("Vetor já ordenado: ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vet[i]);
  }

  printf("\n");
  return 0;
}

void selectionSort(int *vetor, int n) {
  int i, j, menor, troca;

  for (i = 0; i < n - 1; i++) {
    menor = i; 
    
    for(j = i + 1; j < n; j++) {
      if (vetor[j] < vetor[menor]) {
        menor = j;
      }
    }

    if(i != menor) {
      troca = vetor[i];
      vetor[i] = vetor[menor];
      vetor[menor] = troca;
    }
  }
}