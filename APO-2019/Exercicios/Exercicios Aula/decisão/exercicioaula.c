#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int a, b;

    printf("Digite os valores\n"); 
    printf("Valor 1: ");
    scanf("%d", a);
    printf("Valor 2: ");
    scanf("%d", b);

    if (a > b) 

    return 0;
}