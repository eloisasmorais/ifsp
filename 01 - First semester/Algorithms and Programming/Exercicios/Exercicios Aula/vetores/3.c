#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vet[6] = {1, 0, 5, -2, -5, 7};
    int somaValores = vet[0] + vet[1] + vet[5];
    vet[4] = 100;

    for (int i = 0; i < 6; i++) {
        printf("%d\n", vet[i]);
    }

    printf("Soma das posições [0], [1] e [5]: %d\n", somaValores);

    return 0;
}