/* 
  Eloisa Silva de Morais - 1960881 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
  srand(time(NULL));
  setlocale(LC_ALL, "Portuguese");
  int **m1, **m2;
  int **soma;

  int linhas, colunas;
  int i, j;
  printf("Digite o número de linhas: ");
  scanf("%d", &linhas);
  printf("Digite o número de colunas: ");
  scanf("%d", &colunas);
  
  m1 = (int **) malloc(linhas * sizeof(int *));
  m2 = (int **) malloc(linhas * sizeof(int *));
  soma = (int **) malloc(linhas * sizeof(int *));

  for (int i = 0; i < linhas; i++) {
    m1[i] = (int *) malloc (colunas * sizeof(int));
    m2[i] = (int *) malloc (colunas * sizeof(int));
    soma[i] = (int *) malloc (colunas * sizeof(int));
  }

  //Inicialização dos valores da matriz com números aleatórios
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      m1[i][j] = rand() % 25;
      m2[i][j] = rand() % 25;
      soma[i][j] = m1[i][j] + m2[i][j]; 
    }
  }

  //Imprime colunas lado a lado
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      printf("%d ", m1[i][j]);
    }
    printf("\t");
    for (int j = 0; j < colunas; j++) {
      printf("%d ", m2[i][j]);
    }
    printf("\t");
    for (int j = 0; j < colunas; j++) {
      printf("%d ", soma[i][j]);
    }
    printf("\n");
  }
  
  for (i = 0; i < linhas; i++) {
    free(m1[i]);
    free(m2[i]);
    free(soma[i]);
  }

  free(m1);
  free(m2);
  free(soma);

  return 0;
}