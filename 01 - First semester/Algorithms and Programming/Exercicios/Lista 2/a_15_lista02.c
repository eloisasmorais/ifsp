/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

15. Faça um programa em C que armazene 15 números inteiros em um vetor e depois
permita que o usuário digite um número inteiro para ser buscado no vetor, se for
encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Não encontrado!"

*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numeros[15]; //Armazena 15 números
    int n; //Número digitado pelo usuário;
    int encontrado; //Verifica se o valor foi encontrado ou não
    int i; //Guarda a posição

    for (int i = 0; i < 15; i++) {
        numeros[i] = rand() % 100; //Preenche o vetor com valores entre 0 e 100
    }

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 0; i < 15; i++) {
        if (n == numeros[i]) { //Compara n com os valores armazenados no vetor
            encontrado = 1;
            break;
        } else {
            encontrado = 0;
        }
    }

    //Imprime de acordo com o valor de encontrado
    if (encontrado == 1) printf("Valor encontrado na posição: %d\n", i); 
    if (encontrado == 0) printf("Não encontrado!\n");

    return 0;
}