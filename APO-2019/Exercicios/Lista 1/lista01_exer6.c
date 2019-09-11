/* 
Eloisa Silva de Morais - 1960881 
Turma A 

6)Faça um programa que leia valores e escreva no final a soma dos valores positivos e a média dos negativos. 
Neste programa o usuário é quem vai determinar o fim da leitura dos números, ou seja,
você deverá perguntar ao usuário se ele deseja continuar digitando valores.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float numero; //Número inserido pelo usuário
    float somaPositivos = 0; //Guarda a soma dos números positivos
    float somaNegativos = 0; //Guarda a soma dos números negativos
    int totalNegativos = 0; //Conta quantos números negativos foram inseridos
    float mediaNegativos; //Guarda a média dos números negativos
    char resposta; //Reposta dada pelo usuário
 
    do {
        printf("Insira um número positivo ou negativo: ");
        scanf("%f", &numero);
        if (numero >= 0) { 
            somaPositivos += numero; //Soma os números positivos
        } else {
            somaNegativos += numero; //Soma os números negativos
            totalNegativos++; //Guarda o total de números negativos
        }

        printf("Deseja parar de inserir números?\nS ou N\n");
        scanf(" %c", &resposta); //Captura resposta do usuário
    } while (resposta != 'S');

    mediaNegativos = (totalNegativos != 0) ? (somaNegativos / totalNegativos) : 0;

    printf("A soma dos números positivos é %.0f e a média dos números negativos é %.0f.\n", somaPositivos, mediaNegativos);


    return 0;
}