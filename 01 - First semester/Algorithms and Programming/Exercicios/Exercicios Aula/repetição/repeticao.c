#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    int maior;
    int menor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    maior = num;
    menor = num;

    while (num >= 0) { 
        printf("Digite um número inteiro ou um número negativo para encerrar: ");
        scanf("%d", &num);

        if (num >= maior) maior = num;
        else if (num <= menor) menor = num;
    } 

    printf("O menor número digitado foi %d e o maior foi %d.\n", menor, maior);
    
    return 0;
}