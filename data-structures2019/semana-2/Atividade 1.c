/*
    Nome: Eloisa Silva de Morais
    Matrícula: GU3005291
 */

#include <stdio.h>
#include <locale.h>

float salarioBruto, salarioFamilia, vantagens;
float INSS, IPRF, deducoes;
void calculoVantagens(float nHoras, float salHoras, float nFilhos, float valFilho) {
    salarioBruto = nHoras * salHoras;
    salarioFamilia = nFilhos * valFilho;
    vantagens = salarioBruto + salarioFamilia;
}

void calculoDeducoes(float salBruto, float taxa) {
    INSS = salBruto * 0.08;
    IPRF = salBruto * taxa;
    deducoes = INSS + IPRF;
}

void imprimeResultados() {
    printf("O valor total em vantagens é de R$%.2f.\n", vantagens);
    printf("O valor total de deduções é de R$%.2f.\n", deducoes);
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    float numeroHoras, salarioHora, numeroFilhos, valorPorFilho;
    float taxaIR;

    printf("Digite o numero de horas: ");
    scanf("%f", &numeroHoras);
    printf("Digite o salario por hora: ");
    scanf("%f", &salarioHora);
    printf("Digite o numero de filhos: ");
    scanf("%f", &numeroFilhos);
    printf("Digite o valor por filho: ");
    scanf("%f", &valorPorFilho);

    printf("Digite a taxa do INSS (em porcentagem): ");
    scanf("%f", &taxaIR);
    taxaIR /= 100; //Obtem valor real que será utilizado no cálculosada

    calculoVantagens(numeroHoras, salarioHora, numeroFilhos, valorPorFilho);
    calculoDeducoes(salarioBruto, taxaIR);
    imprimeResultados();
    return 0;
}