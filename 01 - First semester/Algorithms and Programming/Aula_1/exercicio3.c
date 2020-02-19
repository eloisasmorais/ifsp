#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    float distanciaTotal = 0, totalLitros = 0;
    float mediaConsumo = 0;

    //Entrada do usuário
    printf("Digite a distância percorrida: ");
    scanf("%f", &distanciaTotal);
    printf("Digite o total de combustível gasto: ");
    scanf("%f", &totalLitros);

    //Cálculo de consumo
    mediaConsumo = distanciaTotal / totalLitros;

    //Exibe resultado
    printf("O consumo médio é %.0fkm/L\n", mediaConsumo);
    return 0;
}