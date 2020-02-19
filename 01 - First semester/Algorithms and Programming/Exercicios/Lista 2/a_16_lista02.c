/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

16. Escreva um programa que leia um conjunto N (tam. 20) de números inteiros e imprima
os seguintes resultados:
    media dos números;
    maior dos números;
    menor dos números;
    produto de todos os números.

*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int n[20];
    int maior, menor;
    long produto = 1; //Inicializado com o elemento neutro da multiplicação
    int soma = 0; //Inicializado com o elemento neutro da adição
    float media;

    printf("Digite 20 números: \n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &n[i]);
        if (i == 0) {
            maior = n[i];
            menor = n[i];
        }
        soma += n[i];
        produto *= n[i];

        if (n[i] > maior) maior = n[i];
        if (n[i] < menor) menor = n[i];
    }

    media = soma / 20.0; //Força a média a ser ponto flutuante

    printf("Média dos números: %.2f\n", media);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Produto dos números: %li\n", produto);

    return 0;
}