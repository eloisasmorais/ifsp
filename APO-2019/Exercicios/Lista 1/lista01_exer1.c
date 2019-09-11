/*
Eloisa Silva de Morais - 1960881 
Turma A 

1) Vasos comunicantes são preenchidos, considerando o valor s a soma todos os valores do lado
esquerdo e com o valor da média do valor s preencher o lado direito.
*/
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");

    int N1, N2, N3; //variáveis representando os valores do lado esquerdo
    int S; //variáveis representando o valor central
    float M; //variável representando os valores do lado direito que serão sempre iguais


    //Interação com o usuário: entrada de valores
    printf("Insira os números para o lado esquerdo: ");
    scanf("%d", &N1);
    scanf("%d", &N2);
    scanf("%d", &N3);

    //Processos
    S = N1 + N2 + N3; //Calculo do valor central
    M = S / 3; //Calculo dos valores do lado direito 

    //Exibição do resultado
    printf("O resultado dos vasos comunicantes é: %d, %d, %d para o lado esquerdo, %d para o valor central e %.0f, %.0f, %.0f 
    para o lado direito.\n", N1, N2, N3, S, M, M, M);

    return 0;
}