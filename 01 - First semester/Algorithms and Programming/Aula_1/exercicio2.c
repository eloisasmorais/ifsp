#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    float comprimento = 0, altura = 0;
    float area = 0; 

    //Entrada de valores
    printf("Insira a altura em metros: ");
    scanf("%f", &altura);
    printf("Insira o comprimento em metros: ");
    scanf("%f", &comprimento);

    //Cálculo da área
    area = altura * comprimento;

    //Exibição do resultado
    printf("A área é %.0fm²\n", area);
    return 0;
}