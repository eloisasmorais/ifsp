/* 
Eloisa Silva de Morais - 1960881 
Turma A 

10) Faça um Programa que leia o salário bruto de uma pessoa e calcule o desconto do INSS levando em
    consideração o seguinte:
        • Para salários até R$ 500,00 a alíquota de INSS será de 8%
        • Para sal.acima de R$ 500,00 até R$ 1.000,00 a alíquota de INSS será de 10%
        • Para sal.acima de R$ 1.000,00 a alíquota de INSS será de 12%.
    No final deverá ser apresentado:
        • Salário bruto
        • Taxa de INSS
        • Valor de INSS
        • Salário líquido
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis
    float salarioBruto; //Guarda o valor do salário total 
    float salarioLiquido; //Guarda o valor do salário após o desconto do INSS
    float taxaInss; //Guarda a porcentagem a ser aplicada em cada caso
    float valorInss; //Guarda o valor do desconto a ser aplicado sobre o salário

    printf("Insira o valor do salário (bruto): ");
    scanf("%f", &salarioBruto);

    //Altera a taxa de acordo com a condição
    if (salarioBruto <= 500) { 
        taxaInss = 0.08;
    } else if (salarioBruto > 500 && salarioBruto <= 1000) {
        taxaInss = 0.1;
    } else {
        taxaInss = 0.12;
    }

    valorInss = salarioBruto * taxaInss; //Calcula o desconto do INSS
    salarioLiquido = salarioBruto - valorInss; //Calcula o valor final do salário

    printf("O salário bruto é de R$%.2f e a taxa aplicada a ele é de %.0f%%.\n", salarioBruto, (taxaInss * 100));
    printf("O salário após a aplicação das taxas no valor de R$%.2f é de R$%.2f.\n", valorInss, salarioLiquido);
    return 0;
}