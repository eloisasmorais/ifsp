#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    
    int valores[10];
    int maior;
    int menor;
    int soma = 0;
    float media;
    long long int produto = 1;

    for (int i = 0; i < 10; i++) {
        valores[i] = rand() % 50; 

        if (i == 0) {
            maior = valores[0];
            menor = valores[0];
        }

        if (valores[i] >= maior) {
            maior = valores[i];
        } else if (valores[i] <= menor) {
            menor = valores[i];
        }

        soma += valores[i];
        produto *= valores[i];
    }

    for(int i = 0; i < 10; i++) {
        printf("%d\n", valores[i]);
    }

    media = soma / 10.0;
    printf("soma: %d\n", soma);
    printf("A média dos números é %.2f\n", media);
    printf("O maior número é %d\n", maior);
    printf("O menor número é %d\n", menor);
    printf("O produto dos números é %lli\n", produto);


    return 0;
}