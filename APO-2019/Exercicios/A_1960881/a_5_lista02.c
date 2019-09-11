/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

5. Faça um programa com uma função chamada somaImposto. A função possui dois
parâmetros formais: taxaImposto, que é a quantia de imposto sobre vendas expressa
em porcentagem e custo, que é o custo de um item antes do imposto. A função
“altera” o valor de custo para incluir o imposto sobre vendas.

*/

#include <stdio.h>
#include <locale.h>

float somaImposto(float taxaImposto, float custo) {
    custo = custo * (1 + taxaImposto); //Altera o valor de custo para guardar o valor com imposto aplicado

    return custo;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float porcentagemImposto; //Armazena valores de quantidade de imposto 
    float valorSemImposto; //Armazena valor sem imposto aplicado
    float valorComImposto; //Armazena valor com imposto aplicado
    
    printf("Digite a porcentagem do imposto: ");
    scanf("%f", &porcentagemImposto);
    printf("Digite o custo do item: ");
    scanf("%f", &valorSemImposto);

    porcentagemImposto = porcentagemImposto / 100; //Atribui o valor real da taxa a ser utilizado no cálculo

    valorComImposto = somaImposto(porcentagemImposto, valorSemImposto);
    printf("O valor do item após aplicação dos impostos é R$%.2f", valorComImposto);

    return 0;
}