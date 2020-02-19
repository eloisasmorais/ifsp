#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int guardaNumeros[20];
  float media = 0;

  printf("Digite 20 números\n\n");

  for (int i = 0; i < 20; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d", &guardaNumeros[i]);
    while (guardaNumeros[i] < 0) {
      printf("Não são aceitos números negativos! Digite outro número: ");
      scanf("%d", &guardaNumeros[i]);
    }
    media += guardaNumeros[i];
  }
  printf("Soma: %.2f\n", media);

  media = media / 20.0;
  printf("\nMédia: %.2f\n", media);
  printf("Imprimindo números maiores que a média\n");
  for (int i = 0; i < 20; i++) {
    if(guardaNumeros[i] > media) printf("%d\n", guardaNumeros[i]);
  }

  return 0;
}