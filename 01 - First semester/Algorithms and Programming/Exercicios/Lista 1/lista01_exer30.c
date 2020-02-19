/*
Eloisa Silva de Morais - 1960881 
Turma A 

30) Um salário tem os seguintes componentes:
    - valor nominal
    - adicional devido a horas extras
    - valor descontado para o INSS (10% do valor a receber, limitado a 150 reais).
    O valor adicional devido às horas extras é calculado dividindo-se o valor nominal por 176 (22 dias de
8 horas), multiplicando-se pela quantidade de horas e ainda com um acréscimo de 50%.
    Escrever um programa que lê os valores necessários, calcula e mostra na tela os componentes do
salário e o salário líquido resultante para o empregado. Não é preciso prever arredondamentos, mas os
valores devem ser mostrados na tela com duas casas decimais.

Exemplos: para um salário de R$ 1.000,00, com 30 horas extras, teremos R$ 255,68 de horas extras
[(1.000/176)*30*1,5], R$ 125,57 de INSS e um salário líquido de R$ 1.130,11. Para um salário de R$
2.000,00 e 20 horas extras, seriam R$ 340,91 de horas extras, R$ 150,00 de INSS (e não os 10%), com um
salário líquido de R$ 2.190,91.

*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float valorNominal; //Guarda o valor nominal do salário
    float qtdHoras; //Guarda quantidade de horas extras trabalhadas
    float calcHorasExtras; //Guarda o cálculo do valor das horas extras trabalhadas
    float taxaInss = 0.1; //Taxa fixa descontada pelo INSS
    float calcInss; //Guarda o cálculo do desconto do INSS
    float valorSemDesconto; //Guarda o salário sem o desconto do INSS
    float salarioLiq; //Guarda o salário após aplicação do desconto do INSS 

    printf("Digite o valor nominal: ");
    scanf("%f", &valorNominal);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &qtdHoras);

    //Cálculo de horas extras com acréscimo de 50%
    calcHorasExtras = (valorNominal / 176) * qtdHoras * 1.5;
    
    //Cálculo do salário após adição de horas extras
    valorSemDesconto = valorNominal + calcHorasExtras;

    //Cálculo do desconto do INSS
    calcInss = valorSemDesconto * taxaInss;

    if(calcInss > 150) { 
        calcInss = 150; //Limita o desconto do INSS a R$150,00
    } 

    salarioLiq = valorSemDesconto - calcInss;

    printf("Valor Nominal: %.2f\n", valorNominal);
    printf("Cálculo de horas extras: %.2f\n", calcHorasExtras);
    printf("Desconto INSS: %.2f\n", calcInss);
    printf("Salário Final: %.2f\n", salarioLiq);

    return 0;
}