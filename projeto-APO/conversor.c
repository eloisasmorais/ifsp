#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

double tabela[50][2];
char str[300]; 
int tamanho = 0; //Conta quantas conversões foram feitas - valor incrementado a cada vez que for feita uma conversão

int menu() {
    int opc;
    printf("Escolha uma opção:\n\n");
    printf("1) Sobre o programa - instruções e outras informações\n");
    printf("2) Realizar conversão\n");
    printf("3) Descrição - conceitos, histórico e definição\n");
    printf("4) Sair\n\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &opc);
    while (opc < 0 || opc > 4) { //Loop enquanto uma opção inválida for digitada 
        printf("Opção inválida, digite novamente: ");
        scanf("%d", &opc);
    }

    return opc; //Retorna o valor escolhido pelo usuário
}

void imprimeSobre() {
    printf("\n***************** CONVERSOR DE ÁREA *****************\n");
    printf("Realizado por:\n");
    printf("Eloisa Morais - 1960881\n");
    printf("Gabriel Zara - 1960865\n");
    printf("Turma A\n");
    printf("Disciplina: Algoritmos e Programação\n");
    printf("Instituto Federal de Ciência e Tecnologia (IFSP) - Campus Guarulhos\n\n");
}

//UTILIZAÇÃO DE STRINGS:
void imprimeDescricao(int n1) { //Imprime descrição sobre conversões
    if (n1==1){
        strcpy(str, "QUILÔMETRO QUADRADO: Quilômetro quadrado é uma unidade de medida comum da área. É igual a 100 hectares, 1000000 metros quadrados, 247.105 acres, ou 0.386102 milhas quadradas.");
    } else if(n1==2){
        strcpy(str, "HECTARE: Um hectare, representado pelo símbolo ha(conhecido também como hectômetro/hectómetro quadrado [hm²]), é uma unidade de medida de área equivalente a 100 (cem) ares ou a 10 000 (dez mil) metros quadrados.");
    } else if(n1==3){
        strcpy(str, "METRO QUADRADO: O metro quadrado (m²) é a unidade padrão de área adaptada para o Sistema Internacional de Unidades, e derivada da unidade básica metro. Corresponde à área que tem um quadrado com um metro de lado.");
    } else if(n1==4){
        strcpy(str, "CENTÍMETRO QUADRADO: Um centímetro quadrado é a área equivalente à de um polígono de quatro lados iguais (quadrado) com cada lado medindo um centímetro.");
    } else if(n1==5){
        strcpy(str, "MILÍMETRO QUADRADO: Unidade de medida de superfície (mm2) equivalente à área de um quadrado que tenha um milésimo de lado.");
    } else if(n1==6){
        strcpy(str, "MICROMETRO QUADRADO: O Micrometro quadrado é uma unidade de medida de superfície (μm²), definido como 1 milionésimo de metro quadrado.");
    } else if(n1==7){
        strcpy(str, "NANÔMETRO QUADRADO: O Nanômetro quadrado é uma unidade de medida microscópica de superfície (nm²), definido como um bilionésimo de metro");
    }
    printf("\n%s\n", str);
}

int escolheTipo() {
    int tipo;
    printf("1) Quilômetro quadrado (km²)\n");
    printf("2) Hectare (ha)\n");
    printf("3) Metro quadrado(m²)\n");
    printf("4) Centímetro quadrado (cm²)\n");
    printf("5) Milímetro quadrado (mm²)\n");
    printf("6) Micrometro quadrado (μm²)\n");
    printf("7) Nanômetro quadrado (nm²)\n");
    printf("Opção: ");
    scanf("%d", &tipo);

    return tipo;
}


/* Funções de conversão */

/* Funções de conversão de km² */
double kmQuadToHec(double val) { //Km² para hectares
    double resultado;
    resultado = val * 100;
    return resultado;
}

double kmQuadToMetroQuad(double val) { //Km² para m²
    double resultado;
    resultado = val * 1000000;
    return resultado;
}

double kmQuadToCmQuad(double val) { //Km²para Cm²
    double resultado;
    resultado = val * 10000000000;
    return resultado;
}

double kmQuadToMmQuad(double val) { //Km² para mm²
    double resultado;
    resultado = val * 1000000000000;
    return resultado;
}

double kmQuadToMicroQuad(double val) { //Km² para micrometro quadrado
    double resultado;
    resultado = val * pow(10,18);
    return resultado;
}

double kmQuadToNanoQuad(double val) { //Km² para nanometro quadrado
    double resultado;
    resultado = val * pow(10, 24);
    return resultado;
}


/*Funções de conversão de hectare */
double hecToKmQuad(double val) { //Hectare para km²
    double resultado;
    resultado = val / 100;
    return resultado;
}

double hecToMetroQuad(double val) { //Hectare para m²
    double resultado;
    resultado = val / 10000; 
    return resultado;
}

double hecToCmQuad(double val) { //hectare para cm²
    double resultado;
    resultado = val / 100000000;
    return resultado;
}

double hecToMmQuad(double val) { //hectare para mm²
    double resultado;
    resultado = val / pow(10,10);
    return resultado;
}

double hecToMicroQuad(double val) { //hectare para micrometro quadrado
    double resultado;
    resultado = val / pow(10, 16);
    return resultado;
}

double hecToNanoQuad(double val) { //hectare para nanometro quadrado
    double resultado;
    resultado = val / pow(10, 22);
    return resultado;
}

/*Funções de conversão de m² */
double mQuadToKmQuad(double val) { //M² para km²
    double resultado;
    resultado = val / pow(10, 6);
    return resultado;
}

double mQuadToHec(double val) { //M² para hectare
    double resultado;
    resultado = val / 10000;
    return resultado;
}

double mQuadToCmQuad(double val) { //M² para cm²
    double resultado;
    resultado = val * 10000;
    return resultado;
}

double mQuadToMmQuad(double val) { //M² para mm²
    double resultado;
    resultado = val * pow(10, 6);
    return resultado;
}

double mQuadToMicroQuad(double val) { //M² para micrometro quadrado
    double resultado;
    resultado = val * pow(10, 12);
    return resultado;
}

double mQuadToNanoQuad(double val) { //M² para nanometro quadrado
    double resultado;
    resultado = val * pow(10, 18);
    return resultado;
}

/*Funções de conversão de cm² */
double cmQuadToKmQuad(double val) { //Cm² para km²
    double resultado;
    resultado = val / pow(10, 10);
    return resultado;
}

double cmQuadToHec(double val) { //Cm² para hectare
    double resultado;
    resultado = val / pow(10, 8);
    return resultado;
}

double cmQuadToMQuad(double val) { //Cm² para m²
    double resultado;
    resultado = val / 10000;
    return resultado;
}

double cmQuadToMmQuad(double val) { //Cm² para mm²
    double resultado;
    resultado = val * 100;
    return resultado;
}

double cmQuadToMicroQuad(double val) { //Cm² para micrometro quadrado
    double resultado;
    resultado = val * pow(10, 8);
    return resultado;
}

double cmQuadToNanoQuad(double val) { //Cm² para nanometro quadrado
    double resultado;
    resultado = val * pow(10, 14);
    return resultado;
}

/*Funções de conversão de milímetro quadrado */
double mmQuadToKmQuad(double val) { //Mm² para km²
    double resultado;
    resultado = val / pow(10, 12); 
    return resultado;
}

double mmQuadToHec(double val) { //Mm² para hec
    double resultado;
    resultado = val / pow(10, 10);
    return resultado;
}

double mmQuadToMetroQuad(double val) { //Mm² para m²
    double resultado;
    resultado = val / pow(10, 6);
    return resultado;
}

double mmQuadToCmQuad(double val) { //Mm² para cm²
    double resultado;
    resultado = val / 100;
    return resultado;
}

double mmQuadToMicroQuad(double val) { //Mm² para micrometro quadrado
    double resultado; 
    resultado = val * pow(10, 6);
    return resultado;
}

double mmQuadToNanoQuad(double val) { //Mm² para nanometro quadrado
    double resultado;
    resultado = val / pow(10, 12);
    return resultado;
}

/*Funções de conversão de micrometro quadrado */
double microQuadToKmQuad(double val) { //Micrometro² para km²
    double resultado;
    resultado = val / pow(10, 18);  
    return resultado;
}

double microQuadToHec(double val) { //Micrometro² para hectare
    double resultado;
    resultado = val / pow(10, 16);
    return resultado;
}

double microQuadToMetroQuad(double val) { //Micrometro² para m²
    double resultado;
    resultado = val / pow(10, 12);
    return resultado;
}

double microQuadToCmQuad(double val) { //Micrometro² para cm²
    double resultado;
    resultado = val / pow(10, 6);
    return resultado;
}

double microQuadToMmQuad(double val) { //Micrometro² para mm²
    double resultado;
    resultado = val / pow(10, 6);
    return resultado;
}

double microQuadToNanoQuad(double val) { //Micrometro² para nanometro quadrado
    double resultado;
    resultado = val * pow(10, 6);
    return resultado;
}

/*Funções de conversão de nanometro quadrado */
double nanoQuadToKmQuad(double val) { //Nanometro² para km²
    double resultado;
    resultado = val / pow(10, 24);
    return resultado;
}

double nanoQuadToHec(double val) { //Nanometro² para hectare
    double resultado;
    resultado = val / pow(10, 22);
    return resultado;
}

double nanoQuadToMetroQuad(double val) { //Nanometro² para m²
    double resultado;
    resultado = val / pow(10, 18);
    return resultado;
}

double nanoQuadToCmQuad(double val) { //Nanometro² para cm²
    double resultado;
    resultado = val / pow(10, 14);
    return resultado;
}

double nanoQuadToMmQuad(double val) { //Nanometro² para mm²
    double resultado;
    resultado = val / pow(10, 12);
    return resultado;
}

double nanoQuadToMicroQuad(double val) { //Nanometro² para micrometro quadrado
    double resultado;
    resultado = val / pow(10, 6);
    return resultado;
}

/* INÍCIO DA MAIN */
int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    char tipo1, tipo2;
    double valor;
    double convertido;

    opcao = menu(); //Invoca a função e atribui à variavel o valor retornado da função

    while (opcao != 4) {
        //Chama as funções de acordo com a opção escolhida
        if (opcao == 1) imprimeSobre(); 
        if (opcao == 2 || opcao == 3) {
            printf("\n\nCONVERTER DE\n");
            tipo1 = escolheTipo();
            printf("PARA\n");
            tipo2 = escolheTipo();

            if (opcao == 2) {
                printf("\nDigite o valor a ser convertido: ");
                scanf("%lf", &valor);
                tabela[tamanho][0] = valor;
                if (tipo1 == 1) {
                    if (tipo2 == 1) {
                        printf("Já convertido!\n\n"); 
                        tabela[tamanho][1] = valor;
                        tamanho++;
                    } else if (tipo2 == 2) {
                        convertido = kmQuadToHec(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 3) {
                       convertido = kmQuadToMetroQuad(valor);
                       tabela[tamanho][1] = convertido;
                       tamanho++;
                    } else if (tipo2 == 4) {
                        convertido = kmQuadToCmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 5) {
                        convertido = kmQuadToMmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 6) {
                        convertido = kmQuadToMicroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 7) {
                        convertido = kmQuadToNanoQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    }
                } else if (tipo1 == 2) {
                    if (tipo2 == 1) {
                        convertido = hecToKmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 2) {
                       printf("Já convertido!\n\n");
                       tabela[tamanho][1] = valor;
                       tamanho++;
                    } else if (tipo2 == 3) {
                        convertido = hecToMetroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 4) {
                       convertido =  hecToCmQuad(valor);
                       tabela[tamanho][1] = convertido;
                       tamanho++;
                    } else if (tipo2 == 5) {
                       convertido =  hecToMmQuad(valor);
                       tabela[tamanho][1] = convertido;
                       tamanho++;
                    } else if (tipo2 == 6) {
                        convertido = hecToMicroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 7) {
                        convertido = hecToNanoQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    }
                } else if (tipo1 == 3) {
                    if (tipo2 == 1) {
                        convertido = mQuadToKmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 2) {
                       convertido = mQuadToHec(valor);
                       tabela[tamanho][1] = convertido;
                       tamanho++;
                    } else if (tipo2 == 3) {
                        printf("Já convertido!\n\n");
                        tabela[tamanho][1] = valor;
                        tamanho++;
                    } else if (tipo2 == 4) {
                        convertido = mQuadToCmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 5) {
                        convertido = mQuadToMmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 6) {
                        convertido = mQuadToMicroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 7) {
                        convertido = mQuadToNanoQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    }
                } else if (tipo1 == 4) {
                    if (tipo2 == 1) {
                        convertido = cmQuadToKmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 2) {
                        convertido = cmQuadToHec(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 3) {
                        convertido = cmQuadToMQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 4) {
                        printf("Já convertido!\n\n");
                        tabela[tamanho][1] = valor;
                        tamanho++;
                    } else if (tipo2 == 5) {
                        convertido = cmQuadToMmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 6) {
                        convertido = cmQuadToMicroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 7) {   
                        convertido = cmQuadToNanoQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    }
                } else if (tipo1 == 5) {
                    if (tipo2 == 1) {
                        convertido = mmQuadToKmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 2) {   
                        convertido = mmQuadToHec(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 3) {
                        convertido = mmQuadToMetroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 4) {
                        convertido = mmQuadToCmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 5) {
                        printf("Já convertido!\n\n");
                        tabela[tamanho][1] = valor;
                        tamanho++;
                    } else if (tipo2 == 6) {   
                        convertido = mmQuadToMicroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 7) {
                        convertido = mmQuadToNanoQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    }
                } else if (tipo1 == 6) {
                    if (tipo2 == 1) {  
                        convertido = microQuadToKmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 2) {   
                        convertido = microQuadToHec(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 3) {
                        convertido = microQuadToMetroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 4) {
                        convertido = microQuadToCmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 5) {
                        convertido = microQuadToMmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 6) {
                        printf("Já convertido!\n\n");
                        tabela[tamanho][1] = valor;
                        tamanho++;
                    } else if (tipo2 == 7) {
                        convertido = microQuadToNanoQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    }
                } else if (tipo1 == 7) {
                    if (tipo2 == 1) {
                        convertido = nanoQuadToKmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 2) {
                        convertido = nanoQuadToHec(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 3) {
                        convertido = nanoQuadToMetroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 4) {
                        convertido = nanoQuadToCmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 5) {
                        convertido = nanoQuadToMmQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 6) {
                        convertido = nanoQuadToMicroQuad(valor);
                        tabela[tamanho][1] = convertido;
                        tamanho++;
                    } else if (tipo2 == 7) {
                        printf("Já convertido!\n\n");
                        tabela[tamanho][1] = valor;
                        tamanho++;
                    }
                }
            }
        }
        if (opcao == 3) {
            imprimeDescricao(tipo1);
            imprimeDescricao(tipo2);
        }
        opcao = menu();
    }
    
    // printf("TAMANHO: %d\n\n", tamanho);

    if (tamanho > 0) {
        printf("Resultados:\n");
        /* For para impressão da matriz de dimensão Nx2 */
        for (int i = 0; i < tamanho; i++) {
            for (int j = 0; j < 2; j++) {
                printf("%.2f\t", tabela[i][j]);
            }
            printf("\n");
        }
        printf("\nObservação: alguns dos resultados podem estar sendo apresentados como 0.00 pois os valores convertidos são tão pequenos que o programa os arrendonda para 0.\n");
    }
    return 0;
}