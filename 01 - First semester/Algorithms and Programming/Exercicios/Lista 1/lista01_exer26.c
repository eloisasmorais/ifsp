/* 
Eloisa Silva de Morais - 1960881 
Turma A 

26) Faça um programa que leia o código de um produto e execute as tarefas (uma das seguintes tarefas
de cada vez), conforme tabela abaixo:
    0 – Encerra o programa
    1 – Inclui uma unidade no estoque
    2 – Exclui uma unidade no estoque
    3 – Mostra o total disponível no estoque
    4 – Mostra o total de entradas no estoque
    5 – Mostra o total de saídas no estoque
Outro código escrever: “Código Inválido
OBS.: A cada tarefa executada deverá voltar ao menu inicial.

*/
#include <stdio.h>
#include <locale.h>

float main() {
    setlocale(LC_ALL, "Portuguese");

    int codigo = 6;
    int estoque = 0;
    int totalEntradas = 0, totalSaidas = 0;

    while (codigo != 1 || codigo != 2 || codigo != 3 || codigo != 4 || codigo != 5) { 
        printf("0 – Encerra o programa\n");
        printf("1 – Inclui uma unidade no estoque\n");
        printf("2 – Exclui uma unidade no estoque\n");
        printf("3 – Mostra o total disponível no estoque\n");
        printf("4 – Mostra o total de entradas no estoque\n");
        printf("5 – Mostra o total de saídas no estoque\n"); 

        printf("Opção escolhida: ");
        scanf("%d", &codigo);

        //Verificação de códigos com opções válidas
        if (codigo == 0) { 
            printf("\nEncerrando programa.\n");
            break;
        } else if(codigo == 1) {
            estoque += 1; //Inclui unidade 
            totalEntradas += 1; //Conta inclusão 
        } else if (codigo == 2) {
            estoque -= 1; //Exclui unidade
            totalSaidas += 1; //Conta exclusão
        } else if (codigo == 3) {
            printf("\nTotal disponível no estoque: %d\n\n", estoque);
        } else if (codigo == 4) {
            printf("\nTotal de entradas no estoque: %d\n\n", totalEntradas);
        } else if (codigo == 5) {
            printf("\nTotal de saídas no estoque: %d\n\n", totalSaidas);
        } else {
            printf("\nCódigo inválido!\n");
            printf("Digite outro código ou digite 0 para sair: ");
            scanf("%d", &codigo);
        }
    }
    return 0;
}