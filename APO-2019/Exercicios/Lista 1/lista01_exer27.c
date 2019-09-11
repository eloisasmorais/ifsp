/* 
Eloisa Silva de Morais - 1960881 
Turma A

27) Faça um programa para calcular as seguintes sequencias:
    1 + 2 + 3 + 4 + 5 + ::: + n
    1 − 2 + 3 − 4 + 5 + ::: + (2n − 1)
    1 + 3 + 5 + 7 + ::: + (2n − 1)

*/
#include <stdio.h>
#include <locale.h>

float main() {
    setlocale(LC_ALL, "Portuguese");

    int num; //Guarda numero inserido pelo usuário
    int seq1 = 0, seq2 = 0, seq3 = 0; //Armazena resultado das sequências

    printf("Digite um número: ");
    scanf("%d", &num);

    //Cálculo da primeira sequência 
    for (int i = 1; i <= num; i++) {
        seq1 += i; 
    }
    //Cálculo da segunda sequência 
    for (int i = 0; i <= num; i++) {
        if (i % 2 != 0) {
            seq2 += i;
        } else {
            seq2 -= i;
        }
    }
    //Cálculo da terceira sequência 
    for (int i = 1; i <= num; i++) {
        seq3 = (2 * i) - 1;
    }

    //Exibe resultados
    printf("\nPrimeira sequência: %d\n", seq1);
    printf("Segunda sequência: %d\n", seq2);
    printf("Terceira sequência: %d\n", seq3);
    
    return 0;
}