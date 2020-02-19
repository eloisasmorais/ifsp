#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int base; 
    int potencia;
    float resultado = 1;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite a potência: ");
    scanf("%d", &potencia);

    if (potencia == 0) {
        resultado = 1;
        printf("O resultado é %.0f\n", resultado);
    } else if (potencia < 0) {
        float resultadoDiv;
        potencia = potencia * (-1);
        for (int i = 0; i < potencia; i++) {
            resultado *= base;
        }
        resultadoDiv = 1 / resultado;
        printf("O resultado é 1/%.0f ou %.3f\n", resultado, resultadoDiv);
    } else {
        for (int i = 0; i < potencia; i++) {
            resultado *= base;
        }
        printf("O resultado é %.0f\n", resultado);
    }

    return 0;
}
