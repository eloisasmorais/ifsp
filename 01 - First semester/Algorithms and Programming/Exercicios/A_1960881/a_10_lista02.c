/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

10. Faça um programa que recebe uma string como entrada e mostra outra string com os
carateres embaralhados. Por exemplo: se o programa receber a palavra python, pode
retornar npthyo, ophtyn ou qualquer outra combinação possível, de forma aleatória.
Exiba todos os caracteres em caixa alta, independentemente de como foram digitados.


*/

#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    int aleatorio;  //Armazena valor aleatório
    int tamanho;   //Armazena tamanho da string digitada
    char str[255]; //declara string 

    printf("Digite uma palavra: ");
    // fgets(str, 255, stdin); Usar apenas no Linux
    gets(str); 

    tamanho = strlen(str) - 1;

    for (int i = 0; i < tamanho; i++) {
        aleatorio = rand() % tamanho; //Seleciona um novo número aleatório entre 0 e tamanho a cada novo loop
        int temp = str[i]; //atribui a o valor em str[i] à variável temporária
        str[i] = str[aleatorio]; //Atribui novo valor a str[i] com valor de uma posição aleatória
        str[aleatorio] = temp; //Troca o valor da posição aleatória pelo valor inicialmente armazenado em str[i]
    }

    printf("A nova palavra é %s\n", str);
    return 0;
}