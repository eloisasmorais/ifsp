#include <stdio.h>
#include <stdlib.h>

typedef struct operacao Operacao;

/* Cria ponteiro */
Operacao *criaOperacao (float val, float val2);

/* Libera memória alocada */
void liberaOperacao (Operacao *p);

/* Atribui novo valor para x e y */ 
void atribuiVal (Operacao *p, float val, float val2);

/* Realiza operação de acordo com o código digitado pelo usuário */
void realizaOperacao (Operacao *p, int cod);

/* Recupera resultado da operação */
float recuperaRes (Operacao *p);