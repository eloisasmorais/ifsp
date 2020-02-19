/* 
Eloisa Silva de Morais - 1960881 
Turma A 

29) Dados um valor inteiro n e dois números inteiros positivos, i e j, diferentes de 0 (zero), imprimir em
ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos.
Exemplo: Para n = 6, i = 2 e j = 3 a saída deverá ser: 0,2,3,4,6,8.
*/
#include <stdio.h>
#include <locale.h>

float main() {
	setlocale(LC_ALL, "Portuguese");
	int num; //Variável que representa o valor inteiro digitado pelo usuário 
	int i; //Representa o primeiro inteiro positivo digitado pelo usuário
	int j; //Representa o segundo inteiro positivo digitado pelo usuário
	int multiplo = 0; //Guarda o valor utilizado na comparação
	int cont = 0; //Guarda a quantidade de múltiplos calculados

	printf("Digite um número: ");
	scanf("%d", &num);
	printf("Digite um intervalo: ");
	scanf("%d", &i);
	scanf("%d", &j);

	printf("Sequência: ");
	while (cont < num) {
		if (multiplo % i == 0 || multiplo % j == 0) {
			printf("%d, ", multiplo);
			cont++; //Incrementa valor a cada comparação bem sucedida
		}
		multiplo++; //Incrementa o valor a ser comparado no if
	}
	printf("\n");
	return 0;
}