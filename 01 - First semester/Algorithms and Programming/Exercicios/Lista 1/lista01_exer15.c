/* 
Eloisa Silva de Morais - 1960881 
Turma A 

15) Um posto está vendendo combustível com a seguinte tabela de descontos:
Álcool
    Até 20 litros, desconto de 3% por litro
    Acima de 20 litros, desconto de 5% por litro
Gasolina
    Até 20 litros, desconto de 4% por litro
    Acima de 20 litros, desconto de 6% por litro

Escreva um programa que leia o número de litros vendidos e o tipo de combustível (codificado da seguinte
forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do
litro da gasolina é R$ 3,30 e o preço do litro do álcool é R$ 2,90.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int litros; //Guarda a quantidade de litros dada pelo usuário
    char tipoCombustivel; //Guarda o tipo de combustível inserido pelo usuário
    float desconto; //Guarda o valor do desconto 
    float valorFinal; //Valor pago pelo cliente
    float preco; //Preço do combustível

    //Interação com o usuário
    printf("Digite a quantidade de litros: ");
    scanf("%d", &litros);
    printf("Digite o tipo de combustível:\n - A para álcool\n - G para gasolina\n");
    scanf(" %c", &tipoCombustivel); 

    //Atribuição de valores às variaveis de acordo com cada condição estabelecida
    if(tipoCombustivel == 'A') {
        preco = 2.9;
        if (litros <= 20) {
            desconto = 0.03; 
        } else {
            desconto = 0.05;
        }
    } else if (tipoCombustivel == 'G') {
        preco = 3.3;
        if (litros <= 20) {
            desconto = 0.04;
        } else {
            desconto = 0.06;
        }
    }

    //Cálculo do valor a ser pago pelo cliente onde "1 - desconto" equivale ao cálculo da porcentagem
    valorFinal = preco * litros * (1 - desconto); 

    //Exibe o valor final
    printf("O valor a ser pago pelo cliente é de R$%.2f.\n", valorFinal);

    return 0;
}