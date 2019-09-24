#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "operacao.h"

int main() {
  setlocale(LC_ALL, "Portuguese");

  int menu = 1;
  int operacao;
  float n1 = 0, n2 = 0, res;

  Operacao *p;
  p = criaOperacao(n1, n2); //Cria operação com valores padrão de 0, 0 e -1

  while (menu != 3) {
    printf("Escolha uma opção\n");
    printf("1 -  Realizar operação\n");
    printf("2 - Consultar resultado da última operação realizada\n");
    printf("3 - Sair\n\n");

    printf("Opção: ");
    scanf("%d", &menu);

    if (menu == 1) {
      printf("1 - Soma\n");
      printf("2 - Subtração\n");
      printf("3 - Multiplicação\n");
      printf("4 - Divisão\n");

      printf("Operação: ");
      scanf("%d", &operacao);

      if (operacao < 1 || operacao > 4)
        printf("\n\nOperação não encontrada!\n\n");
      else {
        printf("Digite o primeiro valor: ");
        scanf("%f", &n1);
        printf("Digite o segundo valor: ");
        scanf("%f", &n2);

        atribuiVal(p, n1, n2); //Guarda valores digitados 
        realizaOperacao(p, operacao); //Envia o valor de 'operacao' para a função que realiza as operações
      }
    }

    if (menu == 2) {
      res = recuperaRes(p);
      if (res == -1) 
        printf("\n\nNenhuma operação realizada!\n\n"); 
      else
        printf("Resultado da última operação: %.2f\n\n", res);
    }
  }

  liberaOperacao(p);
  return 0;
}