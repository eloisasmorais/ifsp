#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct cadastro {
  char nome[40];
  int idade;
  char endereco[80];
} Cadastro;

Cadastro *alocaCadastro(int n);

int main() {
  int qtd;
  Cadastro *pessoas;
  printf("Digite a quantidade de  cadastradas: ");
  scanf("%d", &qtd);
  pessoas = alocaCadastro(qtd);

  printf("\\**********************Dados**********************/\n\n");
  for (int i = 0; i < qtd; i++) {
    printf("Nome: %s\n", pessoas[i].nome);
    printf("Idade: %d\n", pessoas[i].idade);
    printf("Endereço: %s\n", pessoas[i].endereco);
  }

  return 0;
}

Cadastro *alocaCadastro(int n) {
  Cadastro *cad;
  cad = (Cadastro *) malloc (n * sizeof(Cadastro));

  for(int i=0;i<n;i++){
    printf("Digite o nome da pessoa: ");
    getchar();
    fgets(cad[i].nome,40,stdin);//substitui o \n no final da string por \0
    cad[i].nome[strlen(cad[i].nome)-1]='\0';
    printf("Digite a idade da pessoa: ");
    scanf("%d",&cad[i].idade);
    printf("Digite o endereco da pessoa:  ");
    getchar();
    fgets(cad[i].endereco,30,stdin);
    //substitui o \n no final da string por \0
    cad[i].endereco[strlen(cad[i].endereco)-1]='\0';
  }
  return cad;
}
