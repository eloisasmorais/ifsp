#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    long int mult = 1;
    int num;
    for (int i = 1; i <= 10; i++) {
        printf("Digite o %do número: ", i);
        scanf("%d", &num); 
        mult *= num;
    } 

    printf("A multiplicação de todos os números digitados é %d.\n", mult);
}