/* 
Eloisa Silva de Morais - 1960881 
Turma A 

23) Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para
estar em condições, um dosseguintes requisitos deve ser satisfeito:
    - Ter no mínimo 65 anos de idade.
    - Ter trabalhado no mínimo 30 anos.3
    - Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
Com base nas informações acima, faça um programa que leia: o número do empregado (código), o ano de
seu nascimento e o ano de seu ingresso na empresa. O programa deverá escrever a idade e o tempo de
trabalho do empregado e a mensagem 'Requerer aposentadoria' ou 'Não requerer'.
*/
#include <stdio.h>
#include <locale.h>

float main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int codigo; //Código do empregado
    int anoNasc; //Ano de nascimento do empregado
    int anoDeIngresso; //Ano de ingresso na empresa
    int idade; //Guarda resultado do cálculo da idade
    int tempoContribuicao; //Guarda resultado do cálculo do tempo de contribuição

    //Interação com o usuário
    printf("Digite o número do empregado: ");
    scanf("%d", &codigo);
    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNasc);
    printf("Digite o ano de ingresso na empresa: ")/
    scanf("%d", &anoDeIngresso);

    //Cálculo da idade
    idade = 2019 - anoNasc;

    //Cálculo de tempo de contribuição
    tempoContribuicao = 2019 - anoDeIngresso;


    //Exibição dos resultados
    //Comparação dos resultados com as condições exigidas
    if ((idade >= 65) || (idade >= 60 && tempoContribuicao >= 25) || (tempoContribuicao >= 30)) { 
        printf("Idade: %d\n", idade);
        printf("Tempo de contribuição: %d\n", tempoContribuicao);
        printf("Requerer aposentadoria.\n");
    } else {
        printf("Idade: %d\n", idade);
        printf("Tempo de contribuição: %d\n", tempoContribuicao);
        printf("Não requerer\n");
    }

    return 0;
}