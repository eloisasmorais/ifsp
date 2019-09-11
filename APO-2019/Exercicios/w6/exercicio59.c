#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis
    int anoNascimento;
    int anoAtual;
    int idade = 0;
    int idade2050 = 0;
    
    //Interação com o usuário
    printf("Insira o ano de nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Insira o ano atual: ");
    scanf("%d", &anoAtual);

    //Cálculo de idades sem considerar o mês do ano
    idade = anoAtual - anoNascimento;
    idade2050 = 2050 - anoNascimento;

    //Exibição dos resultados
    printf("A idade atual é %d e a idade em 2050 será %d\n", idade, idade2050);

    return 0;
}
