/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

14. Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em
um vetor com 10 posições. Preencha um segundo vetor apenas com os números
ímpares do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.

*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int vet[10]; //Vetor principal que armazena todos os números digitados
    int vetAux[10]; //Vetor que armazena temporariamente os valores ímpares
    int n; //Armazena o número digitado pelo usuário
    int contaImpar = 0; //Variável que conta a quantidade de números ímpares digitados
    int i, j = 0; //Guarda as posições nos vetores 

    printf("Digite 10 números entre 1 e 50\n");
    for (i = 0; i < 10; i++) {
        printf("%d: ", i+1);
        scanf("%d", &n);
        vet[i] = n; //Armazena o valor digitado no vetor principal
        if(n % 2 != 0) {
            vetAux[j] = n; //Armazena no vetor auxiliar se o número for ímpar
            contaImpar++; //Incrementa a quantidade de impares
            j++; //Incrementa a posição no vetor auxiliar
        }
    }

    int vetImpar[contaImpar];
    for (j = 0; j < contaImpar; j++) {
        vetImpar[j] = vetAux[j]; //Armazena os valores no vetor de números ímpares
    }
    printf("\n");
    i = 0, j = 0;
    printf("Imprimindo vetores: \n");
    for (i, j; i < 10, j < contaImpar; i++, j++) { //Usa o tamanho do menor vetor como parâmetro para imprimir 
        printf("%d %d\n", vet[i], vetImpar[i]);
    }
    for (i; i < 10; i++) { //Continua imprimindo caso os vetores possuam tamanho diferente
        printf("%d\n", vet[i]);
    }

    return 0; 
}