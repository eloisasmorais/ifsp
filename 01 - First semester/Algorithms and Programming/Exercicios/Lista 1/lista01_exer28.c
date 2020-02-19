/* 
Eloisa Silva de Morais - 1960881 
Turma A 

28) Faça um programa que simula o lançamento de dois dados, D1 e D2, n vezes, e tem como saída o
número de cada dado e a relação entre eles (>,<,=) em cada lançamento.
*/
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
float main() {
    setlocale(LC_ALL, "Portuguese");

    srand(time(0)); //Inicializa o gerador de números aleatórios
  
    int dado1, dado2; //Guarda número aleatório gerado

    //Gera valores entre 1 e 6
    //OBS: é somado 1 para que o 0 seja excluído do intervalo
    dado1 = 1 + rand() % 6;
    dado2 = 1 + rand() % 6;

    //Compara os valores e exibe os resultados
    if (dado1 > dado2) {
        printf("Dado 1: %d\n", dado1);
        printf("Dado 2: %d\n", dado2);

        printf("\nO valor do dado 1 é maior que o do dado 2!\n");
    } else if (dado2 > dado1) {
        printf("dado 1: %d\n", dado1);
        printf("dado 2: %d\n", dado2);

        printf("\nO valor do dado 2 é maior que o do dado 1!\n");
    } else {
        printf("dado 1: %d\n", dado1);
        printf("dado 2: %d\n", dado2);

        printf("\nOs valores são iguais!\n");
    }

    return 0;
}