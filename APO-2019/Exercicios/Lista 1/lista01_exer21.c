/* 
Eloisa Silva de Morais - 1960881 
Turma A 

21) Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (inclusive os valores
10 e 20 no intervalo) e quantos deles estão fora deste intervalo.
*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    //Declaração das variáveis
    int num; //Numero digitado pelo usuário
    int noIntervalo = 0, foraIntervalo = 0; //Guarda a quantidade de números dentro e fora do intervalo

    //Interação com o usuário
    printf("Digite 10 números: ");
    for (int i = 0; i < 10; i++) { //Loop para que a variavel num seja usada 10 vezes
        scanf("%d", &num);
        if (num >= 10 && num <= 20) { //Comparação com os valores do intervalo
            noIntervalo += 1;   
        } else {
            foraIntervalo += 1;
        }
    }

    //Exibição do resultado
    printf("Números no intervalo [10, 20]: %d\n", noIntervalo);
    printf("Números fora do intervalo [10, 20]: %d\n", foraIntervalo);

    return 0;
}