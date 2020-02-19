/* 
Eloisa Silva de Morais - 1960881 
Turma A 

16) Desenvolver um programa que receba do teclado o nome e as 3 notas de um aluno. Calcular a média
aritmética do aluno exibir. Atribuir o resultado de acordo com a tabela abaixo.
Média Resultado
0 a 2,9 Reprovado
3 a 5,9 Recuperação
6 a 10,0 Aprovado
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3;
    float media;
    char nome[256];

    //Interação com o usuário
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    //Cálculo da média do aluno
    media = (nota1 + nota2 + nota3) / 3;

    printf("%s\n", nome); //Exibe o nome do(a) aluno(a)
    //Atribuição de valores baseado nas condições do problema
    if (media >= 0 && media <= 2.9) {
        printf("Reprovado(a).\n");
    } else if (media >= 3 && media <= 5.9) {
        printf("Recuperação.\n");
    } else if (media >= 6 && media <= 10) {
        printf("Aprovado(a).\n");
    }

    return 0;
}