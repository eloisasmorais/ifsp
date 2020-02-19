/* 
Eloisa Silva de Morais - 1960881 
Turma A 

17) Escreva um programa para receber pelo teclado 4 valores inteiros positivos (A, B, C e D).
Determinar qual o maior e o menor valor e imprimi-lo.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int maior, menor; //Variáveis para armazenar o maior e menor valor
    int num; //Guarda o valor digitado pelo usuário

    for (int i = 1; i <= 4; i++) {
        printf("Digite o %dº valor: ", i);
        scanf("%d", &num);

        if (num < 0) {
            printf("Não são aceitos números negativos!\n");
            return 0;
        } else if (i == 1) {
            maior = num;
            menor = num;
        } 

        if (num >= maior) maior = num;
        if (num <= menor) menor = num;
    }

    printf("O menor valor digitado é %d e o maior é %d\n", menor, maior);
    return 0;
}