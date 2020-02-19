/* 
Eloisa Silva de Morais - 1960881 
Turma A 

4) Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e 
mostre o valor do aumento e o novo salário.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float salario; //Variável representando o salário atual
    float reajuste; //Variável representando o percentual do reajuste salarial
    float aumento; //Variável representando o valor do aumento aplicado
    float novoSalario; //Variável representando o valor do novo salário após o reajuste

    //Interação com o usuário
    printf("Insira o salário em reais: ");
    scanf("%f", &salario);
    printf("Insira o reajuste em porcentagem: ");
    scanf("%f", &reajuste);

    reajuste = reajuste / 100; //Divide por cem para obter valor a ser utilizado no cálculo
    aumento = salario * reajuste; //Calcula o valor do aumento
    novoSalario = salario + aumento; //Calcula novo salário

    //Exibição dos resultados
    printf("O após o aumento de R$%.2f, o novo salário é R$%.2f.\n", aumento, novoSalario);

    return 0;
}