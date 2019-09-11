/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

8. Faça um programa que inverta uma cadeia de caracteres. O programa deve ler a
cadeia com gets e armazená-la invertida em outra cadeia. Use o comando for para
varrer a cadeia até o seu final.

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char str[255]; //Armazena caracteres digitados pelo usuário

    printf("Digite qualquer coisa:\n");
    gets(str);

    int tamanho = strlen(str) - 1; //Usada para declarar o tamanho do segundo vetor
    char novoStr[tamanho]; //Declara novo vetor

    for(int i = tamanho, j = 0; str[i] >= 0; i--, j++) {
        novoStr[j] = str[i];
    }

    printf("O input invertidos é: %s", novoStr);

    return 0;
}