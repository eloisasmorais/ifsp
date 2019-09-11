/*
  Nome: Eloisa Silva de Morais
  Matrícula: GU3005291
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct funcionario {
  int ID;
  char nome[30];
  int idade;
  float salario;
};

int main() {
  int tam = 5;
  struct funcionario func[tam];
  int i;

  printf("Digite as informações do funcionário\n");
  for (i = 0; i < tam; i++) {
    printf("Funcionario %d\n", i + 1);
    printf("ID: ");
    scanf("%d", &func[i].ID);
    getchar();
    printf("Nome: ");
    fgets(func[i].nome, 29, stdin);
    printf("Idade: ");
    scanf("%d", &func[i].idade);
    printf("Salário: ");
    scanf("%f", &func[i].salario);
    printf("\n");

    system("clear");
  }

  printf("Retornando dados dos funcionarios\n\n");
  for (i = 0; i < tam; i++) {
    printf("ID %d - %sIdade: %d \nSalário: R$%.2f\n\n", func[i].ID, func[i].nome, func[i].idade, func[i].salario);
  }

  return 0;
}