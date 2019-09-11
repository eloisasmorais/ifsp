/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

12. Faça um programa que leia dez conjuntos de dois valores (Matriz 10 X 2), o primeiro
representando o número do aluno e o segundo representando a sua altura em metros.
Encontre o aluno mais baixo e o mais alto. Mostre o número do aluno mais baixo e do
mais alto, juntamente com suas alturas.

*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float dados[10][2]; //Matriz que armazena número e altura do aluno
    float alt; //Armazena a altura
    int n, maior, menor; //Armazena número do aluno, maior e menor altura
    for (int i = 0; i < 10; i++) {
        printf("Digite o número do aluno: ");
        scanf("%d", &n);
        printf("Digite a altura do aluno: ");
        scanf("%f", &alt);

        dados[i][1] = n;
        dados[i][2] = alt;
        if (i == 0) { //Atribui o primeiro valor digitado às variáveis maior e menor  
            maior= i;
            menor = i;
        }

        if (alt > dados[maior][2]) maior = i; //Compara o valor armazenado da matriz com a maior altura digitada
        if (alt < dados[menor][2]) menor = i;//Compara o valor armazenado da matriz com a menor altura digitada
    }

    printf("O aluno de maior altura é o aluno %.0f com %.2f de altura\n", dados[maior][1], dados[maior][2]);
    printf("O aluno de menor altura é o aluno %.0f com %.2f de altura\n", dados[menor][1], dados[menor][2]);

    return 0;
}