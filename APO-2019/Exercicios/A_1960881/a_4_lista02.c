/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

4. Faça uma função que receba um número de 1 a 12 e exiba na tela o mês
correspondente ao número e a quantidade de dias correspondente ao mês.

*/

#include <stdio.h>
#include <locale.h>

void mostraMes(int n) {
    int dias; //Armazena a quantidade de dias de acordo com o mês digitado 
    //Verifica e imprime o mês correspondente
    if (n == 1) printf("Mês %d - Janeiro\n", n);

    if (n == 2) printf("Mês %d - Fevereiro\n", n);

    if (n == 3) printf("Mês %d - Março\n", n);

    if (n == 4) printf("Mês %d - Abril\n", n);

    if (n == 5) printf("Mês %d - Maio\n", n);

    if (n == 6) printf("Mês %d - Junho\n", n);

    if (n == 7) printf("Mês %d - Julho\n", n);

    if (n == 8) printf("Mês %d - Agosto\n", n);

    if (n == 9) printf("Mês %d - Setembro\n", n);

    if (n == 10) printf("Mês %d - Outubro\n", n);

    if (n == 11) printf("Mês %d - Novembro\n", n);

    if (n == 12) printf("Mês %d - Dezembro\n", n);

    //Verifica qual o mês digitado e atribui a quantidade de dias
    if (n == 4 || n == 6 || n == 9 || n == 11) { 
        dias = 30;
        printf("Possui %d dias\n", dias);
    } else if (n == 2) {
        dias = 28;
        printf("Possui %d ou %d dias\n", dias, dias + 1);
    } else {
        dias = 31;
        printf("Possui %d dias\n", dias);
    }


}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int mes; //Guarda o mês digitado pelo usuário
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &mes);

    mostraMes(mes); //Chama a função

    return 0;
}