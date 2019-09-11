#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char estadoCivil;
    printf("Opções:\n1) S\n2) C\n3) D\n4) V\nInsira um estado civil:\n");
    estadoCivil = getchar();
    if (estadoCivil == 'S') {
        printf("Solteiro(a)\n");
    } else if (estadoCivil == 'C') {
        printf("Casado(a)\n");
    } else if (estadoCivil == 'D') {
        printf("Divorciado(a)\n");
    } else if (estadoCivil == 'V') {
        printf("Viuvo(a)\n");
    }
}