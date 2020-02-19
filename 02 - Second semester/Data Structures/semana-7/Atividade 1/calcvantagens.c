#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "calcvantagens.h"

void userInput(float *numHoras, float *salHoras, float *numFilhos, float *valFilhos, float *taxa) {
    printf("Digite o numero de horas: ");
    scanf("%f", numHoras);
    printf("Digite o salario por hora: ");
    scanf("%f", salHoras);
    printf("Digite o numero de filhos: ");
    scanf("%f", numFilhos);
    printf("Digite o valor por filho: ");
    scanf("%f", valFilhos);
    printf("Digite a taxa do INSS (em porcentagem): ");
    scanf("%f", taxa);
    *taxa /= 100; //Obtem valor real que será utilizado no cálculo
}

void calculoVantagens(float *calcVantagem, float *salBruto, float *salFamilia, float nHoras, float salHoras, float nFilhos, float valFilhos) {
    *salBruto = nHoras * salHoras;
    *salFamilia = nFilhos * valFilhos;
    *calcVantagem = *salBruto + *salFamilia;
}

void calculoDeducoes(float *calcDeducoes, float * inss, float *iprf, float salBruto, float taxa) {
    *inss = salBruto * 0.08;
    *iprf = salBruto * taxa;
    *calcDeducoes = *inss + *iprf;
}

void imprimeResultados(float vantagens, float deducoes) {
    printf("O valor total em vantagens é de R$%.2f.\n", vantagens);
    printf("O valor total de deduções é de R$%.2f.\n", deducoes);
}