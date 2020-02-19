#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");   

    int A;

    printf("Digite um valor: ");
    scanf("%d", &A);

    if (A < 10) {
        printf("%d é menor que 10.\n", A);
    } else {
        (A % 2 == 0) ? printf("%d é par.\n", A) : printf("%d é ímpar.\n", A);
    }

    return 0;
}