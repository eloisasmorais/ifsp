#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *vetor, int n);

int main() {
  int vet[7] = { 302, 1, 9883, 400, 3, 768, 243 };

  printf("Vetor desordenado: ");
  for (int i = 0; i < 7; i++) {
    printf("%d ", vet[i]);
  }

  printf("\n\nOrdernando por metodo bubbleSort: \n\n");
  bubbleSort(vet, 7);

  printf("Vetor já ordenado: ");
  for (int i = 0; i < 7; i++) {
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

    fim--;
  } while (continua != 0);
}