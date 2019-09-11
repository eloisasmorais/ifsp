/*
  Nome: Eloisa Silva de Morais
  Matrícula: GU3005291
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct funcionario
{
  int ID;
  char nome[30];
  int idade;
  float salario;
} funcionario;

funcionario preencheDados();
void imprimeDados(funcionario func[], int tam);
void reajustaSalario(float *salario);
void rel_salario_corrigido(float *salarioFunc, char nome[]);

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int tam = 5;
  funcionario func[tam];
  int i;

  printf("Digite as informacoes dos funcionários.\n\n");
  for (i = 0; i < tam; i++)
  {
    printf("Funcionario %d\n", i + 1);
    func[i] = preencheDados();
    system("clear");
  }

  imprimeDados(func, tam);
  printf("Novos salários após reajuste de 10%%\n\n");
  for (i = 0; i < tam; i++)
  {
    reajustaSalario(&func[i].salario);
    rel_salario_corrigido(&func[i].salario, func[i].nome);
  }
}

funcionario preencheDados()
{
  funcionario p;

  printf("ID: ");
  scanf("%d", &p.ID);
  printf("Nome: ");
  getchar();
  fgets(p.nome, 30, stdin);
  printf("Idade: ");
  scanf("%d", &p.idade);
  printf("Salário: ");
  scanf("%f", &p.salario);

  return p;
}

void imprimeDados(funcionario func[], int tam)
{
  for (int i = 0; i < tam; i++)
  {
    printf("ID: %d - %sIdade: %d \nSalário: R$%.2f\n\n", func[i].ID, func[i].nome, func[i].idade, func[i].salario);
  }
}

void reajustaSalario(float *salario)
{
  *salario *= 1.1;
}

void rel_salario_corrigido(float *salarioFunc, char nome[])
{
  printf("-------------------------------------------------");
  printf("%sR$%.2f\n\n", nome, *salarioFunc);
}