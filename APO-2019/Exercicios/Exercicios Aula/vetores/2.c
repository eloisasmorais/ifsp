#include <stdio.h>
#include <locale.h>

int main() {

    int valores[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite 10 valores:\n");
        printf("%d - ", (i + 1));
        scanf("%d",  &valores[i]);
    }

    printf("Ordem normal:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", valores[i]);
    }

    printf("Ordem inversa:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}