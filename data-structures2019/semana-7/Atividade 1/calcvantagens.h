#include <stdio.h>
#include <stdlib.h>

void userInput(float *numHoras, float *salHoras, float *numFilhos, float *valFilhos, float *taxa);
void calculoVantagens(float *calcVantagem, float *salBruto, float *salFamilia, float nHoras, float salHoras, float nFilhos, float valFilhos);
void calculoDeducoes(float *calcDeducoes, float * inss, float *iprf, float salBruto, float taxa);
void imprimeResultados(float vantagens, float deducoes);