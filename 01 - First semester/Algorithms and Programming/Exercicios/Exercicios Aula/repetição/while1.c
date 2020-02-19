#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 100;
    while (num <= 110) {
        printf("%d\n", num);
        num++;
    }

    return 0;
}