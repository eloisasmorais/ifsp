/* 
  Eloisa Silva de Morais - 1960881 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int qtdAlunos;
  float media, soma = 0;
  float *notas;
  
  printf("Digite a quantidade de alunos: ");
  scanf("%d",  &qtdAlunos);
  
  notas = (float *) malloc (qtdAlunos * sizeof(float));

  for (int i = 0; i < qtdAlunos; i++) {
    printf("Digite a nota do aluno %d: ", i + 1);
    scanf("%f",  &notas[i]);
    soma += notas[i];
  }

  printf("\n\nImprimindo notas dos alunos\n");
  for(int i = 0; i < qtdAlunos; i++) {
    printf("Aluno %d: %.1f\n", i + 1, notas[i]);
  }

  media = soma / qtdAlunos;
  printf("\nA média da turma foi %.1f\n", media);

  free(notas);
  return 0;
}