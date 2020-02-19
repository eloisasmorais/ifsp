#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;
    int maior = 0, menor = 0;

    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        
        if (num != maior && num != menor) {
            maior = num;
            menor = num;
        }

        if (num >= 0) {
            if (num >= maior) maior = num;
            else if (num <= menor) menor = num;
        }
    } while (num >= 0);

    printf("O menor número digitado foi %d e o maior foi %d.\n", menor, maior);

    return 0;

}