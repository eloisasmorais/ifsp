/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

9. Escreva um programa que leia uma linha de caracteres do teclado e imprima quantas
vezes um caractere, também fornecido pelo teclado, aparece nesta linha. O programa
também deve imprimir em que posições o caractere foi encontrado.

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str[255]; //Armazena caracteres digitados pelo usuário
    char ch; //Caracte a ser procurado na frase
    int contaCh = 0; //Conta quantidade de ocorrências do caracter na frase

    printf("Digite quaisquer caracteres (limite máximo 255): \n");
    gets(str);

    printf("Digite o caracter que deseja encontrar: ");
    ch = getchar();

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            contaCh++; //Computa detecção do caracter
        }
    }

    int pos[contaCh]; //Declara vetor para armazenar posições onde foram encontradas o caracter
    int j = 0; //posições do vetor pos
    for (int i = 0; str[i] != '\0'; i++) {
         if (str[i] == ch) {
            pos[j] = i; //atribui a pos[i] o valor de i como posição do caracter encontrado
            j++; //incrementa posição a ser usada no vetor pos
        }
    }

    printf("O caracter %c foi encontrado %d vezes!\n", ch, contaCh);
    printf("E foi visto nas seguintes posições: \n");
    for (int i = 0; i < contaCh; i++) {
        printf("%d ", pos[i] + 1);
    }

    return 0;
}