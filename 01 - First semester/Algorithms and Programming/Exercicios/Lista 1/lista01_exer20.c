/* 
Eloisa Silva de Morais - 1960881 
Turma A 

20) Um hotel cobra R$ 50,00 reais a diária e mais uma taxa de serviços. A taxa de serviços é de:
    • 15,30 por dia, se número de diárias <15
    • 10,00 por dia, se número de diárias =15
    • 8,50 por dia, se número de diárias >15
Faça um programa que lê a quantidade de dias que o hóspede ficou no hotel e imprime a taxa e total a
pagar.

*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    float taxaDeServico; //Armazena a taxa de serviço
    int nDiarias; //Guarda o numero de diárias digitado pelo usuário
    float totalDespesas; //Guarda o resultado do cálculo da despesa do hóspede

    //Interação com o usuário
    printf("Digite a quantidade de diárias: ");
    scanf("%d", &nDiarias);

    if (nDiarias < 15) {
        taxaDeServico = 15.3;
    } else if (nDiarias == 15) {
        taxaDeServico = 10;
    } else if (nDiarias > 15) {
        taxaDeServico = 8.5;
    }
 
    //Cálculo do total a pagar
    totalDespesas = nDiarias * taxaDeServico;

    //Exibe resultado
    printf("Após aplicação da taxa diária de serviços de %.2f, o total a ser pago pelo cliente é R$%.f.\n", taxaDeServico, totalDespesas);

    return 0;
}