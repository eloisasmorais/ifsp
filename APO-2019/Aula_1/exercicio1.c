#include <stdio.h>
#include <locale.h>
int main () {
    int num = 0;
    int dobro = 0;

    setlocale(LC_ALL, "Portuguese"); //Função para executar acentuação
    printf("Digite um numero: ");
    scanf("%d", &num);

    dobro = num * 2;

    printf("O dobro do numero %d é %d.", num, dobro);    
    for (int i = 0; i <= 5; i++) {
        printf("\n");
    }
    return 0;
}