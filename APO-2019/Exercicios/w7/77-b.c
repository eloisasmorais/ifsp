#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");   
    
    float Salario, Sal_Final, SalF_Imp;

    printf("Digite o salário: ");
    scanf("%f", &Salario);

    Sal_Final = (Salario * 0.05) + Salario; 

    if (Sal_Final > 1000) {
        SalF_Imp = Salario - (Sal_Final * 0.07);
        printf("Salário final após aplicação de impostos: R$%.2f\n", SalF_Imp);
    } else {
        printf("Salário final: R$%.2f\n", Sal_Final);
    }
    return 0;
}