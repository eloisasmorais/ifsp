/* Nome: Eloísa Silva de Morais  Prontuário: 1960881  Turma: A 

3. Faça um programa que leia o saldo e o % de reajuste de uma aplicação financeira e
imprimir o novo saldo após o reajuste. O cálculo deve ser feito por uma função.

*/

#include <stdio.h>
#include <locale.h>

float calculaReajuste (float valor, float porcentagem) {
    float resultado;
    resultado = valor * (1 + porcentagem); //Cálculo do reajuste 
    
    return resultado;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    float saldo, reajuste; //Variáveis referentes ao saldo e reajuste digitados pelo usuário
    float saldoFinal; //Armazena resultado final 
    printf("Digite o saldo: ");
    scanf("%f", &saldo);
    printf("Digite o valor do reajuste em porcentagem: ");
    scanf("%f", &reajuste);

    reajuste = reajuste / 100; //Converte de porcentagem para decimal 
    saldoFinal = calculaReajuste(saldo, reajuste); //Chama a função e armazena o resultado

    printf("O saldo após o reajuste é de R$%.2f.\n", saldoFinal);
    return 0;
}