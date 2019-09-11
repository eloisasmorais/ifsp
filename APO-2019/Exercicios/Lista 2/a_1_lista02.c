/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

1. Escrever um programa que declare, inicialize e imprima um vetor de 10 inteiros. O
vetor deve conter os 10 primeiros múltiplos de 5. A inicialização do vetor e a sua
impressão devem ser feitas por funções.
 */

#include <stdio.h>
#include <locale.h>

void inicializaVetor() {
    int vet[10]; //Inicializa o vetor com 10 posiçõs
    int j = 0; //guarda o múltiplo de 5 
    for (int i = 0; i < 10; i++) {
        vet[i] = j; //Guarda o valor de j no vetor
        j += 5; //Incrementa j para o próximo múltiplo de 5
    }
    printf("Os 10 primeiros múltiplos de 5 são: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ",  vet[i]);
    }
    printf("\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int multiplos[10];
    inicializaVetor(multiplos);
    return 0;
}