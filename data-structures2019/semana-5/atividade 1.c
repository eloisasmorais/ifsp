/*
  Eloisa Silva de Morais - 1960081 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portguuese");

  FILE *arq1, *arq2;
  /* Abre arq1 e arq2 para escrita */
  arq1 = fopen("arq1.txt", "w");
  arq2 = fopen("arq2.txt", "w");
  if (arq1 == NULL || arq2 == NULL) { //Testa abertura de arquivos
    printf("Erro na abertura\n");
    exit(1);
  }
  char palavra[50];
  printf("Digite alguma coisa: ");
  scanf("%s", palavra);
  system("clear");
  for (int i = 0; i < strlen(palavra); i++) {
    fputc(palavra[i], arq1);
  }

  fclose(arq1); //Fecha arq1

  arq1 = fopen("arq1.txt", "r"); //Reabre arq1 para leitura
  if (arq1 == NULL) { //Testa abertura de arquivos novamente
    printf("Erro na abertura\n");
    exit(1);
  }

  char letra = fgetc(arq1);
  
  while (letra != EOF) {
    fputc(toupper(letra), arq2);
    printf("%c", letra);
    letra = fgetc(arq1);
  }
  printf("\n\n");

  fclose(arq2); //Fecha arq2
  arq1 = fopen("arq2.txt", "r"); //Reabre arq2 para leitura

  char letra2 = fgetc(arq2);
  while (letra2 != EOF) {
    printf("%c", letra2);
    letra2 = fgetc(arq2);
  }
  printf("\n");
  
  fclose(arq1);
  fclose(arq2);

  return 0;
}