#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char resposta;
    int contaResp = 0;

    
    printf("Responda as seguintes perguntas com sim ou não.\n"); 
    printf("1) Telefonou para a vítima?\n");
    printf("Resposta: ");
    resposta = getchar(); //O getchar vai pegar apenas o primeiro caracter da palavra
    // while (getchar() != '\n'); //Elimina o \n do final do caracter
    fflush;
    if (resposta == 's' || resposta == 'S') {
        contaResp++;
    }

    printf("2) Esteve no local do crime?\n");
    printf("Resposta: ");
    resposta = getchar();
    // while (getchar() != '\n');
    fflush;
    if (resposta == 's' || resposta == 'S') {
        contaResp++;
    }

    printf("3) Mora perto da vítima?\n");
    printf("Resposta: ");
    resposta = getchar();
    // while (getchar() != '\n');
    if (resposta == 's' || resposta == 'S') {
        contaResp++;
    }

    printf("4) Devia para a vítima?\n");
    printf("Resposta: ");
    resposta = getchar();
    // while (getchar() != '\n');
    if (resposta == 's' || resposta == 'S') {
        contaResp++;
    }

    printf("5) Já trabalhou com a vítima?\n");
    printf("Resposta: ");
    resposta = getchar();
    // while (getchar() != '\n');
    if (resposta == 's' || resposta == 'S') {
        contaResp++;
    }
    
    //Classificação de acordo com as respostas:
    printf("\nClassificação: ");
    if (contaResp == 2) {
        printf("Suspeito(a)\n");
    } else if (contaResp > 2 && contaResp < 5) {
        printf("Cúmplice\n");
    } else if (contaResp >= 5) {
        printf("Assassino(a)\n");
    } else {
        printf("Inocente\n");
    }

    return 0; 
}