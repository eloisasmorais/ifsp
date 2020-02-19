#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis
    float salario;
    float percentual;
    float aumento = 0;
    float novoSalario = 0;

    //Interação com o usuário
    printf("Digite o salário atual: ");
    scanf("%f", &salario);
    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    //Cálculo do novo salário
    aumento = salario * (percentual / 100);
    novoSalario = salario + aumento;

    //Exibição dos resultados
    printf("O novo salário é R$%.2f, com aumento de R$%.2f.\n", novoSalario, aumento);

    return 0;
}
