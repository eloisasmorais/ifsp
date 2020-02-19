/* 
Eloisa Silva de Morais - 1960881 
Turma A 

7) Faça um Programa que leia 4 notas escolares de 5 alunos. Para cada um dos alunos calcular e apresentar a média.
*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota; //Guarda nota inserida pelo usuário
    float somaDasNotas = 0; //Guarda a soma das notas
    float mediaNotas; //Guarda a média das notas

    for (int i = 1; i <= 5; i++) {
        printf("\nAluno %d:\n", i);
        for (int j = 1; j <= 4; j++) {
            printf("Digite a nota número %d: ", j);
            scanf("%f", &nota);

            somaDasNotas += nota; //Soma as notas inseridas
        }
        mediaNotas = somaDasNotas / 4; //Calcula média das 4 notas
        printf("\nA média das notas do aluno %d é %.2f\n", i, mediaNotas);
        somaDasNotas = 0; //Reseta soma das notas para que não acumule com as do aluno anterior
    }

    return 0;
}