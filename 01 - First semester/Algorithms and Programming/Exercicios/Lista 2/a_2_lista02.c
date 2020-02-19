/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

2. Uma função que receba um carácter e caso seja maiúsculo retorne o correspondente minúsculo. 
O protótipo da função deverá ser char MINUSCULO(char S). Faça um programa que teste a função em seu código.

*/

#include <stdio.h>
#include <locale.h>
#include <ctype.h>

char MINUSCULO (char S) {
    if (tolower(S) != S) { //Verifica se é maiúsculo
        S = tolower(S);
    }  else {
        printf("Já é minúsculo!\n");
    }
        return S;
}

int main() {   
    setlocale(LC_ALL, "Portuguese");

    char caracter; //Guarda caracter digitado
    printf("******Conversor de maiúsculo******\n\n");
    printf("Digite uma letra: ");
    scanf("%c", &caracter);

    printf("Resultado: %c\n", MINUSCULO(caracter));
    return 0;
}