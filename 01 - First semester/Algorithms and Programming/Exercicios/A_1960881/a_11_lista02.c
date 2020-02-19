/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

11. Construa um programa em C que leia valores inteiros para a matriz A 3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos de
uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada e da
saída.

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");
    int A[3][5], B[5][3];
    int SOMACOLUNA[1][5];
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            A[i][j] = 1 + (rand() % 40); //Gera números aleatórios de 1 a 40 para preencher a matriz
            B[j][i] = A[i][j]; //Gerando a matriz transposta de A para facilitar a soma 
        }
    }

    printf("B:\n");
    for (int l = 0; l < 5; l++) {
        for (int c = 0; c < 3; c++) {
            soma += B[l][c];
        }
        SOMACOLUNA[1][l] = soma;
        soma = 0;
    }

    printf("As somas das colunas são: ");
    for (int k = 0; k < 5; k++) {
        printf("%d ", SOMACOLUNA[1][k]);
    }
    printf("\n");

    return 0; 
}