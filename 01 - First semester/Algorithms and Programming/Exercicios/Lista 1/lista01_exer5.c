/* 
Eloisa Silva de Morais - 1960881 
Turma A 

5) Faça um programa que exiba seu nome na tela enquanto o caractere “S” não for digitado pelo usuário. 
repetições e quantas repetições foram realizadas.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int repeticoes = 0; //Variável de controle para o número de repetições
    char controle = 'N'; //Variável de controle de interação do usuário

    while (controle != 'S') {  
        printf("ELOISA\n"); //Imprime o nome na tela
        repeticoes++; //Incrementa o número de repetições
        
        printf("Deseja encerrar o programa? S/N: "); //Interação com o usuário
        controle = getchar();
        while (getchar() != '\n'); //Elimina o \n do primeiro printf
    }

    //Exibe quantidade de repetições
    printf("Repetições: %d\n", repeticoes);

    return 0;
}