#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int *vetor, int n, int elem) {
  int i;

  printf("\n[ ");
  for(int i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  } 
  printf("]\n\n");

  for(i = 0; i < n; i++) {
    if (elem == vetor[i]) {
      return i;
    }
  }

  return -1;
}

int buscaOrdenada(int *vetor, int n, int elem) {
  int i;

  printf("\n[ ");
  for(int i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  } 
  printf("]\n\n");

  for(i = 0; i < n; i++) {
    if(elem == vetor[i]) {
      return i;
    } else {
      if (elem < vetor[i]) {
        return -1;
      }
    }
  }

  return -1;
}


int buscaBinaria(int *vetor, int n, int elem) {
  int i, inicio, meio, fim;
  inicio = 0;
  fim = n - 1;

  printf("\n[ ");
  for(int i = 0; i < n; i++) {
    printf("%d ", vetor[i]);
  } 
  printf("]\n\n");

  while (inicio <= fim) {
    meio = (inicio + fim) / 2;

    if (elem < vetor[meio]) {
      fim = meio - 1;
    } else { 
      if(elem > vetor[meio]) {
        inicio = meio + 1;
      } else {
        return meio;
      }
    }
  }
  return -1;
}

int main() {
  int vet[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 10000};
  int vet2[8] = {33, 901, 404, 64, 98, 23, 1, 43};
  int resultado;
  int elem;

  printf("Digite um número: ");
  scanf("%d", &elem);

  printf("Busca linear - posicao: %d\n", buscaLinear(vet2, 8, elem));

  printf("Busca ordenada - posicao: %d\n", buscaOrdenada(vet, 13, elem));

  printf("Busca binaria - posicao: %d\n", buscaBinaria(vet, 13, elem));

  
  return 0; 
}