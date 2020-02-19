/* 
Eloisa Silva de Morais - 1960881 
Turma A 

24)Faça um Programa que leia números até que o usuário não queira mais digitar os números,
pressionando o valor “0 (zero)”. No final exibir o resultado da soma dos valores lidos.
*/
#include <stdio.h>
#include <locale.h>

float main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int num; //Guarda valor digitado pelo usuário
    int soma = 0; //Guarda a soma dos valores digitados

    //Interação com o usuário
    printf("Digite um valor ou digite 0 para sair: ");
    scanf("%d", &num);

    //Cálculo da soma dos valores
    soma += num;

    while (num != 0) {
        printf("Digite um valor ou digite 0 para sair: ");
        scanf("%d", &num);

        soma += num; //Soma todos os números inseridos
    }

    //Exibe resultados
    printf("A soma dos valores inseridos é %d.\n", soma);
    return 0;
}