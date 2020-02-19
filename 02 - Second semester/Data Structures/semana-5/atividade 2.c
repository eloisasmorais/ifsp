/*
  Eloisa Silva de Morais - 1960081 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct funcionario {
  int ID;
  char nome[30];
  int idade;
  float salario;
}FUNCIONARIO;

int main() {
  setlocale(LC_ALL, "Portuguese");

  /* Variáveis */
  FUNCIONARIO data[5] = { 1, "Maria", 24, 1300,
                          2, "João", 32, 2400, 
                          3, "Juliana", 26, 1700,
                          4, "Marco", 29, 5600,
                          5, "Marisa", 55, 1200};
  FILE *arq;
  arq = fopen("funcionarios.txt", "wb");
  if (arq == NULL) {
    printf("Erro de abertura\n");
    exit(1);
  }

  fwrite(data, sizeof(FUNCIONARIO), 5, arq);
  fclose(arq);

  //Reabertura do arquivo para leitura
  arq = fopen("funcionarios.txt", "rb");
  fseek(arq, 2*sizeof(FUNCIONARIO), SEEK_SET);
  fread(data, sizeof(FUNCIONARIO), 1, arq);

  printf("ID: %d\nNome: %s\nIdade: %d\nSalário: %.2f\n", data->ID, data->nome, data->idade, data->salario);

  return 0;
}