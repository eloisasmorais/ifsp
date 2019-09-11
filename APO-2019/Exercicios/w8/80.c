#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int userInput;
    float somaN = 0;
    int qtdN = 0;
    int qtdPares = 0;
    int somaPares = 0;
    float mediaN;
    int maior;
    int menor;   
    float mediaPares;

    printf("Digite um número: ");
    scanf("%d", &userInput);

    maior = userInput;
    menor = userInput;

    while (userInput != 0) {
        somaN += userInput;
        qtdN++;

        if (userInput % 2 == 0) {
            somaPares += userInput;
            qtdPares++;
        }

        if (userInput >= maior) {
            maior = userInput;
        } else if (userInput <= menor) {
            menor = userInput;
        }   
        printf("Digite um número: ");
        scanf("%d", &userInput);
    }

    mediaN = somaN / qtdN;
    mediaPares = somaPares / qtdPares;

    printf("\n(a) A soma dos numeros digitados: %.0f\n", somaN); 
    printf("(b) A quantidade de numeros digitados: %d\n",  qtdN); 
    printf("(c) A media dos números digitados: %.1f\n", mediaN);
    printf("(d) O maior numero digitado: %d\n", maior);
    printf("(e) O menor numero digitado: %d\n", menor);
    printf("(f) A media dos números pares: %.1f\n", mediaPares);

    return 0;
}