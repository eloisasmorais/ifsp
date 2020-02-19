/* 

Eloisa Silva de Morais - 1960881 
Turma A 

3) Considerando uma eleição de apenas 2 candidatos, elabore um programa que leia do teclado 
o número total de eleitores, e o número de votos do primeiro candidato enúmero de votos do segundo candidato. 
Em seguida, o programa deverá apresentarpercentual de votos de cada um dos candidatos e o percentual de votos nulos.

*/

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float totalEleitores; //Variável representando o total de eleitores aptos para voto
    float votosCand1, votosCand2; //Votos de cada candidato
    float votosValidos, votosNulos; //Variável representando o total de votos válidos e nulos 
    float percentualCand1, percentualCand2, percentualNulos; //Variáveis referentes aos percentuais de cada candidato e de votos nulos

    printf("Insira o número total de eleitores: ");
    scanf("%f", &totalEleitores);
    printf("Insira o total de votos do primeiro candidato: ");
    scanf("%f", &votosCand1);
    printf("Insira o total de votos do segundo candidato: ");
    scanf("%f", &votosCand2);

    votosValidos = votosCand1 + votosCand2; //Calcula o total de votos válidos
    votosNulos = totalEleitores - votosValidos; //Calcula o total de votos nulos
    percentualNulos = (votosNulos / totalEleitores) * 100; //Calcula o percentual de votos nulos
    percentualCand1 = (votosCand1 / votosValidos * 100); //Calcula o percentual de votos do primeiro candidato
    percentualCand2 = (votosCand2 / votosValidos * 100); //Calcula o percentual de votos do primeiro candidato

    printf("\nO percentual de votos do CANDIDATO 1 entre os votos válidos é de %.1f%%.\n", percentualCand1);
    printf("O percentual de votos do CANDIDATO 2 entra os votos válidos é de %.1f%%.\n", percentualCand2);
    printf("O percentual de votos NULOS é de %.1f%%.\n", percentualNulos);

    return 0;
}