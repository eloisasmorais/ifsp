/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

6. Faça um programa para imprimir:
1
1 2
1 2 3
.....
1 2 3 ... n
Para um n informado pelo usuário. Use uma função que receba um valor n inteiro imprima
até a n-ésima linha.
*/

#include <stdio.h>
#include <locale.h>

void imprime(int num) {
    for (int i = 1; i <= num; i++) {
        for (int j=1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n; //Armazena o tamanho informado pelo usuário

    printf("Digite um número: ");
    scanf("%d", &n);
    imprime(n);

    return 0;
}