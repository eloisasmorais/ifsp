/* 
Eloisa Silva de Morais - 1960881 
Turma A 

9) Faça um Programa que leia um código:1 – Sinal vermelho, 2 – Sinal amarelo e 3 - Sinal verde.
Baseado no código digitado avise ao pedestre que está esperando no sinal:“SIGA”, "ATENÇÃO" ou “ESPERE”
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    //Declaração de variáveis
    int codigo; //Variável que guardará o código digitado pelo usuário

    //Interação com o usuário
    printf("Digite o código desejado: \n1 - Sinal Vermelho\n2 - Sinal Amarelo\n3 - Sinal Verde\n");
    scanf("%d", &codigo);

    //Compara o código para a tomada de decisão
    if(codigo == 1) {
        printf("SIGA\n");
    } else if (codigo == 2) {
        printf("ATENÇÃO\n");
    } else if (codigo == 3) {
        printf("ESPERE\n");
    } else {
        return 0;   
    }

}