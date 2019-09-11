/* 
Eloisa Silva de Morais - 1960881 
Turma A 

11) Efetuar a leitura de três valores (variáveis A, B e C) e apresentá-los dispostos em ordem decrescente.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis 
    int x, y, z; //Guarda variáveis inseridas pelo usuário

    //Interação com o usuário
    printf("Insira 3 números: ");
    scanf("%d %d %d", &x, &y, &z);


    //Verificação de cada caso e exibição do resultado ordenado
    if(x >= y && y >= z) {
        printf("%d, %d, %d\n", x, y, z);
    } else if (x >= z && z >= y) {
        printf("%d, %d, %d\n", x, z, y);
    } else if (y >= x && x >= z) {
        printf("%d, %d, %d\n", y, x, z);
    } else if (y >= z && z >= x) {
        printf("%d, %d, %d\n", y, z, x);
    } else if (z >= y && y >= x) {
        printf("%d, %d, %d\n", z, y, x);
    } else if(z >= y && x >= y) {
        printf("%d, %d, %d\n", z, x, y);
    }
    
    return 0;
}