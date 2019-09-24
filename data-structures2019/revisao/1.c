#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct ALUNO {
  float p1, p2, p3;
  float media;
} aluno;

float calcMedia(float a, float b, float c) {
  return (a + b + c) / 3;
}


int main() {
  setlocale(LC_ALL, "Portuguese");
  int tam = 2;
  float maior[2];

  aluno alunos[tam];
  for (int i = 0; i < tam; i++) {
    printf("Digite primeira nota: ");
    scanf("%f", &alunos[i].p1);
    printf("Digite segunda nota: ");
    scanf("%f", &alunos[i].p2);
    printf("Digite terceira nota: ");
    scanf("%f", &alunos[i].p3);

    alunos[i].media = calcMedia(alunos[i].p1, alunos[i].p2, alunos[i].p3);
    if (i == 0){ 
      maior[0] = i;
      maior[1]  = alunos[i].media;
    } else if (alunos[i].media > maior[1]) {
      maior[0] = i;
      maior[1] = alunos[i].media;
    }
  }
    printf("O aluno com maior média foi o aluno %.0f\n", maior[0] + 1);
    printf("A média foi %.1f\n", maior[1]);

  return 0;
}