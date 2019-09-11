#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Funções */ 
float calculaPerimetro(float baseP, float alturaP) {
    float resultado;
    resultado = 2 * (baseP * alturaP);

    return resultado;
}

float calculaArea(float baseA, float alturaA) {
     float resultado;
     resultado = baseA * alturaA;

     return resultado;
}

float calculaDiagonal(float baseD, float alturaD) {
    float resultado;
    baseD *= baseD;
    alturaD *= alturaD; 
    resultado = sqrt(baseD + alturaD);
    
    return resultado;
}

/* Início da main */
int main() {
    setlocale(LC_ALL, "Portuguese");
    float base, altura;
    float perimetro, area, diagonal;

    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    perimetro = calculaPerimetro(base, altura);
    area = calculaArea(base, altura);
    diagonal = calculaDiagonal(base, altura);

    printf("\nO perímetro é %.2f.\n", perimetro);
    printf("A área é %.2f.\n", area);
    printf("A diagonal é %.2f.\n", diagonal);

    return 0;
}
