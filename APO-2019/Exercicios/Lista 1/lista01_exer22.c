/* 
Eloisa Silva de Morais - 1960881 
Turma A 

22) A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes. Faça um programa
para coletar dados sobre o salário e número de filhos de cada habitante e após as leituras, escrever:
    a) Média de salário da população
    b) Média do número de filhos
    c) Maior salário dos habitantes
    d) Percentual de pessoas com salário menor que R$ 150,00
Obs.: O final da leitura dos dados se dará com a entrada de um salário igual a zero.


*/
#include <stdio.h>
#include <locale.h>

float main() {
    setlocale(LC_ALL, "Portuguese");

    float salario; //Salário digitado pelo usuário
    float mediaSalario; //Guarda a média salarial que será calculada a partir dos dados inseridos
    float mediaFilhos; //Guarda a média de filhos que será calculada a partir dos dados inseridos
    float maiorSalario; //Guarda o maior salário digitado pelo usuário
    float percentualPessoas150; //Guarda o percentual de pessoas com salario menor do que R$150,00
    float totalSalario = 0; //Guarda a soma de todos os salários digitados
    float nPessoasTotal = 0; //Guarda o total de pessoas
    float nPessoas150 = 0; //Guarda o total de pessoas com salario menor do que R$150,00
    float nFilhos = 0; //Guarda o número de filhos digitado pelo usuário
    float qtdFilhosTotal = 0; //Guarda a soma da quantidade total de filhos digitados

    printf("Digite o salário em reais ou 0 para sair: ");
    scanf("%f", &salario);
    maiorSalario = salario;
    totalSalario += salario;

    if (salario == 0) {
        printf("Nada a calcular\n");
        return 0;
    }

    while(salario > 0){
        nPessoasTotal += 1;

        //Compara o salário digitado com o salário guardado anteriormente
        if (salario >= maiorSalario) {
            maiorSalario = salario;
        }
        printf("Digite o numero de filhos: ");
        scanf("%f", &nFilhos);
        qtdFilhosTotal += nFilhos; //Soma quantidade de total de filhos

        if(salario < 150) {
            nPessoas150 += 1;
        }

        printf("Digite o salário em reais ou 0 para sair: ");
        scanf("%f", &salario);
        totalSalario += salario; //Soma de todos os salários digitados
    }
    
    mediaSalario = totalSalario / nPessoasTotal;  //Cálculo da média salarial
    mediaFilhos = qtdFilhosTotal / nPessoasTotal; //Cálculo da média de filhos
    percentualPessoas150 = (nPessoas150 / nPessoasTotal) * 100;

    printf("\n\nMédia salarial: %.2f\n", mediaSalario);
    printf("Média de filhos: %.1f\n", mediaFilhos);
    printf("Maior salário: %.2f\n", maiorSalario);
    printf("Percentual de pessoas com salário abaixo de R$150,00: %.2f%%\n", percentualPessoas150);
    return 0;
}