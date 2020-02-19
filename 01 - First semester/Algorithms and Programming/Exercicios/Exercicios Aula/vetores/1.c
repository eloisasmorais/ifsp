#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

// int main() {
//     int cont = 1, valores;

//     printf("Digite 10 valores: ");
//     for (cont; cont <= 10; cont++) {
//         printf("%d - ", cont);
//         scanf("%d", &valores);
//     }

//     system("clear");

//     for (int i = 0; i < 10; i++) {
//         printf("%d\n", valores);
//     }

//     return 0;
// }

int main() {

    int valores[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite 10 valores:\n");
        printf("%d - ", (i + 1));
        scanf("%d",  &valores[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", valores[i]);
    }

    return 0;
}