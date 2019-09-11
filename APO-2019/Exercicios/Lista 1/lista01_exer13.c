/* 
Eloisa Silva de Morais - 1960881 
Turma A 

13) Classificar um triângulo quanto aos lados, sendo que um triângulo com todos lados iguais é
designado equilátero, com todos os lados diferentes entre si é designado escaleno e caso tenha apenas
dois lados iguais entre si, designa-se isósceles. Antes é importante verificar se os valores formam um
triângulo, senão mostrar a mensagem “Não é triângulo”.

*/
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int a, b, c; //Variáveis representando os lados do triangulo
    
    printf("Insira os valores dos lados do triângulo: ");
    scanf("%d %d %d", &a, &b, &c);

    //Verificações
    if ((a < b + c) && (b < a + c) && (c < a + b)) { //Verifica a condição de existência do triângulo
        if (a == b && a == c) { //Verifica se é equilatero
            printf("Triângulo equilátero!\n");
        } else if ((a == b && a != c) || (a != b && b == c) || (a != b && a == c)) { //Verifica se é isósceles
            printf("Triângulo isósceles!\n"); 
        } else if (a != b && b != c && a != c) { //Verifica se é escaleno
            printf("Triângulo escaleno!\n");
        }
    } else {
        printf("Não é triângulo!\n");
    }
    return 0;  
}