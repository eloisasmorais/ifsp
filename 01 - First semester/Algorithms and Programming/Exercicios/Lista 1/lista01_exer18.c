/* 
Eloisa Silva de Morais - 1960881 
Turma A 

18) Ler do teclado o Peso e a altura de uma pessoa. Calcular o índice de massa corporal (IMC) e
determinar o tipo, conforme tabela abaixo. Exibir o IMC e o tipo da pessoa.

IMC = PESO / (ALTURA)² 

*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração de variáveis
    int peso; //Guarda o peso digitado pelo usuário
    float altura; //Guarda a altura digitada pelo usuário
    float imc; //Guarda o resultado do cálculo do IMC

    //Interação com o usuário
    printf("Digite o peso em kg: ");
    scanf("%d", &peso);
    printf("Digite a altura em metros:\nEx: 1.79, 1.65m\n");
    scanf("%f", &altura);

    //Cálculo do IMC
    imc = peso / (altura * altura);

    //Imprime o resultado de acordo levando em conta a condição
    printf("O IMC de uma pessoa de %.2fm de altura que pesa %d kg é %.2f.\n", altura, peso, imc);
    printf("Classificação: ");
    if (imc < 22) {
        printf("SUBPESO\n");
    } else if (imc >= 22 && imc <= 25) {
        printf("NORMAL\n");
    } else if (imc > 25 && imc <= 30) {
        printf("SOBREPESO\n");
    } else if (imc > 30 && imc < 40) {
        printf("OBESO\n");
    } else if (imc >= 40) {
        printf("OBESO MÓRBIDO\n");
    }

    return 0;
}