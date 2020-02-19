#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    int num = 1;
    int nLidos = 0;
    int nPares = 0;

    while(num != 1000){
        printf("Digite um número inteiro: ");
        scanf("%d", &num);

        if (num % 2 == 0) {
            nLidos++;
            nPares++;
        } else {
            nLidos++; 
        }
        
    }

    printf("O total de números  digitados foi %d e o total de números pares é %d\n", nLidos, nPares);
    

    return 0;
}