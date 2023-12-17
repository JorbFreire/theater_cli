#ifndef ASSENTO_HEADER
#define ASSENTO_HEADER
#define MAX_NAME_LENGTH 99

typedef struct Assento
{
  // boolean
  int reservado;

  int linha;
  int coluna;
  char nome[MAX_NAME_LENGTH];
} Assento;

#endif
