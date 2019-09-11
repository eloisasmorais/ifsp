#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idade;
    int somaIdade = 0;
    int contaTotal = 0;
    float media;

    printf("Digite uma idade: ");
    scanf("%d", &idade);

    while (idade != 0) {
        somaIdade += idade; //Guarda a soma de todas as idades
        contaTotal++; //Incrementa o total de idades digitadas

        printf("Digite uma idade: ");
        scanf("%d", &idade);
    }

    media = somaIdade / contaTotal; //Realiza a média das idades
    printf("A média das idades digitadas é %.1f.\n", media);

    return 0;
}