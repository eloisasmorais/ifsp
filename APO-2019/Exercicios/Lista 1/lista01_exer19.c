/* 
Eloisa Silva de Morais - 1960881 
Turma A 

19) Faça um algoritmo que, lendo 3 números correspondentes aos coeficientes a, b, e c de uma
equação do 2o grau, calcule seu DELTA e também as raízes desta equação, imprimindo seus
valores.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    float a, b, c; //Variáveis representando os coeficientes
    float delta; //Guarda o resultado do cálculo do delta
    float x1, x2; //Guarda o resultado das raízes

    //Interação com o usuário
    printf("Digite o valor dos três coeficientes da equação: ");
    scanf("%f%f%f", &a, &b, &c);

    //Cálculo do delta
    delta = (b * b) - 4 * a * c;
    
    //Cálculo das raízes
    if (delta >= 0) {
        x1 = ((-1 * b) + sqrt(delta)) / (2 * a);
        x2 = ((-1 * b) - sqrt(delta)) / (2 * a);
        printf("o valor de delta é %f e as raízes da equação são %.2f e %.2f.\n", delta, x1, x2);
    } else {
        printf("O valor de delta é %f, logo não existem raízes reais.\n", delta);
    }

    return 0;
}