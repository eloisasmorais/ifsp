/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

7. Escreva um programa que leia uma string (use gets()) e retire todos os caracteres 'c'
da string lida. Informe na tela quantos caracteres foram retirados

*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int contaC = 0;
    char str[50];
    printf("Digite uma frase:\n");
    gets(str);
    for (int i= 0; i < strlen(str); i++) {
        if(str[i] == 'c') {
            contaC++; //Conta quantidade de ocorrencias do caracter 
            str[i] = ' '; //Substitui o caracter por espaço em branco
        }
    }

    printf("Foram encontradas %d letras 'c'\n",contaC);
    printf("A nova string é: %s\n", str);

    return 0;
}