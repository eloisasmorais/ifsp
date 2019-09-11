#include <stdio.h>
#include <locale.h>

/* Funções genéricas para receber input do teclado */
void leStrings(char *s1, char *s2) {
    printf("Digite a primeira string: ");
    scanf(" %s", s1);
    printf("Digite a segunda string: ");
    scanf(" %s", s2);
}

void leString(char *s) {
    printf("Digite a string:");
    scanf("%s", s);
}

/* Função strlen */
int tamanhoString(char *str) {
    int tamanho = 0; 
    for (int i = 0; str[i] != '\0'; i++) {
        tamanho++;
    }
    return tamanho;
}

/* Função strcmp */
int comparaStrings(char *s1, char *s2) {
    for(int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] > s2[i]) {
            return 1;
        } else if(s1[i] < s2[i]) {
            return -1;
        }
    }
    return 0;
}

/* Função strcat */
char concatenaStrings(char *s1, char *s2) {
    int tamanho = sizeof(s1) + sizeof(s2);
    char novoArray[tamanho];
    int i;
    for (i = 0; s1[i] != '\0'; i++)  {
        novoArray[i] = s1[i]; 
    } 

    for (int j = 0; s2[j] != '\0'; j++) {
        novoArray[i] = s2[j];
        i++;
    }
    novoArray[i] = '\0';
    puts(novoArray); 
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    printf("Deseja realizar qual operação: \n");
    printf("1) Retornar tamanho da string\n");
    printf("2) Verificar se duas strings são iguais\n");
    printf("3) Concatenar strings\n");

    printf("Escolha uma opção e digite a(s) string(s) em seguida:\n");
    scanf("%d", &opcao);
    printf("\n");
    

    if (opcao == 1) {  
        char str[50];
        int tam;
        
        leString(str);
        tam = tamanhoString(str);
        printf("A string tem tamanho %d (incluindo espaços em branco e o '\\0')\n", tam);
    } else if (opcao == 2) {
        char str1[50];
        char str2[50];

        leStrings(str1, str2);
        if (comparaStrings(str1, str2) == 1 || comparaStrings(str1, str2) == -1) {
            printf("São diferentes\n");
        } else if (comparaStrings(str1, str2) == 0){
            printf("São iguais\n");
        } 
       
    } else if (opcao == 3) {
        char str1[50];
        char str2[50];
        leStrings(str1, str2);
        concatenaStrings(str1, str2);
    } else {
        printf("Opção inválida!\n");
    }

    return 0;
}