/* 
Eloisa Silva de Morais - 1960881 
Turma A 

14) Escreva um programa que receba três números inteiros e retorne uma destas três mensagens:
– Os três valores são iguais;
– Não há valores iguais; ou
– Há dois valores iguais e um diferente.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3;

    //Interação com o usuário
    printf("Insira três valores: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    //Comparação de valores
    if (num1 == num2 && num1 == num3) { //Verifica se os três números são iguais
        printf("Os três valores são iguais.\n");
    } else if (num1 != num2 && num2 != num3 && num1 != num3) { //Verifica se todos os valores são diferentes 
        printf("Não há valores iguais.\n");
    } else if ((num1 == num2 && num1 != num3) || (num1 != num2 && num2 == num3) || (num1 != num2 && num1 == num3)) { //Verifica se há dois valores iguais
        printf("Há dois valores iguais e um diferente.\n"); 
    } 
    return 0;
}