#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float a, b;
    float resultado = 8457493;
    int opcao, num;

    printf("Digite 2 valores: ");
    scanf("%f%f", &a, &b);

    printf("Escolha uma das operações abaixo:\n");
    printf("1) Soma\n2) Subtração\n3) Multiplicação\n4) Divisão\n5) Potenciação\n6) Radiciação\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = a + b;
            break;
        case 2:
            resultado = a - b;
            break;
        case 3:
            resultado = a * b;
            break;
        case 4:
            if (b != 0) {
                resultado = a  / b;
            } 
            break;
        case 5:
            resultado = pow(a, b);
            break;
        case 6:
            if (a > 0 && b > 0) {
                printf("Deseja calcular raiz quadrada de qual dos dois números?\n1) %.0f\n2) %.0f\n", a, b);
                scanf("%d", &num);
                if (num == 1) resultado = sqrt(a);
                if (num == 2) resultado = sqrt(b);
            } else if (a > 0 && b < 0) {
                resultado = sqrt(a); 
            } else if (a < 0 && b > 0) {
                resultado = sqrt(b);
            }
            break;
        default:
            break;
    }

    printf("O resultado é: ");
    printf("%.2f\n", resultado);

    return 0;
}