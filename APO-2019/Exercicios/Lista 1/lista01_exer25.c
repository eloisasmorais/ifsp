/* 
Eloisa Silva de Morais - 1960881 
Turma A 

25) Faça um Programa que leia 4 notas escolares de 15 alunos. Para cada um dos alunos calcular e 
apresentar a média.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota; //Guarda nota inserida pelo usuário
    float somaNotas = 0; //Guarda soma de todas as notas inseridas
    float media; //Guarda resultado do cálculo da média

    for (int i = 1; i <= 15; i++) { //Loop enquanto as notas dos 15 alunos não são inseridas
        printf("\nAluno %d:\n", i);
        for (int j = 1; j <= 4; j++) {
            printf("Digite a nota %d: ", j);
            scanf("%f", &nota);

            somaNotas += nota; //Soma as notas inseridas
        }
        media = somaNotas / 4; //Calcula média das 4 notas
        printf("\nA média das notas do aluno %d é %.2f\n", i, media);
        somaNotas = 0; //Reseta soma das notas para que não acumule com as do aluno anterior
    }

    return 0;
}