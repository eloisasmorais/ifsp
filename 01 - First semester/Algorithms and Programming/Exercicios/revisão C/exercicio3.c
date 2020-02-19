#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int resultado;
    int numero; 
    int provaReal;

    printf("Siga os seguintes passos: \n");
    printf("1) Pense um número.\n");
    printf("2) Multiplique por 2.\n");
    printf("3) Some 6 ao resultado.\n");
    printf("4) Divida o resultado por 2.\n");

    printf("Digite o resultado: ");
    scanf("%d", &resultado);

    numero = resultado - 3; //Fórmula resultante da fórmula original R = (n * 2 + 6) / 2

    provaReal = (numero * 2 + 6) / 2; //Utiliza o número obtido anteriormente na fórmula original 

    //Compara o resultado digitado com o resultado encontrado no passo anterior
    if (resultado == provaReal) {
        printf("O número que você pensou foi %d\n", numero);
    }

    return 0;
}