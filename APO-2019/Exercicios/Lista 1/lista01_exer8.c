/* 
Eloisa Silva de Morais - 1960881 
Turma A 

8) Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros números naturais.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero; //Numero inserido pelo usuário e servirá como controle da repetição
    int soma = 0; //Guarda soma dos n primeiros
    int contaNum = 1; //Marca o número a ser somado

    //Interação com o usuário
    printf("Insira um número inteiro e positivo: ");
    scanf("%d", &numero);

    while(contaNum <= numero){
        soma += contaNum; //Soma o número incrementado na estrutura de repetição
        contaNum++; //Incrementa o número a ser somado  
    }

    //Exibição de resultados
    printf("A soma dos %d primeiros números inteiros e positivos é %d\n", numero, soma);
    
    return 0;
}