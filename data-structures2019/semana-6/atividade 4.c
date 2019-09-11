void funcao_troca_inteiros(int *a, int *b) {
  int *aux; //declara ponteiro para inteiro
  aux = (int *) malloc (sizeof(int)); //aloca memória com tamanho de 1 inteiro (4 bytes)

  if (aux == NULL) {
    print("memoria insuficiente\n");
    exit(1);
  } else {
    *aux = *a; //guarda valor de a em aux
    *a = *b; //guarda valor de b em a
    *b = *aux; //guarda valor de aux (inicialmente valor de a) em b;
    free(aux); //libera memória alocada para aux
  }
}

void main() {
  char *p;
  p = (char *) malloc (4 * sizeof(char)); //aloca memória com tamanho de 4 char (4 bytes)
  strcpy(p, "IFSP"); //copia a string IFSP para a variável p
  p = (char *) realloc (p, 15 * sizeof(char)); //realoca tamanho da variável para 15 bytes
  strcat(p, "-Guarulhos"); //concatena a string -Guarulhos na string IFSP
  printf("%s", p); //imprime a string "IFSP-Guarulhos"
  free(p); //Libera memória alocada para p
}