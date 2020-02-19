#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

typedef struct ponto {
  float x;
  float y;
} Ponto;

typedef struct rect {
  Ponto esq;
  Ponto dir;
} Retangulo;

float calcDiferenca(float a, float b);

float calcDiagonal(float base, float altura);
float calcPerimetro(float base, float altura);

int main() {
  Retangulo rect;
  float base, altura, diagonal, perimetro;
  printf("Digite a coordenada esquerda superior\n");
  printf("X: ");
  scanf("%f", &rect.esq.x);
  printf("Y: ");
  scanf("%f", &rect.esq.y);
  printf("Digite a coordenada direita inferior\n");
  printf("X: ");
  scanf("%f", &rect.dir.x);
  printf("Y: ");
  scanf("%f", &rect.dir.y);

  base = calcDiferenca(rect.esq.x, rect.dir.x);
  altura = calcDiferenca(rect.esq.y, rect.dir.y);

  diagonal = calcDiagonal(base, altura);
  perimetro = calcPerimetro(base, altura);

  printf("A diagonal do retângulo é %.1f\n", diagonal);
  printf("O perímetro do retângulo é %.1f\n", perimetro);

  return 0;
}

float calcDiferenca(float a, float b) {
  float res = b - a;
  if (res < 0) res *= (-1);//"módulo"
  return res;
}

float calcDiagonal(float base, float altura) {
  float diag = sqrt(pow(base, 2) + pow(altura, 2)); 
  return diag;
}
float calcPerimetro(float base, float altura){
  float per = 2 * base + 2 * altura;
  return per;
}