/* 
Eloisa Silva de Morais - 1960881 
Turma A 

12) Uma pessoa resolveu fazer uma aplicação em uma poupança programada. Para calcular seu
rendimento, ela deverá fornecer o valor constante da aplicação mensal, a taxa e o número de meses.
Sabendo-se que a fórmula usada para este cálculo é:

VL_ACUMULADO = (P * (1 + i)^n - 1)/ i
Onde:
• i = taxa,
• P = aplicação mensal e
• n= número de meses

*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float valorAcumulado; //Guarda resultado do cálculo da aplicação
    float aplMensal; //Guarda valor da aplicação mensal inserido pelo usuário
    float taxa; //Guarda valor da taxa inserido pelo usuário
    int nMeses; //Guarda valor do numero de meses inserido pelo usuário
    float taxaFinal;

    //Interação com o usuário
    printf("Insira o valor da aplicação mensal: ");
    scanf("%f", &aplMensal);
    printf("Insira o percentual da taxa: ");
    scanf("%f", &taxa);
    printf("Insira a quantidade de meses: ");
    scanf("%d", &nMeses);

    taxa = taxa / 100; //Divide por 100 para obter o valor real a ser utilizado no cálculo da taxa final

    //Cálculo da taxa final
    taxaFinal = pow((1 + taxa), nMeses);

    //Cálculo do valor acumulado
    valorAcumulado = aplMensal * taxaFinal;

    printf("O valor total acumulado na poupança programada é R$%.2f.\n", valorAcumulado);
    return 0;
}