#include <stdio.h>
#include <locale.h>
#include "calcvantagens.h"

int main (){ 
    setlocale(LC_ALL, "Portuguese");
    
    float numeroHoras, salarioHora, numeroFilhos, valorPorFilho;
    float taxaIR;
    float salarioBruto, salarioFamilia, INSS, IPRF;
    float vantagens, deducoes; //Guarda resultados dos cálculos finais
    
    userInput(&numeroHoras, &salarioHora, &numeroFilhos, &valorPorFilho, &taxaIR);
    calculoVantagens(&vantagens, &salarioBruto, &salarioFamilia, numeroHoras, salarioHora, numeroFilhos, valorPorFilho);
    calculoDeducoes (&deducoes, &INSS, &IPRF, salarioBruto, taxaIR);
    imprimeResultados(vantagens, deducoes);

    return 0;
}