#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int idade;
    char nome[30];
    printf("Digite o nome do atleta: ");
    //scanf("%s", nome);
    gets(nome);

    printf("Digite a idade do atleta: ");
    scanf("%d", &idade);

    printf("Nome: %s\nCategoria: ", nome);
    if (idade >= 5 && idade <= 10) {
        printf("Infantil");
    } else if (idade >= 11  && idade <= 15) {
        printf("Juvenil\n");
    } else if (idade >= 16 && idade <= 20) {
        printf("Junior\n");
    } else if (idade >= 21 && idade <= 25) {
        printf("Profissional\n");
    } 
    return 0;
}   