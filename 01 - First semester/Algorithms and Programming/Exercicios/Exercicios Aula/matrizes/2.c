#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));

    int matriz[3][3];
    float soma = 0;
    float media;
    int maior;
    int menor;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 15;
            soma += matriz[i][j];
            if (i == 0 && j == 0) {
                maior = matriz[i][j];
                menor = matriz[i][j];
            }

            if (matriz[i][j] > maior) maior = matriz[i][j];
            if (matriz[i][j] < menor) menor = matriz[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = rand() % 15;
            printf("%3d", matriz[i][j]);
        }
        printf("\n");
    }

    media = soma / 9.0;
    printf("Soma: %.2f\n", soma);
    printf("Média: %.2f\n", soma);
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}