/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

13. Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
de uma loja, em cada linha represente um mês do ano, e cada coluna, uma semana do
mês. Calcule e imprima:
• total vendido em cada mês do ano;
• total vendido em cada semana durante todo o ano;
• total vendido no ano.

*/

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int meses = 12, semanas = 4;
    float vendas[meses][semanas];
    float totalMes = 0;
    float totalSemana = 0;
    float totalAno = 0;
    int i, j;
    for (i = 0; i < meses; i++) { 
        for (j = 0; j < semanas; j++) {
            vendas[i][j] = rand() % 1000; //Preenche a matriz com números aleatórios entre 0 e 1000
            totalAno += vendas[i][j]; //Calcula total anual
            printf("%.2f\t", vendas[i][j]); //Imprime matriz dos valores
        }
        printf("\n");
    }

    printf("\nTotal vendido em cada mês:\n");
    for (i = 0; i < meses; i++) { 
        for (j = 0; j < semanas; j++) {
            totalMes += vendas[i][j]; //Calcula total vendido por mês
        }
        printf("Mês %d: %.2f\n", i + 1, totalMes);
        totalMes = 0; //Reseta valor para a nova conta
    }

    printf("\nTotal vendido em cada semana:\n");
    for (i = 0; i < semanas; i++) { 
        for (j = 0; j < meses; j++) {
            totalSemana += vendas[j][i]; //Calcula total vendido por semana
        }
        printf("Semana %d: %.2f\n", i + 1, totalSemana);
        totalSemana = 0; //Reseta valor para a nova conta
    }

    printf("\nTotal anual: %.2f\n", totalAno); 

    return 0;
}