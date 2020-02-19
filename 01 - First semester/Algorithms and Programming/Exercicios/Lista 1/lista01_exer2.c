/*
Eloisa Silva de Morais - 1960881 
Turma A 

2) O usuário deve informar os valores dos catetos de um triângulo retângulo e que ao final o programa
 exibe a sua C.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    float A, B, C; //Variáveis representando os lados de um triangulo retângulo

    //Interação com o usuário
    printf("Insira o valor dos catetos: ");
    scanf("%f", &A);    
    scanf("%f", &B);    

    C = sqrt(pow(A, 2) + pow(B, 2)); //Calcula o valor da hipotenusa

    //Exibição do resultado
    printf("O valor da hipotenusa é %.0f\n", C);
    
    return 0;
}