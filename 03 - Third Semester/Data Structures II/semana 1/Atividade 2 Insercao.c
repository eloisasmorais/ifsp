#include <stdio.h>
#include <stdlib.h>

int buscaLinear(int *vetor, int n, int elem);
int buscaOrdenada(int *vetor, int n, int elem); 
int buscaBinaria(int *vetor, int n, int elem);
void insereValor(int *vetor, int n, int valor);

int main() {
  int vet[13] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int vet2[8] = {33, 901, 404, 64, 98, 23, 1, 43};
  int resultado;
  int elem;

  printf("Digite um número: ");
  scanf("%d", &elem);

  printf("Busca linear - posicao: %d\n", buscaLinear(vet2, 8, elem));

  printf("Busca ordenada - posicao: %d\n", buscaOrdenada(vet, 13, elem));

  printf("Busca binaria - posicao: %d\n", buscaBinaria(vet, 13, elem));
  
  printf("\nINSERCAO: \n");
  insereValor(vet, 13, elem);
  
  return 0; 
}

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

void insereValor(int *vetor, int n, int valor) {
  int tamanho = n + 1;
  int vetor2[tamanho];
  int posicao = 0;
  int aux;

  while (vetor[posicao] < valor) {
    vetor2[posicao] = vetor[posicao];
    posicao++;
  }

  vetor2[posicao] = valor;
  posicao++;

  while (posicao < tamanho) {
    vetor2[posicao] = vetor[posicao -1];
    posicao++;
  }

  printf("[ ");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor2[i]);
  }
  printf("]");
}